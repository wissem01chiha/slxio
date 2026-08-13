#include "FixptDataTypeDuplicate1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptDataTypeDuplicate1::FixptDataTypeDuplicate1() {}

FixptDataTypeDuplicate1::~FixptDataTypeDuplicate1() {}

const std::string& FixptDataTypeDuplicate1::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptDataTypeDuplicate1::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
