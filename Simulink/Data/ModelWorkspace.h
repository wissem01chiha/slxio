// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MODELWORKSPACE_H
#define MODELWORKSPACE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "DataPCH.h"
#include "ILogger.h"
#include "IParameterDataObjectBase.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class DataSourceType;

/**
 * @class ModelWorkspace
 * @brief object to interact with a model workspace
 * https://www.mathworks.com/help/simulink/slref/simulink.modelworkspace.html
 */
class SLXIO_APIEXPORT ModelWorkspace final
{
public:
  ModelWorkspace() = default;

  /** Get the value of a variable in the model workspace. */
  std::shared_ptr<IParameterDataObjectBase> GetVariable(
    const std::string& name) const;

  /** Assign a value to a variable in the model workspace.*/
  HError AssignVariable(const std::string& name,
                        const std::shared_ptr<IParameterDataObjectBase>& p);

  /** Clear a variable from the model workspace.*/
  HError ClearVariable(const std::string& name);

  /** Clear all variables from the model workspace.*/
  HError ClearAll();

  /**Get the data source type for this model workspace.*/
  std::shared_ptr<DataSourceType> GetDataSourceType();

  /** Get the filename associated with this model workspace*/
  const std::string GetFileName();

  /** Get the MATLAB code associated with this model workspace*/
  std::string GetMatlabCode();

  /** Get the number of variables in the workspace */
  UInt16 GetVariableCount() const;

  /** Set a logger object for this data object */
  HError SetLogger(const ILogger* logger);

  /** Get the logger sink */
  const ILogger* GetLogger();

  ~ModelWorkspace() = default;

private:
  const ILogger* m_logger = nullptr;
  std::string m_fileName;
  std::string m_matlabCode;
  std::shared_ptr<DataSourceType> m_dataSource;
  std::unordered_map<std::string, std::shared_ptr<IParameterDataObjectBase>>
    m_variables;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif /* MODELWORKSPACE_H */
