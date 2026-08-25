// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKRTWPARAMETER_H
#define SIMULINKRTWPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObject.h"
#include "SimulinkRTW.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SimulinkRTWParameter
    : public IParameterObject<SimulinkRTW>
{
public:
    IParameterObjectBase* New() override;

    std::string GetName() const override;
    DataType GetDataType() const override;
    UInt16 Size() const override;
    std::string ToString() const override;
    SimulinkRTW& GetValue() override;

    ~SimulinkRTWParameter() = default;

private:
    SimulinkRTW m_data;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKRTWPARAMETER_H