
/* This file was automatically generated by nrfutil on 2019-02-14 (YY-MM-DD) at 14:06:19 */

#include "sdk_config.h"
#include "stdint.h"
#include "compiler_abstraction.h"

#if NRF_CRYPTO_BACKEND_OBERON_ENABLED
/* Oberon backend is changing endianness thus public key must be kept in RAM. */
#define _PK_CONST
#else
#define _PK_CONST const
#endif


/* This file was generated with a throwaway private key, that is only inteded for a debug version of the DFU project.
  Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate a valid public key. */

#ifdef NRF_DFU_DEBUG_VERSION 

/** @brief Public key used to verify DFU images */
__ALIGN(4) _PK_CONST uint8_t pk[64] =
{
    0x0f, 0xab, 0x4d, 0xd3, 0xdf, 0x64, 0x18, 0x4e, 0x2f, 0x1b, 0x34, 0x4f, 0x4b, 0x46, 0xeb, 0x22, 0xc1, 0xd8, 0xa7, 0x49, 0x14, 0x37, 0xc5, 0x14, 0x1c, 0x8d, 0x2c, 0x5b, 0xfa, 0xc9, 0x33, 0x6c,
    0xa0, 0x31, 0x56, 0x50, 0x69, 0xcd, 0xd0, 0x61, 0xd7, 0xd4, 0x5d, 0x80, 0x16, 0xf3, 0x01, 0x99, 0xe3, 0x95, 0x5e, 0x2c, 0xb9, 0x23, 0xd6, 0x7a, 0x1e, 0x63, 0x5e, 0xc7, 0xeb, 0x21, 0xaa, 0xdb
};

#else
#error "Debug public key not valid for production. Please see https://github.com/NordicSemiconductor/pc-nrfutil/blob/master/README.md to generate it"
#endif
