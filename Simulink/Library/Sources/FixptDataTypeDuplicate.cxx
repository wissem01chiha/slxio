#include "FixptDataTypeDuplicate.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

FixptDataTypeDuplicate::FixptDataTypeDuplicate() {}

FixptDataTypeDuplicate::~FixptDataTypeDuplicate() {}

const std::string& FixptDataTypeDuplicate::GetNuminputports() const
{
    return m_Numinputports;
}

void FixptDataTypeDuplicate::SetNuminputports(const std::string& value)
{
    m_Numinputports = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
