/**************************************************************************
*
* Copyright 2017-2018 by Andrey Butok. FNET Community.
*
***************************************************************************
*
*  Licensed under the Apache License, Version 2.0 (the "License"); you may
*  not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*  http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
*  WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
***************************************************************************
*
*  LM3S specific SW timers implementation.
*
***************************************************************************/
#include "fnet.h"

#if !FNET_CFG_TIMER_ALT /* Use bare-metal timer */

#if FNET_LM3S
#include "stack/fnet_timer_prv.h"

static void fnet_cpu_timer_handler_top(void *cookie);

/************************************************************************
* DESCRIPTION: Top interrupt handler.
*************************************************************************/
static void fnet_cpu_timer_handler_top(void *cookie)
{
    TIMER_Type *base = FNET_CFG_CPU_TIMER_BASE;

    /* Clear Interrupt */
    base->ICR = TIMER_ICR_TATOCINT;

    /* Update FNET timer tick counter.*/
    _fnet_timer_ticks_inc();
}

/************************************************************************
* DESCRIPTION: Starts TCP/IP hardware timer. delay_ms - period of timer (ms)
*         e.g. Time-out period = (1/FNET_CFG_SYSTEM_CLOCK_KHZ)x(1)x(124+1)x528x100 = 100 ms
*************************************************************************/
fnet_return_t fnet_cpu_timer_init( fnet_time_t period_ms )
{
    fnet_return_t result;
    fnet_uint32_t prescaler, reload;
    TIMER_Type *base = FNET_CFG_CPU_TIMER_BASE;;

    /* Check if timer clocking already enabled
    */
    if (SYSCTL->RCGC1 & FNET_CFG_CPU_TIMER_CLK_MASK)
    {
        /* make sure timer stopped */
        base->CTL = 0ul;
        /* disable and clear it's interrupts */
        base->IMR = 0ul;
        base->ICR = TIMER_ICR_RTCCINT | TIMER_ICR_CAECINT | TIMER_ICR_CAMCINT | TIMER_ICR_TATOCINT;
    }
    /* Install interrupt handler and enable interrupt in NVIC.
    */
    result = _fnet_isr_vector_init(FNET_CFG_CPU_TIMER_VECTOR_NUMBER, fnet_cpu_timer_handler_top,
                                   _fnet_timer_handler_bottom,
                                   FNET_CFG_CPU_TIMER_VECTOR_PRIORITY, 0u);
    if(result == FNET_OK)
    {
        /* Initialize the GPTM timer to generate an interrupt every period_ms */
        /* Enable the clock to the GPTM module. Clock for GPTM Timer to be enabled */
        SYSCTL->RCGC1 |= FNET_CFG_CPU_TIMER_CLK_MASK;
        /* Calculate the timeout value. */
        reload = period_ms * FNET_MK_PERIPH_CLOCK_KHZ;
        /* Set 16-bit configuration (as 32-bit mode not usable by chip errata) */
        base->CFG = TIMER_CFG_16_BIT;
        /* Select periodic interrupt mode */
        base->TAMR = TIMER_TAMR_TAMR_PERIOD;
        /* calculate prescaler value */
        prescaler = 1;
        while ((reload / prescaler) > 0xFFFFul) prescaler++;
        /* Set prescaler (one off) */
        base->TAPR = prescaler - 1;
        /* Set counter reload */
        base->TAILR = (reload / prescaler) - 1;
        /* Clear interrupt */
        base->ICR = TIMER_ICR_TATOCINT;
        /* Enable interrupt */
        base->IMR = TIMER_IMR_TATOIM;
        /* Start counting */
        base->CTL = TIMER_CTL_TAEN;
    }
    return result;
}



/************************************************************************
* DESCRIPTION: Release TCP/IP hardware timer.
*************************************************************************/
void fnet_cpu_timer_release( void )
{
    TIMER_Type *base = FNET_CFG_CPU_TIMER_BASE;;
    /* Disable interrupt */
    base->IMR = 0ul;
    /* Stop timer */
    base->CTL = 0ul;
    /* Uninstall interrupt handler */
    fnet_isr_unregister(FNET_CFG_CPU_TIMER_VECTOR_NUMBER);
}

/* If vector table is in ROM, pre-install FNET ISR for the Timer Event interrupt*/
#if !FNET_CFG_CPU_VECTOR_TABLE_IS_IN_RAM
#if FNET_CFG_CPU_TIMER_NUMBER == 0
void TIMER0A_IRQHandler (void)
{
    FNET_ISR_HANDLER();
}
#elif FNET_CFG_CPU_TIMER_NUMBER == 1
void TIMER1A_IRQHandler (void)
{
    FNET_ISR_HANDLER();
}
#elif FNET_CFG_CPU_TIMER_NUMBER == 2
void TIMER2A_IRQHandler (void)
{
    FNET_ISR_HANDLER();
}
#elif FNET_CFG_CPU_TIMER_NUMBER == 3
void TIMER3A_IRQHandler (void)
{
    FNET_ISR_HANDLER();
}
#endif /* FNET_CFG_CPU_TIMER_NUMBER */
#endif /* !FNET_CFG_CPU_VECTOR_TABLE_IS_IN_RAM */

#endif /* FNET_LM3S */
#endif /* !FNET_CFG_TIMER_ALT */
