// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CONFIGSETMANAGER_H
#define CONFIGSETMANAGER_H

#include "ABINamespace.h"
#include "ErrorCode.h"
#include <memory>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkConfigSet;

/**
 * @brief Manages a collection of Simulink configuration sets.
 * of type SimulinkConfigSet.
 */
class SimulinkConfigSetManager final {
public:
  SimulinkConfigSetManager();
  ~SimulinkConfigSetManager() = default;

  /// @brief Copy constructor
  SimulinkConfigSetManager(const SimulinkConfigSetManager &) = delete;

  /// @brief Assignment operator
  SimulinkConfigSetManager &
  operator=(const SimulinkConfigSetManager &) = delete;

  /// @brief Adds a configuration set to the manager.
  ErrorCode add(std::shared_ptr<SimulinkConfigSet> cfg);

  /// @brief Removes a configuration set from the manager.
  ErrorCode remove(std::shared_ptr<SimulinkConfigSet> cfg);

  /// @brief Retrieves the active configuration set.
  /// @note Only one configuration set can be active at a time.
  std::shared_ptr<SimulinkConfigSet> getActiveConfiguration();

  /// @brief Checks if a configuration set exists in the manager.
  bool hasConfigurationSet(const std::shared_ptr<SimulinkConfigSet> &cfg) const;

private:
  std::vector<std::shared_ptr<SimulinkConfigSet>> cfgs;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONFIGSETMANAGER_H