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
class SLXIO_APIEXPORT SimulinkDataType final
{
public:
    enum class Type
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

    explicit SimulinkDataType(Type type);
    Type GetType() const;
    std::string ToString() const;
    static SimulinkDataType FromString(const std::string& str);

    bool isNumeric() const;
    bool isFloatingPoint() const;
    bool isSigned() const;

private:
    Type m_type;
};
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKDATATYPE_H
