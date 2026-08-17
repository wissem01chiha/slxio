// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKDATATYPE_H
#define SIMULINKDATATYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkDataType
 * @brief Simulink Supported Data Types.
 */
enum class SimulinkDataType
{
    Auto,
    Double,
    Single,
    Int8,
    UInt8,
    Int16,
    UInt16,
    Int32,
    UInt32,
    UInt64,
    Boolean,
    Half,
    String,
    Char
};

SLXIO_APIEXPORT std::string ToString(SimulinkDataType type);
SLXIO_APIEXPORT SimulinkDataType FromString(const std::string& str);
SLXIO_APIEXPORT bool IsNumeric(SimulinkDataType type);
SLXIO_APIEXPORT bool IsFloatingPoint(SimulinkDataType type);
SLXIO_APIEXPORT bool IsSigned(SimulinkDataType type);

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKDATATYPE_H
