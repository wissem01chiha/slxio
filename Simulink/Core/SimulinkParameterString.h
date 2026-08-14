// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKPARAMETERSTRING_H
#define SIMULINKPARAMETERSTRING_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "SimulinkParameterBase.h"

#include <memory>
#include <string>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class SimulinkParameterString
 */
class SLXIO_APIEXPORT SimulinkParameterString : public SimulinkParameterBase
{
public:
    /** Returns current parameter name*/
    std::string GetName() override;

    /** Returns parameter dimensions */
    std::vector<UInt16> GetDimensions() override;

    /** Serlise Parameter to string */
    std::string ToString() const override;

    /** Get code generation data struct*/
    std::shared_ptr<CoderInfo> GetCoderInfo() override;

    /** Parameter minumin value */
    Float32 GetMin() override;

    /** Parameter maxiumum value */
    Float32 GetMax() override;

    /** Get the resolved parameter SimulinkDataType */
    SimulinkDataType GetDataType() override;

private:
    std::string Data;
    std::string Name;
    std::vector<UInt16> Dimensions;
    std::shared_ptr<CoderInfo> Coder;
    SimulinkDataType DataType;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKPARAMETERSTRING_H
