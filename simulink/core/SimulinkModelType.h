// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKMODELTYPE_H
#define SIMULINKMODELTYPE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "SimulinkPCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Represents the type of a Simulink model.
 */
enum class SimulinkModelType
{
    Library,
    Model
};

SLXIO_APIEXPORT std::string ToString(SimulinkModelType type);

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIMULINKMODELTYPE_H