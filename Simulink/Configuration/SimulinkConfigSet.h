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

#ifndef SIMULINKCONFIGSET_H
#define SIMULINKCONFIGSET_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "ErrorCode.h"
#include "SimulinkModel.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "Type.h"
#include <memory>
#include <string>

class SimulinkSolver;
class SimulinkOptimization;
class SimulinkSFSim;
class SimulinkDebugging;
class SimulinkHardware;
class SimulinkModelReference;
class SimulinkRTW;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class APIEXPORT SimulinkConfigSet final {
public:
  SimulinkConfigSet();
  ~SimulinkConfigSet() = default;

  /// @brief disbale copy constructor
  SimulinkConfigSet(const SimulinkConfigSet &) = delete;

  /// @brief checks if this configuration set is active
  bool isActive() const;

  /// @brief Gets a parameter value by name.
  const char *getParameter(const char *name);

  /// @brief Retuens the parameter object by name.
  std::shared_ptr<SimulinkParameter> getParameterObject(const char *name);

  /// @brief Sets a parameter value by name.
  ErrorCode setParameter(const char *name, const char *value);

  /// @brief Creates a copy of this configuration set.
  ErrorCode copy();

  /// @brief Create a deep copy of this configuration set.
  ErrorCode clone();

  /// @brief Deletes this configuration set.
  ErrorCode remove();

  /// @brief Attaches this configuration set to a Simulink model.
  ErrorCode attach(SimulinkModel &model);

  /// @brief Detaches this configuration set from a Simulink model.
  ErrorCode detach(SimulinkModel &model);

  /// @brief Activates this configuration set.
  ErrorCode activate();

  /// @brief Deactivates this configuration set.
  ErrorCode deactivate();

  /// @brief Retrieves the name of the configuration set.
  std::string getName();

  /// @brief Loads the configuration set from a file.
  ErrorCode loadFromFile(const char *path);

  /// @brief Creates a configuration set from a file.
  /// Supported formats: .m, .mat(planned)
  static SimulinkConfigSet fromFile(const char *path);

  /// @brief Saves the configuration set to a file.
  /// @brief Supported formats: .m, .mat(planned)
  ErrorCode saveToFile(const char *path);

  /// @brief Converts to a string representation.
  std::string toString() const;

private:
  bool status = false;
  std::shared_ptr<SimulinkObject> object;

  std::shared_ptr<SimulinkSolver> solver;
  std::shared_ptr<SimulinkOptimization> optimization;
  std::shared_ptr<SimulinkSFSim> sfSim;
  std::shared_ptr<SimulinkDebugging> debugging;
  std::shared_ptr<SimulinkHardware> hardware;
  std::shared_ptr<SimulinkModelReference> modelReference;
  std::shared_ptr<SimulinkRTW> rtw;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SIMULINKCONFIGSET_H