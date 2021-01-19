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
*  FEC/ENET module driver implementation.
*
***************************************************************************/

#include "fnet.h"
#if (FNET_LM3S) && (FNET_CFG_CPU_ETH0)

#include "fnet_fec.h"
#include "stack/fnet_eth_prv.h"


/*******************************************************************************
 *     Ethernet interface API structure.
 ******************************************************************************/
const fnet_eth_api_t fnet_lm3s_eth_api =
{
    .phy_read = _fnet_lm3s_phy_read,
    .phy_write = _fnet_lm3s_phy_write,
};

/*****************************************************************************
 * ENET network-interface general API structure.
 ******************************************************************************/
const fnet_netif_api_t fnet_lm3s_api =
{
    .netif_type = FNET_NETIF_TYPE_ETHERNET,                     /* Data-link type. */
    .netif_hw_addr_size = sizeof(fnet_mac_addr_t),
    .netif_init = _fnet_lm3s_init,                               /* Initialization function.*/
    .netif_release = _fnet_lm3s_release,                         /* Shutdown function.*/
#if FNET_CFG_IP4
    .netif_output_ip4 = _fnet_eth_output_ip4,                    /* IPv4 Transmit function.*/
#endif
    .netif_change_addr_notify = _fnet_eth_change_addr_notify,    /* Address change notification function.*/
    .netif_drain = _fnet_eth_drain,                              /* Drain function.*/
    .netif_get_hw_addr = _fnet_lm3s_get_hw_addr,
    .netif_set_hw_addr = _fnet_lm3s_set_hw_addr,
    .netif_is_connected = _fnet_eth_is_connected,
    .netif_get_statistics = _fnet_lm3s_get_statistics,
#if FNET_CFG_IP6
    .netif_output_ip6 = _fnet_eth_output_ip6,                   /* IPv6 Transmit function.*/
#endif
    .eth_api = &fnet_lm3s_eth_api,
};

/************************************************************************
*     Global Data Structures
*************************************************************************/

fnet_enet_if_t fnet_lm3s_if  = {.base = ETH, /* Peripheral ETH base pointer */
                                .vector_number = FNET_CFG_CPU_ETH0_VECTOR_NUMBER,
                               };



#endif /* (FNET_LM3S) && (FNET_CFG_CPU_ETH0) */
