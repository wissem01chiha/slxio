#include "DataSourceType.h"
#include "Logger.h"

#include "DataSourceType.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DataSourceType::DataSourceType(DataSourceType::Type type) : m_type(type) {}

DataSourceType::Type DataSourceType::FromString(const std::string& sldt)
{
    const char* cstr = sldt.c_str();

    if (std::strcmp(cstr, "ModelFile") == 0)
    {
        return Type::ModelFile;
    }
    else if (std::strcmp(cstr, "MatFile") == 0)
    {
        return Type::MatFile;
    }
    else if (std::strcmp(cstr, "MatlabCode") == 0)
    {
        return Type::MatlabCode;
    }
    else if (std::strcmp(cstr, "MatlabFile") == 0)
    {
        return Type::MatlabFile;
    }
    return Type::ModelFile;
}

std::string DataSourceType::ToString(Type type)
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

DataSourceType::Type DataSourceType::GetType() const { return m_type; }

SLXIO_ABI_NAMESPACE_END
} // namespace slxio
