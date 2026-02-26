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
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
// implied. See the License for the specific language governing
// permissions and limitations under the License.

#ifndef MODELWORKSPACE_H
#define MODELWORKSPACE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "DataSourceType.h"
#include "Logger.h"
#include "Type.h"
#include <string>
#include <unordered_map>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Mimic Matlab ModelWorkspace
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