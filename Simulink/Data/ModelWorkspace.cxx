#include "ModelWorkspace.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ModelWorkspace::ModelWorkspace()
  : dataSource(DataSourceType::ModelFile)
  , l(Logger::GetInstance())
{
}

std::string ModelWorkspace::getVariable(const std::string& name) const
{

  auto it = variables.find(name);
  if (it != variables.end())
  {
    return it->second;
  }
  l.Log(Logger::V_WARNING, "ModelWorkspace variable ", name, " not found.");
  return std::string("");
}

void ModelWorkspace::assignVariable(
  const std::string& name, const std::string& value)
{
  variables[name] = value;
}

void ModelWorkspace::clear(const std::string& name)
{
  auto it = variables.find(name);
  if (it != variables.end())
  {
    variables.erase(it);
  }
  else
  {
    l.Log(Logger::V_WARNING, "ModelWorkspace variable ", name,
      " not found. Cannot clear.");
  }
}

void ModelWorkspace::clearAll()
{
  variables.clear();
  l.Log(Logger::V_INFO, "All variables cleared from ModelWorkspace.");
}

DataSourceType ModelWorkspace::getDataSource()
{
  return dataSource;
}

const char* ModelWorkspace::getFilename()
{
  return fileName.c_str();
}

std::string ModelWorkspace::getMatlabCode()
{
  return matlabCode;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
