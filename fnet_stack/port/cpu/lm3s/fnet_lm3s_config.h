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
    #define FNET_CFG_CPU_LITTLE_ENDIAN                  (1)

    /**************************************************************************
    *  Default serial port number.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_SERIAL_PORT_DEFAULT
        #define FNET_CFG_CPU_SERIAL_PORT_DEFAULT        (0U) /* EK-LM3S8962 board uses the default port number 0.*/
    #endif

    /**************************************************************************
    *  Maximum Timer number that is avaiable on the used platform.
    ******************************************************************************/
    #define  FNET_CFG_CPU_TIMER_NUMBER_MAX              (3u)

    /*******************************************************************************
    * Timer number used by the FNET. It can range from 0 to FNET_CFG_CPU_TIMER_NUMBER_MAX.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_TIMER_NUMBER
        #define FNET_CFG_CPU_TIMER_NUMBER           (FNET_CFG_CPU_TIMER_NUMBER_MAX)
    #endif

    /**************************************************************************/ /*!
    *   Vector table address.@n
    *           By default, NVIC vector table register (VTOR).
    * @showinitializer
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_VECTOR_TABLE
        #define FNET_CFG_CPU_VECTOR_TABLE               FNET_LM3S_SCB_VTOR
    #endif

    /******************************************************************************
    *  Vector number of the timer interrupt.
    *  NOTE: User application should not change this parameter.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_TIMER_VECTOR_NUMBER
        #if (FNET_CFG_CPU_TIMER_NUMBER != 3u)
            #define FNET_CFG_CPU_TIMER_VECTOR_NUMBER        (35U  + FNET_CFG_CPU_TIMER_NUMBER*2)
        #else
            #define FNET_CFG_CPU_TIMER_VECTOR_NUMBER        (51U  + FNET_CFG_CPU_TIMER_NUMBER*2)
        #endif
    #endif

    /******************************************************************************
    *  Vector number of the Ethernet Receive Frame vector number.
    *  NOTE: User application should not change this parameter.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_ETH0_VECTOR_NUMBER
        #define FNET_CFG_CPU_ETH0_VECTOR_NUMBER             (58U)
    #endif

    /*****************************************************************************
    *  Max priority.
    ******************************************************************************/
    #define FNET_CFG_CPU_VECTOR_PRIORITY_MAX                (7u) /* 3 bits */

    /* MCUX SDK start up code does not support vector table in RAM */
    #ifndef FNET_CFG_CPU_VECTOR_TABLE_IS_IN_RAM
        #define FNET_CFG_CPU_VECTOR_TABLE_IS_IN_RAM         (0)
    #endif

    /*****************************************************************************
    *  On-chip Flash memory start address.
    ******************************************************************************/
    #ifndef FNET_CFG_CPU_FLASH_ADDRESS
        #define FNET_CFG_CPU_FLASH_ADDRESS                  (0x0U)
    #endif

    #ifndef FNET_CFG_CPU_FLASH_PROGRAM_SIZE
        #define FNET_CFG_CPU_FLASH_PROGRAM_SIZE             (4U)
    #endif

#endif /* FNET_LM3S */

#endif /* _FNET_LM3S_CONFIG_H_ */
