#include "DataTypeDuplicate1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataTypeDuplicate1::DataTypeDuplicate1() {}

DataTypeDuplicate1::~DataTypeDuplicate1() {}

const std::string& DataTypeDuplicate1::GetNuminputports() const
{
    return m_Numinputports;
}

void DataTypeDuplicate1::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
