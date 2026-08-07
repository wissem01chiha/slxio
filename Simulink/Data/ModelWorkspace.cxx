#include "ModelWorkspace.h"
#include "ErrorCode.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

static const Logger::ApplicationInfoType ModelWorkspaceId = {1002,
                                                             "ModelWorkspace"};

ModelWorkspace::ModelWorkspace()
    : DataSource(DataSourceType::Type::ModelFile),
      logger(Logger::GetInstance()) {}

std::string ModelWorkspace::GetVariable(const std::string &name) const {

  auto it = Variables.find(name);
  if (it != Variables.end()) {
    return it->second;
  }
  logger.SendLogMessage(
      {Logger::LOG, Logger::LOG_WARN, ModelWorkspaceId, 3},
      {"GetVariable : Variable", name, "not found in ModelWorkspace."});
  return std::string("");
}

HError ModelWorkspace::AssignVariable(const std::string &name,
                                      const std::string &value) {
  Variables[name] = value;
  return E_OK;
}

HError ModelWorkspace::ClearVariable(const std::string &name) {
  auto it = Variables.find(name);
  if (it != Variables.end()) {
    Variables.erase(it);
  } else {
    logger.SendLogMessage({Logger::LOG, Logger::LOG_WARN, ModelWorkspaceId, 3},
                          {"ClearVariable: Variable", name,
                           "not found in ModelWorkspace. Cannot clear."});
  }
  return E_OK;
}

HError ModelWorkspace::ClearAll() {
  Variables.clear();
  logger.SendLogMessage(
      {Logger::LOG, Logger::LOG_INFO, ModelWorkspaceId, 3},
      {"ClearAll: All Variables cleared from ModelWorkspace."});
  return E_OK;
}

DataSourceType ModelWorkspace::GetDataSourceType() { return DataSource; }

const char *ModelWorkspace::GetFileName() { return FileName.c_str(); }

std::string ModelWorkspace::GetMatlabCode() { return MatlabCode; }

Logger &ModelWorkspace::GetLogger() { return logger; }

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
