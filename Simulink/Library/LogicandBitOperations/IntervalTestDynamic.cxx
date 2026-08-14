#include "IntervalTestDynamic.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

IntervalTestDynamic::IntervalTestDynamic() {}

IntervalTestDynamic::~IntervalTestDynamic() {}

const std::string& IntervalTestDynamic::GetIntervalclosedright() const
{
    return m_Intervalclosedright;
}

void IntervalTestDynamic::SetIntervalclosedright(const std::string& value)
{
    m_Intervalclosedright = value;
}

const std::string& IntervalTestDynamic::GetIntervalclosedleft() const
{
    return m_Intervalclosedleft;
}

void IntervalTestDynamic::SetIntervalclosedleft(const std::string& value)
{
    m_Intervalclosedleft = value;
}

const std::string& IntervalTestDynamic::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void IntervalTestDynamic::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
