// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MODELWORKSPACE_H
#define MODELWORKSPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataSourceType.h"
#include "Logger.h"
#include "PlatformTypes.h"
#include <string>
#include <unordered_map>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ModelWorkspace
 * @see
 * https://www.mathworks.com/help/simulink/ug/using-model-workspaces.html
 */
class APIEXPORT ModelWorkspace final
{
public:
  ModelWorkspace();
  ~ModelWorkspace() = default;

  /// @brief Get the value of a variable in the model workspace.
  std::string getVariable(const std::string& name) const;

  /// @brief Assign a value to a variable in the model workspace.
  void assignVariable(const std::string& name, const std::string& value);

  /// @brief Clear a variable from the model workspace.
  void clear(const std::string& name);

  /// @brief Clear all variables from the model workspace.
  void clearAll();

  /// @brief Get the data source type for this model workspace.
  DataSourceType getDataSource();

  /// @brief Get the filename associated with this model workspace
  const char* getFilename();

  /// @brief Get the MATLAB code associated with this model workspace
  std::string getMatlabCode();

private:
  Logger& l;
  std::string fileName = "";
  std::string matlabCode = "";
  DataSourceType dataSource;
  std::unordered_map<std::string, std::string> variables;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // MODELWORKSPACE_H