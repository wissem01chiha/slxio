#include "ModelWorkspace.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ModelWorkspace::ModelWorkspace() : dataSource(DataSourceType::ModelFile) {}

std::string ModelWorkspace::getVariable(const std::string &name) const {
  return std::string("");
}

void ModelWorkspace::assignVariable(const std::string &name,
                                    const std::string &value) {}

void ModelWorkspace::clear(const std::string &name) {}

void ModelWorkspace::clearAll() {}

DataSourceType ModelWorkspace::getDataSource() { return dataSource; }

const char *ModelWorkspace::getFilename() { return fileName.c_str(); }

std::string ModelWorkspace::getMatlabCode() { return matlabCode; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
