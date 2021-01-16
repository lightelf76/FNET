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

#include "lm3s_regs.h"
#include "lm3s_bits.h"

static void fnet_cpu_timer_handler_top(void *cookie);

/* Array of CTIMER base addresses. */
static TIMER_Type *const fnet_lm3s_ctimer_base_addr[FNET_CFG_CPU_TIMER_NUMBER_MAX+1] = 
{
    TIMER0,
    TIMER1,
    TIMER2,
    TIMER3,
};


/************************************************************************
* DESCRIPTION: Top interrupt handler.
*************************************************************************/
static void fnet_cpu_timer_handler_top(void *cookie)
{
    TIMER_Type             *base;

    base = fnet_lm3s_ctimer_base_addr[FNET_CFG_CPU_TIMER_NUMBER];

    /* Get Interrupt status flags and clear it*/
    base->ICR = TIMER_ICR_TATOCINT;

    /* Update FNET timer tick counter.*/
    _fnet_timer_ticks_inc();
}




    TIMER3->CFG   = TIMER_CFG_16_BIT;
    TIMER3->TAMR  = TIMER_TAMR_TAMR_1_SHOT;
    TIMER3->TAPR  = 9; // делитель на 10
    TIMER3->TAILR = 10000;
    TIMER3->TBMR  = TIMER_TBMR_TBMR_1_SHOT;
    TIMER3->TBPR  = 0; // делитель на 1
    TIMER3->TBILR = 10000;
    // очистим флаги прерываний
    TIMER3->ICR   = TIMER_ICR_TBTOCINT | TIMER_ICR_TATOCINT;
    __ISB();
    // разрешаем прерывания по переполнению
    TIMER3->IMR   = TIMER_IMR_TBTOIM | TIMER_IMR_TATOIM;
    __DSB();

        TIMER3->CTL = TIMER_CTL_TAEN;

         TIMER3->CTL = TIMER_CTL_TBEN | TIMER_CTL_TAEN;


/************************************************************************
* DESCRIPTION: Starts TCP/IP hardware timer. delay_ms - period of timer (ms)
*         e.g. Time-out period = (1/FNET_CFG_SYSTEM_CLOCK_KHZ)x(1)x(124+1)x528x100 = 100 ms
*************************************************************************/
fnet_return_t fnet_cpu_timer_init( fnet_time_t period_ms )
{
    fnet_return_t result;
    fnet_uint32_t timeout;

    /* Install interrupt handler and enable interrupt in NVIC.
    */
    result = _fnet_isr_vector_init(FNET_CFG_CPU_TIMER_VECTOR_NUMBER, fnet_cpu_timer_handler_top,
                                   _fnet_timer_handler_bottom,
                                   FNET_CFG_CPU_TIMER_VECTOR_PRIORITY, 0u);
    if(result == FNET_OK)
    {
        /* Initialize the PIT timer to generate an interrupt every period_ms */
#if FNET_CFG_CPU_TIMER_NUMBER == 0
        SYSCTL->RCGC1 |= SYSCTL_RCGC1_TIMER0; 
#elif FNET_CFG_CPU_TIMER_NUMBER == 1
#elif FNET_CFG_CPU_TIMER_NUMBER == 2
#elif FNET_CFG_CPU_TIMER_NUMBER == 3

#endif /* FNET_CFG_CPU_TIMER_NUMBER */
        /* Enable the clock to the PIT module. Clock for PIT Timers to be enabled */
        FNET_MK_SIM_SCGC6 |= FNET_MK_SIM_SCGC6_PIT_MASK;

        /* Enable the PIT timer module. */
        FNET_MK_PIT_MCR &= ~FNET_MK_PIT_MCR_MDIS_MASK;

        /* Calculate the timeout value. */
        timeout = period_ms * FNET_MK_PERIPH_CLOCK_KHZ;
        FNET_MK_PIT_LDVAL(FNET_CFG_CPU_TIMER_NUMBER) = timeout;

        /* Enable the timer and enable interrupts */
        FNET_MK_PIT_TCTRL(FNET_CFG_CPU_TIMER_NUMBER) |= FNET_MK_PIT_TCTRL_TEN_MASK | FNET_MK_PIT_TCTRL_TIE_MASK;
    }

    return result;
}



/************************************************************************
* DESCRIPTION: Release TCP/IP hardware timer.
*************************************************************************/
void fnet_cpu_timer_release( void )
{
    TIMER_Type             *base;

    base = fnet_LM3S_ctimer_base_addr[FNET_CFG_CPU_TIMER_NUMBER];

    TIMER_Deinit(base);
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
