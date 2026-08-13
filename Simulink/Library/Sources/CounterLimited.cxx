#include "CounterLimited.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

CounterLimited::CounterLimited() {}

CounterLimited::~CounterLimited() {}

const std::string& CounterLimited::GetUplimit() const
{
    return m_Uplimit;
}

void CounterLimited::SetUplimit(const std::string& value)
{
    m_Uplimit = value;
}

const std::string& CounterLimited::GetTsamp() const
{
    return m_Tsamp;
}

void CounterLimited::SetTsamp(const std::string& value)
{
    m_Tsamp = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
