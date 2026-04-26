// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIMULINKCONFIGSET_H
#define SIMULINKCONFIGSET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "ErrorTypes.h"
#include "Logger.h"
#include "SimulinkModel.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"
#include "PlatformTypes.h"
#include <memory>
#include <string>
#include <vector>

class SimulinkSolver;
class SimulinkOptimization;
class SimulinkSFSim;
class SimulinkDebugging;
class SimulinkHardware;
class SimulinkModelReference;
class SimulinkRTW;

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SimulinkConfigSet represents a configuration set in a Simulink model
 */
class APIEXPORT SimulinkConfigSet final
{
public:
  SimulinkConfigSet();

  ~SimulinkConfigSet() = default;

  /// @brief disbale copy constructor
  /// @note instead use clone to create a copy of the configuration set
  SimulinkConfigSet(const SimulinkConfigSet&) = delete;

  /// @brief Contructor from SimulinkObject, this is used internally to
  /// fill a SimulinkConfigSet from low level Slx Representation, not
  /// recommended for public use !!!
  explicit SimulinkConfigSet(const SimulinkObject& obj);

  /// @brief checks if this configuration set is active
  bool isActive() const;

  /// @brief Gets a parameter value by name.
  const char* getParameter(const char* name);

  /// @brief Retuens the parameter object by name.
  std::shared_ptr<SimulinkParameter> getParameterObject(
    const std::string& name);

  /// @brief Sets a parameter value by name.
  ErrorCode setParameter(const char* name, const char* value);

  /// @brief Creates a copy of this configuration set.
  ErrorCode copy();

  /// @brief Create a deep copy of this configuration set.
  ErrorCode clone();

  /// @brief Deletes this configuration set.
  ErrorCode remove();

  /// @brief Attaches this configuration set to a Simulink model.
  ErrorCode attach(SimulinkModel& model);

  /// @brief Detaches this configuration set from a Simulink model.
  ErrorCode detach(SimulinkModel& model);

  /// @brief Activates this configuration set.
  void activate();

  /// @brief Deactivates this configuration set.
  void deactivate();

  /// @brief Retrieves the name of the configuration set.
  std::string getName();

  /// @brief  Retrive the underlying SimulinkObject representing this
  /// configuration set.
  std::shared_ptr<SimulinkObject> getObject() const;

  /// @brief  forward to underlying SimulinkObject getID
  Index getID() const;

  /// @brief Loads the configuration set from a file.
  ErrorCode loadFromFile(const char* path);

  /// @brief Creates a configuration set from a file.
  /// Supported formats: .m, .mat(planned)
  static SimulinkConfigSet fromFile(const char* path);

  /// @brief Saves the configuration set to a file.
  /// @brief Supported formats: .m, .mat(planned)
  ErrorCode saveToFile(const char* path);

  /// @brief Converts to a string representation.
  std::string toString() const;

  /// @brief Get a Pointer to Solver Configuration struct
  std::shared_ptr<SimulinkSolver> getSolver();

private:
  Logger& l;
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