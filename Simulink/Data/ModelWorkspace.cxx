#include "ModelWorkspace.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ModelWorkspace::ModelWorkspace() {}

DataSourceType ModelWorkspace::getDataSource() { return dataSource; }

const char* ModelWorkspace::getFilename() { return fileName.c_str(); }

std::string ModelWorkspace::getMatlabCode() { return matlabCode; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
