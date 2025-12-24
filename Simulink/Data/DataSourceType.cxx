#include "DataSourceType.h"
#include <cstring> 

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

DataSourceType toDataSourceType(const char *sldt) {
    if (sldt == nullptr) {
        return DataSourceType::ModelFile;
    }

    if (std::strcmp(sldt, "ModelFile") == 0) {
        return DataSourceType::ModelFile;
    }
    else if (std::strcmp(sldt, "MatFile") == 0) {
        return DataSourceType::MatFile;
    }
    else if (std::strcmp(sldt, "MatlabCode") == 0) {
        return DataSourceType::MatlabCode;
    }
    else if (std::strcmp(sldt, "MatlabFile") == 0) {
        return DataSourceType::MatlabFile;
    }
    return DataSourceType::ModelFile;
}


const char *toChar(DataSourceType sldst) {
    switch (sldst) {
        case DataSourceType::ModelFile:   return "ModelFile";
        case DataSourceType::MatFile:     return "MatFile";
        case DataSourceType::MatlabCode:  return "MatlabCode";
        case DataSourceType::MatlabFile:  return "MatlabFile";
        default:                          return "Unknown";
    }
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END


