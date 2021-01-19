/**************************************************************************
*
* Copyright 2008-2018 by Andrey Butok. FNET Community.
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
*  Luminary MAC driver definitions.
*
***************************************************************************/
#ifndef _FNET_LM3S_MAC_H_
#define _FNET_LM3S_MAC_H_
#include "fnet_config.h"

#if FNET_LM3S
#include "fnet.h"
#include "stack/fnet_eth_prv.h"

#define FNET_LM3S_MII_TIMEOUT            (0x10000U)   /* Timeout counter for MII communications.*/

#if defined(__cplusplus)
extern "C" {
#endif
void fnet_fec_output(fnet_netif_t *netif, fnet_netbuf_t *nb);
#if FNET_CFG_MULTICAST
#error LM3S has no support for FNET_CFG_MULTICAST!
#endif /* FNET_CFG_MULTICAST */

/* For debug needs.*/
void fnet_fec_poll(fnet_netif_desc_t netif_desc);
void fnet_fec_stop(fnet_netif_t *netif);
void fnet_fec_resume(fnet_netif_t *netif);


#if defined(__cplusplus)
}
#endif

#endif /*FNET_LM3S*/
#endif /*_FNET_LM3S_MAC_H_*/