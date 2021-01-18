/**************************************************************************
*
* Copyright 2011-2017 by Andrey Butok. FNET Community.
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
*  Kinetis specific default configuration.
*
***************************************************************************/

/************************************************************************
 * !!!DO NOT MODIFY THIS FILE!!!
 ************************************************************************/

#ifndef _FNET_LM3S_CONFIG_H_

#define _FNET_LM3S_CONFIG_H_

#include "fnet_config.h"

#ifndef FNET_LM3S
    #define FNET_LM3S (0)
#endif

#if FNET_LM3S

    /*****************************************************************************
    *  Byte order is little endian.
    ******************************************************************************/
    #define FNET_CFG_CPU_LITTLE_ENDIAN                     (1)

    /**************************************************************************
    *  Default serial port number. EK-LM3S8962 board uses the default port number 0.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_SERIAL_PORT_DEFAULT
        #define FNET_CFG_CPU_SERIAL_PORT_DEFAULT           (0U) 
    #endif

    /**************************************************************************
    *  Maximum Timer number that is avaiable on the used platform.
    ******************************************************************************/
    #define  FNET_CFG_CPU_TIMER_NUMBER_MAX                 (3u)

    /*******************************************************************************
    * Timer number used by the FNET. It can range from 0 to FNET_CFG_CPU_TIMER_NUMBER_MAX.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_TIMER_NUMBER
        #define FNET_CFG_CPU_TIMER_NUMBER                  (FNET_CFG_CPU_TIMER_NUMBER_MAX)
    #endif

    /******************************************************************************
    * Timer Instance, Vector and Clock Enable Mask, used by FNET.
    *  NOTE: User application should not change these parameters!
    ******************************************************************************/
    #if (FNET_CFG_CPU_TIMER_NUMBER == 0u)
        #define FNET_CFG_CPU_TIMER_BASE                TIMER0
        #define FNET_CFG_CPU_TIMER_VECTOR_NUMBER       (35U)
        #define FNET_CFG_CPU_TIMER_CLK_MASK            (SYSCTL_RCGC1_TIMER0)
    #elif (FNET_CFG_CPU_TIMER_NUMBER == 1u)
        #define FNET_CFG_CPU_TIMER_BASE                TIMER1
        #define FNET_CFG_CPU_TIMER_VECTOR_NUMBER       (37U)
        #define FNET_CFG_CPU_TIMER_CLK_MASK            (SYSCTL_RCGC1_TIMER1)
    #elif (FNET_CFG_CPU_TIMER_NUMBER == 2u)
        #define FNET_CFG_CPU_TIMER_BASE                TIMER2
        #define FNET_CFG_CPU_TIMER_VECTOR_NUMBER       (39U)
        #define FNET_CFG_CPU_TIMER_CLK_MASK            (SYSCTL_RCGC1_TIMER2)
    #elif (FNET_CFG_CPU_TIMER_NUMBER == 3u)
        #define FNET_CFG_CPU_TIMER_BASE                TIMER3
        #define FNET_CFG_CPU_TIMER_VECTOR_NUMBER       (51U)
        #define FNET_CFG_CPU_TIMER_CLK_MASK            (SYSCTL_RCGC1_TIMER3)
    #else
        #error Invalid FNET_CFG_CPU_TIMER_NUMBER value!
    #endif
    /******************************************************************************
    *   Vector table address.@n
    *           By default, NVIC vector table register (VTOR).
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_VECTOR_TABLE
        #define FNET_CFG_CPU_VECTOR_TABLE                  FNET_LM3S_SCB_VTOR
    #endif

    /******************************************************************************
    *  Vector number of the Ethernet Receive Frame vector number.
    *  NOTE: User application should not change this parameter.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_ETH0_VECTOR_NUMBER
        #define FNET_CFG_CPU_ETH0_VECTOR_NUMBER            (58U)
    #endif

    /*****************************************************************************
    *  Max priority.
    ******************************************************************************/
    #define FNET_CFG_CPU_VECTOR_PRIORITY_MAX               (7u) /* 3 bits */

    /* MCUX SDK start up code does not support vector table in RAM */
    #ifndef FNET_CFG_CPU_VECTOR_TABLE_IS_IN_RAM
        #define FNET_CFG_CPU_VECTOR_TABLE_IS_IN_RAM        (0)
    #endif

    /*****************************************************************************
    *  On-chip Flash memory start address.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_FLASH_ADDRESS
        #define FNET_CFG_CPU_FLASH_ADDRESS                 (0x0U)
    #endif

    #ifndef FNET_CFG_CPU_FLASH_PROGRAM_SIZE
        #define FNET_CFG_CPU_FLASH_PROGRAM_SIZE            (4U)
    #endif

#endif /* FNET_LM3S */

#endif /* _FNET_LM3S_CONFIG_H_ */
