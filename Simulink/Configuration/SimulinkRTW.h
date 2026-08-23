// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKRTW_H
#define SIMULINKRTW_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ConfigurationPCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

struct SLXIO_APIEXPORT SimulinkRTW final
{
    std::string DisabledProps;
    UInt16 DisabledPropsCount;

    bool IsValid() const;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKRTW_H
