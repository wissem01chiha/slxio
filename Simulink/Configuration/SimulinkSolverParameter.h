// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSOLVERPARAMETER_H
#define SIMULINKSOLVERPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObject.h"
#include "SimulinkSolver.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SimulinkSolverParameter
    : public IParameterObject<SimulinkSolver>
{
public:
    IParameterObjectBase* New() override;

    std::string GetName() const override;
    DataType GetDataType() const override;
    UInt16 Size() const override;
    std::string ToString() const override;
    SimulinkSolver& GetValue() override;

    ~SimulinkSolverParameter() = default;

private:
    SimulinkSolver m_data;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKSOLVERPARAMETER_H