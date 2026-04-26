// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __ABINamespaceMacro_h__
#define __ABINamespaceMacro_h__

#include "Config.h"
#include "VersionMacro.h"

#if SLXIO_NAMESPACE 
    #define SLXIO_NAMESPACE_BEGIN namespace slxio {
    #define SLXIO_NAMESPACE_END   };
#else
    #define SLXIO_NAMESPACE_BEGIN
    #define SLXIO_NAMESPACE_END
#endif

#if SLXIO_ABI_NAMESPACE 
    #define SLXIO_ABI_NAMESPACE_BEGIN namespace SLXIO_VERSION_STRING {
    #define SLXIO_ABI_NAMESPACE_END   };
#else
    #define SLXIO_ABI_NAMESPACE_BEGIN
    #define SLXIO_ABI_NAMESPACE_END
#endif 

#endif /* __ABINamespaceMacro_h__ */