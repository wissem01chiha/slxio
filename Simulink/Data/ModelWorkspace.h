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

#ifndef MODELWORKSPACE_H
#define MODELWORKSPACE_H

#include "ABINamespace.h"
#include "APIExport.h"
#include "DataSourceType.h"
#include "Type.h"
#include <string>
#include <unordered_map>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Mimic Matlab ModelWorkspace
 * @see https://www.mathworks.com/help/simulink/ug/using-model-workspaces.html
 */
class APIEXPORT ModelWorkspace final {
public:
  ModelWorkspace();
  ~ModelWorkspace() = default;

  /// @brief
  std::string getVariable(const std::string &name) const;

  /// @brief
  void assignVariable(const std::string &name, const std::string &value);

  /// @brief
  void clear(const std::string &name);

  /// @brief
  void clearAll();

  /// @brief
  DataSourceType getDataSource();

  /// @brief
  const char *getFilename();

  /// @brief
  std::string getMatlabCode();

private:
  DataSourceType dataSource = DataSourceType::ModelFile;
  std::string fileName = "";
  std::string matlabCode = "";
  std::unordered_map<std::string, std::string> variables;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // MODELWORKSPACE_H