#include "DataSourceType.h"
#include "Logger.h"
#include <cstring>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataSourceType::DataSourceType(DataSourceType::Type type)
  : InternalDataSourceType(type)
{
}

DataSourceType::Type DataSourceType::FromString(const char* sldt)
{
  if (sldt == nullptr)
  {
    return Type::ModelFile;
  }

  if (std::strcmp(sldt, "ModelFile") == 0)
  {
    return Type::ModelFile;
  }
  else if (std::strcmp(sldt, "MatFile") == 0)
  {
    return Type::MatFile;
  }
  else if (std::strcmp(sldt, "MatlabCode") == 0)
  {
    return Type::MatlabCode;
  }
  else if (std::strcmp(sldt, "MatlabFile") == 0)
  {
    return Type::MatlabFile;
  }
  return Type::ModelFile;
}

const char* DataSourceType::ToString(Type type)
{
  switch (type)
  {
    case Type::ModelFile:
      return "ModelFile";
    case Type::MatFile:
      return "MatFile";
    case Type::MatlabCode:
      return "MatlabCode";
    case Type::MatlabFile:
      return "MatlabFile";
    default:
      return "";
  }
}

SLXIO_ABI_NAMESPACE_END
};
