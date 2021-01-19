#ifndef _FNET_LM3S8962_CONFIG_H_
#define _FNET_LM3S8962_CONFIG_H_

#define FNET_LM3S                                (1)

/* Maximum Transmission Unit */
#ifndef FNET_CFG_CPU_ETH0_MTU
    #define FNET_CFG_CPU_ETH0_MTU                (800)
#endif

/* System frequency in Hz. */
#ifndef FNET_CFG_CPU_CLOCK_HZ
    #define FNET_CFG_CPU_CLOCK_HZ                (50000000ul)
#endif




#endif /* _FNET_LM3S8962_CONFIG_H_ */