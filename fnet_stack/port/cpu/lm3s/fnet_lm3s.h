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
*  Private. Kinetis Peripheral Registers definitions.
*
***************************************************************************/

#ifndef _FNET_LM3S_H_

#define _FNET_LM3S_H_

#if FNET_LM3S

/*********************************************************************
*
* The basic data types.
*
*********************************************************************/
typedef unsigned char fnet_uint8_t;         /*  8 bits */
typedef unsigned short int fnet_uint16_t;   /* 16 bits */
typedef unsigned long int fnet_uint32_t;    /* 32 bits */
typedef unsigned long long fnet_uint64_t;   /* 64 bits */

typedef signed char fnet_int8_t;            /*  8 bits */
typedef signed short int fnet_int16_t;      /* 16 bits */
typedef signed long int fnet_int32_t;       /* 32 bits */
typedef signed long long fnet_int64_t;      /* 64 bits */

typedef volatile fnet_uint8_t fnet_vuint8_t;     /*  8 bits */
typedef volatile fnet_uint16_t fnet_vuint16_t;   /* 16 bits */
typedef volatile fnet_uint32_t fnet_vuint32_t;   /* 32 bits */
typedef volatile fnet_uint64_t fnet_vuint64_t;   /* 64 bits */


/* Ensure that the Thumb bit is set.*/
#define FNET_CPU_ADDR_TO_INSTRUCTION(addr)    ((fnet_uint32_t)(addr)|0x1u)
#define FNET_CPU_INSTRUCTION_TO_ADDR(addr)    ((fnet_uint32_t)(addr)&(~0x1u))

/************************************************************************
* Stellaris peripheral clock in KHZ.
*************************************************************************/
fnet_uint32_t fnet_lm3s_periph_clk_khz(void);

#define FNET_LM3S_PERIPH_CLOCK_KHZ     fnet_lm3s_periph_clk_khz()
#define FNET_LM3S_PERIPH_CLOCK_MHZ     (fnet_lm3s_periph_clk_khz()/1000)

#include "lm3s_regs.h"
#include "lm3s_bits.h"

#if defined(__cplusplus)
extern "C" {
#endif

void fnet_lm3s_irq_enable(fnet_uint32_t irq_desc);
fnet_uint32_t fnet_lm3s_irq_disable(void);

#if defined(__cplusplus)
}
#endif

#endif /* FNET_MK */

#endif /*_FNET_MK_H_*/
