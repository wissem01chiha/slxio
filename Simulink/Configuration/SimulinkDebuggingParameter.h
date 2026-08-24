// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKDEBUGGINGPARAMETER_H
#define SIMULINKDEBUGGINGPARAMETER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IParameterObject.h"
#include "SimulinkDebugging.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SimulinkDebuggingParameter
{
public:
    ~SimulinkDebuggingParameter();
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKDEBUGGINGPARAMETER_H