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
    SimulinkSolver& GetValue() override;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKSOLVERPARAMETER_H