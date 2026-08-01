// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONFIGSETMANAGER_H
#define SIMULINKCONFIGSETMANAGER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "ErrorCode.h"
#include "Logger.h"
#include <memory>
#include <vector>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkConfigSet;

/**
 * @brief Manages a collection of Simulink configuration sets.
 * of type SimulinkConfigSet.
 * @note This is not a part of Simulink API, but a utility added to slxio
 * to manage multiple configuration sets
 */
class SLXIO_APIEXPORT SimulinkConfigSetManager final
{
public:
  SimulinkConfigSetManager();
  ~SimulinkConfigSetManager() = default;

  /// @brief Copy constructor
  SimulinkConfigSetManager(const SimulinkConfigSetManager&) = delete;

  /// @brief Assignment operator
  SimulinkConfigSetManager& operator=(const SimulinkConfigSetManager&) = delete;

  /// @brief Adds a configuration set to the manager.
  ReturnType AddElement(std::shared_ptr<SimulinkConfigSet> cfg);

  /// @brief Removes a configuration set from the manager.
  ReturnType RemoveElement(std::shared_ptr<SimulinkConfigSet> cfg);

  /// @brief Retrieves the active configuration set.
  /// @note Only one configuration set can be active at a time.
  /// @warning by design only one configuration set can be active at a time,
  /// activating a configuration set does not automatically deactivate the
  /// previously active one, it is the responsibility of the caller to ensure
  /// that only one configuration set is active at a time.
  /// @return nullptr if no active configuration set is found, otherwise a
  /// pointer to the active configuration set.
  std::shared_ptr<SimulinkConfigSet> getActiveConfiguration();

  /// @brief Checks if a configuration set exists in the manager.
  bool hasConfigurationSet(const std::shared_ptr<SimulinkConfigSet>& cfg) const;

private:
  Logger& l;
  std::vector<std::shared_ptr<SimulinkConfigSet>> cfgs;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // SIMULINKCONFIGSETMANAGER_H
