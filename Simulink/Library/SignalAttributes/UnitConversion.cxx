#include "UnitConversion.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

UnitConversion::UnitConversion() {}

UnitConversion::~UnitConversion() {}

const std::string& UnitConversion::GetOutputtype() const
{
    return m_Outputtype;
}

void UnitConversion::SetOutputtype(const std::string& value)
{
    m_Outputtype = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
