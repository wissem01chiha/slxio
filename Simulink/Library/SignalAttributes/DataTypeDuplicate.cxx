#include "DataTypeDuplicate.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DataTypeDuplicate::DataTypeDuplicate() {}

DataTypeDuplicate::~DataTypeDuplicate() {}

const std::string& DataTypeDuplicate::GetNuminputports() const
{
    return m_Numinputports;
}

void DataTypeDuplicate::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
