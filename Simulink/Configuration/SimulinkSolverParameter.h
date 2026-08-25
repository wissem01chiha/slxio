// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKSOLVERPARAMETER_H
#define SIMULINKSOLVERPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

struct SimulinkSolver;

class SLXIO_APIEXPORT SimulinkSolverParameter
    : public IParameterObject<SimulinkSolver>
{
public:
    ~SimulinkSolverParameter();
    IParameterObjectBase* New() override;

    std::string GetName() const override { return "Solver"; };
    DataType GetDataType() const override;
    UInt16 Size() const override { return (UInt16)1; }
    std::string ToString() const override { return std::string(""); };

    SimulinkSolver& GetValue() override;

private:
    SimulinkSolver m_data;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKSOLVERPARAMETER_H