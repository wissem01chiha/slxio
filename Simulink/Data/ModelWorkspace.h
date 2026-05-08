// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MODELWORKSPACE_H
#define MODELWORKSPACE_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "DataSourceType.h"
#include "PlatformTypes.h"
#include <string>
#include "Logger.h"
#include <unordered_map>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class ModelWorkspace
 * @brief
 */
class SLXIO_APIEXPORT ModelWorkspace final
{
public:
  ModelWorkspace();

  /**
   * Get the value of a variable in the model workspace.
   */
  std::string GetVariable(const std::string& name) const;

  /**
   * Assign a value to a variable in the model workspace.
   */
  ReturnType AssignVariable(
    const std::string& name, const std::string& value);

  /**
   * Clear a variable from the model workspace.
   */
  ReturnType ClearVariable(const std::string& name);

  /**
   * Clear all variables from the model workspace.
   */
  ReturnType ClearAll();

  /**
   * Get the data source type for this model workspace.
   */
  DataSourceType GetDataSourceType();

  /**
   * Get the filename associated with this model workspace
   */
  const char* GetFileName();

  /**
   * Get the MATLAB code associated with this model workspace
   */
  std::string GetMatlabCode();

  /**
   * Destructor
   */
  ~ModelWorkspace() = default;
  
  /**
   * Return the class internal logger object
   */
  Logger& GetLogger();

private:
  std::string FileName;
  std::string MatlabCode;
  DataSourceType DataSource;
  std::unordered_map<std::string, std::string> Variables;
  Logger& logger;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* MODELWORKSPACE_H */
