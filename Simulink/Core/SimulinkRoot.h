// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKROOT_H
#define SIMULINKROOT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class Logger;
class SimulinkArray;
class SimulinkObject;

/**
 * @class SimulinkRoot
 * @brief A Mimic for SimulinkRoot Object given by sfroot function
 * @see
 * https://www.mathworks.com/help/stateflow/ref/sfroot.html?s_tid=srchtitle_support_results_10_Simulink.Root+object
 */
class SLXIO_APIEXPORT SimulinkRoot final
{
public:
  /* Default Construtor */
  SimulinkRoot();

  /* Default Destructor */
  ~SimulinkRoot() = default;

  /* Deleted copy constructor */
  SimulinkRoot(const SimulinkRoot&) = delete;

  /* Deleted copy assignment operator */
  SimulinkRoot& operator=(const SimulinkRoot&) = delete;

  /* Deleted move constructor */
  SimulinkRoot(SimulinkRoot&& other) = delete;

  /* Deleted move assignment operator */
  SimulinkRoot& operator=(SimulinkRoot&& other) = delete;

  SimulinkArray* GetSubsystems();
  SimulinkArray* GetConfigSets();

  /* Find the state named A.*/
private:
  SimulinkArray* Subsystems;
  SimulinkArray* ConfigSets;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SIMULINKROOT_H
