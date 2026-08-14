#include "RepeatingSequenceStair.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

RepeatingSequenceStair::RepeatingSequenceStair() {}

RepeatingSequenceStair::~RepeatingSequenceStair() {}

const std::string& RepeatingSequenceStair::GetOutvalues() const
{
    return m_Outvalues;
}

void RepeatingSequenceStair::SetOutvalues(const std::string& value)
{
    m_Outvalues = value;
}

const std::string& RepeatingSequenceStair::GetTsamp() const { return m_Tsamp; }

void RepeatingSequenceStair::SetTsamp(const std::string& value)
{
    m_Tsamp = value;
}

const std::string& RepeatingSequenceStair::GetOutmin() const
{
    return m_Outmin;
}

void RepeatingSequenceStair::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& RepeatingSequenceStair::GetOutmax() const
{
    return m_Outmax;
}

void RepeatingSequenceStair::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& RepeatingSequenceStair::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void RepeatingSequenceStair::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& RepeatingSequenceStair::GetLockscale() const
{
    return m_Lockscale;
}

void RepeatingSequenceStair::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
