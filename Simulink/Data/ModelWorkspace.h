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

#include "DataSourceType.h"
#include "ABINamespace.h"
#include "Type.h"
#include "APIExport.h"
#include <optional>
#include <string>
#include <unordered_map>
#include <variant>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief https://www.mathworks.com/help/simulink/ug/using-model-workspaces.html
 */
class APIEXPORT ModelWorkspace final {
public:
  ModelWorkspace();
  ~ModelWorkspace() = default;

  std::optional<std::variant<Float, uint32, bool, std::string>>
  getVariable(const std::string &name) const;

  void assignVariable(const std::string &name,
                      std::variant<Float, uint32, bool, std::string> value);

  void clearVariable(const std::string &name);

  void clearAll();
private:
  DataSourceType dataSource = DataSourceType::ModelFile;
  std::string fileName = "";
  std::string matlabCode = "";
  std::unordered_map<std::string,
                     std::variant<Float, uint32, bool, std::string>>
      variables;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // MODELWORKSPACE_H