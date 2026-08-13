// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISIGNALATTRIBUTES_H
#define ISIGNALATTRIBUTES_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ISignalAttributes
 * @brief Signal metadata of a block in Simulink, often displayed in
 *        the Signal Attributes tab of the block Parameters dialog box.
 * Typical attributes include min/max values, data type, dimensions,
 * complexity, and sample time.
 */
class SLXIO_APIEXPORT ISignalAttributes
{
public:
    ISignalAttributes() = default;
    virtual ~ISignalAttributes() = default;

    virtual void SetOutputMinimum(Float64 min) = 0;
    virtual void SetOutputMaximum(Float64 max) = 0;
    virtual Float64 GetOutputMinimum() const = 0;
    virtual Float64 GetOutputMaximum() const = 0;

    virtual void SetOutputDataType(const std::string& dtype) = 0;
    virtual std::string GetOutputDataType() const = 0;

    virtual void SetComplexity(bool isComplex) = 0;
    virtual bool IsComplex() const = 0;

    virtual void SetDimensions(const std::string& dims) = 0;
    virtual std::string GetDimensions() const = 0;

    virtual void SetSampleTime(Float64 ts) = 0;
    virtual Float64 GetSampleTime() const = 0;

    virtual void SetLockDataType(bool lock) = 0;
    virtual bool IsDataTypeLocked() const = 0;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // ISIGNALATTRIBUTES_H
