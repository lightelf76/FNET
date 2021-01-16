/**************************************************************************
*
* Copyright 2017 by Andrey Butok. FNET Community.
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
*  LPC Serial port I/O functions.
*
***************************************************************************/

#include "fnet_config.h"

#if FNET_LM3S
#include "fnet.h"

#include "lm3s_regs.h"
#include "lm3s_bits.h"

#define FNET_LM3S_UART_PORT_NUMBER                (3)
static UART_Type * fnet_lm3s_get_uart_port_ptr[FNET_LM3S_UART_PORT_NUMBER] =
{
    UART0,
    UART1,
    UART2
};

/********************************************************************/
void fnet_cpu_serial_putchar (fnet_index_t port_number, fnet_char_t character)
{
    UART_Type * port_ptr = fnet_lm3s_get_uart_port_ptr[port_number];

    /* Wait until space is available in the FIFO */
    while((port_ptr->FR & UART_FR_TXFF) != 0u)
    {}

    /* Send the character */
    port_ptr->DR = character;
}

/********************************************************************/
fnet_int32_t fnet_cpu_serial_getchar (fnet_index_t port_number)
{
    UART_Type * port_ptr = fnet_lm3s_get_uart_port_ptr[port_number];

    /* Wait until character has been received */
    if((port_ptr->FR & UART_FR_RXFE) == 0u)
    {
        /* Return the 8-bit data from the receiver */
        return (fnet_int32_t)(port_ptr->DR & UART_DR_DATA_M);
    }

    return FNET_ERR;
}

#if FNET_CFG_CPU_SERIAL_IO_INIT
static inline void fnet_cpu_serial_gpio_init(fnet_index_t port_number)
{
    /* TODO: only Fury-class devices supported now */
    /* Enable the pins for the selected UART */
    /* Enable the clock to the selected UART */
    switch(port_number)
    {
        case 0: /* UART0 */
            /* Enable port clock */
            SYSCTL->RCGC2 |= SYSCTL_RCGC2_GPIOA;
            /* Enable the clock to the selected UART */
            SYSCTL->RCGC1 |= SYSCTL_RCGC1_UART0;
            /* Enable PA0 and PA1 digital functions */
            GPIOA->DEN |= (1 << 0) | (1 << 1);
            /* Set PA1 pin direction to output */
            GPIOA->DIR |= (1 << 1);
            /* Switch PA0 and PA1 to alternative functions */
            GPIOA->AFSEL |= (1 << 0) | (1 << 1);
            break;
        case 1:
            /* Enable port clock */
            SYSCTL->RCGC2 |= SYSCTL_RCGC2_GPIOD;
            /* Enable the clock to the selected UART */
            SYSCTL->RCGC1 |= SYSCTL_RCGC1_UART1;
            /* Enable PD12 and PD13 digital functions */
            GPIOD->DEN |= (1 << 12) | (1 << 13);
            /* Set PD13 pin direction to output */
            GPIOD->DIR |= (1 << 13);
            /* Switch PD12 and PD13 to alternative functions */
            GPIOD->AFSEL |= (1 << 12) | (1 << 13);
            break;
        default:
            /* Enable port clock */
            SYSCTL->RCGC2 |= SYSCTL_RCGC2_GPIOG;
            /* Enable the clock to the selected UART */
            SYSCTL->RCGC1 |= SYSCTL_RCGC1_UART2;
            /* Enable PG0 and PG1 digital functions */
            GPIOG->DEN |= (1 << 0) | (1 << 1);
            /* Set PG1 pin direction to output */
            GPIOG->DIR |= (1 << 1);
            /* Switch PG0 and PG1 to alternative functions */
            GPIOG->AFSEL |= (1 << 0) | (1 << 1);
            break;

    }
}
#endif /* FNET_CFG_CPU_SERIAL_IO_INIT */

/********************************************************************/
fnet_return_t fnet_cpu_serial_init(fnet_index_t port_number, fnet_uint32_t baud_rate)
{
    UART_Type *     uart_ptr;
    fnet_uint32_t   temp;
    fnet_return_t   result = FNET_ERR;

    /* Check port_number is valid for MCU */
    if (((port_number == 0u) && ((SYSCTL->DC2 & SYSCTL_DC2_UART0) != 0u)) ||
        ((port_number == 1u) && ((SYSCTL->DC2 & SYSCTL_DC2_UART1) != 0u)) ||
        ((port_number == 2u) && ((SYSCTL->DC2 & SYSCTL_DC2_UART2) != 0u)))
    {
#if FNET_CFG_CPU_SERIAL_IO_INIT
        /* Init GPIO.*/
        fnet_cpu_serial_gpio_init(port_number);
#endif
        /* Get UART module base address.*/
        uart_ptr = fnet_lm3s_get_uart_port_ptr[port_number];
        /* Make sure UART disabled */
        uart_ptr->CTL = 0; 
        /* Disable UART interrupts */
        uart_ptr->IM  = 0;
        /* Flush FIFOs */
        uart_ptr->LCRH = 0;
        /* Calculate baudrate divisors */
        temp = FNET_LM3S_PERIPH_CLOCK_KHZ * 4000UL;
        temp = temp / baud_rate + 32;
        /* Initialize the UART for 8N1 operation and
        *  FIFO enabled.
        */
        uart_ptr->LCRH = UART_LCRH_FEN | UART_LCRH_WLEN_8;
        /* Initialize baudrate divisor */
        uart_ptr->IBRD = temp / 64;
        uart_ptr->FBRD = temp & 0x3f;
        /* Enable UART with transmitter and receiver */
        uart_ptr->CTL = UART_CTL_RXE | UART_CTL_TXE | UART_CTL_UARTEN;
        result = FNET_OK;
    }
    return result; 
}



#endif /*FNET_LM3S*/

