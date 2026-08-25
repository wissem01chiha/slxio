// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSFSIMPARAMETER_H
#define SIMULINKSFSIMPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObject.h"
#include "SimulinkSFSim.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SimulinkSFSimParameter
    : public IParameterObject<SimulinkSFSim>
{
public:
    IParameterObjectBase* New() override;

    std::string GetName() const override;
    DataType GetDataType() const override;
    UInt16 Size() const override;
    std::string ToString() const override;
    SimulinkSFSim& GetValue() override;

    ~SimulinkSFSimParameter() = default;

private:
    SimulinkSFSim m_data;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKSFSIMPARAMETER_H