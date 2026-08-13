#include "Clock1.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Clock1::Clock1() {}

Clock1::~Clock1() {}

const std::string& Clock1::GetDisplaytime() const
{
    return m_Displaytime;
}

void Clock1::SetDisplaytime(const std::string& value)
{
    m_Displaytime = value;
}

const std::string& Clock1::GetDecimation() const
{
    return m_Decimation;
}

void Clock1::SetDecimation(const std::string& value)
{
    m_Decimation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
