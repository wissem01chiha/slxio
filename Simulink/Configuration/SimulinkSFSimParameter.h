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
    ~SimulinkSFSimParameter();
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKSFSIMPARAMETER_H