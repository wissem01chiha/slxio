// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKROOT_H
#define SIMULINKROOT_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"
#include "PlatformTypes.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief A Mimic for SimulinkRoot Object given by sfroot function
 * @see
 * https://www.mathworks.com/help/stateflow/ref/sfroot.html?s_tid=srchtitle_support_results_10_Simulink.Root+object
 */
class APIEXPORT SimulinkRoot final
{
public:
  SimulinkRoot();
  SimulinkArray& getSubsystems();
  SimulinkArray& getConfigSets();

private:
  SimulinkArray subsystems;
  SimulinkArray configSets;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKROOT_H