#include "FixptDataTypeDuplicate2.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptDataTypeDuplicate2::FixptDataTypeDuplicate2() {}

FixptDataTypeDuplicate2::~FixptDataTypeDuplicate2() {}

const std::string& FixptDataTypeDuplicate2::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptDataTypeDuplicate2::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
