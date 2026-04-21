// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __ABINamespace_h__
#define __ABINamespace_h__

#include "VersionMacro.h"

#if ENABLE_NAMESPACE 
    #define SLXIO_NAMESPACE_BEGIN namespace slxio {
    #define SLXIO_NAMESPACE_END   };
#else
    #define SLXIO_NAMESPACE_BEGIN
    #define SLXIO_NAMESPACE_END
#endif

#ifdef ENABLE_ABI_NAMESPACE 
    #define SLXIO_ABI_NAMESPACE_BEGIN namespace SLXIO_VERSION_STRING {
    #define SLXIO_ABI_NAMESPACE_END   };
#else
    #define SLXIO_ABI_NAMESPACE_BEGIN
    #define SLXIO_ABI_NAMESPACE_END
#endif 

#endif /* __ABINamespace_h__ */