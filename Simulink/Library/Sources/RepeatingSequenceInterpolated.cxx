#include "RepeatingSequenceInterpolated.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

RepeatingSequenceInterpolated::RepeatingSequenceInterpolated() {}

RepeatingSequenceInterpolated::~RepeatingSequenceInterpolated() {}

const std::string& RepeatingSequenceInterpolated::GetOutvalues() const
{
    return m_Outvalues;
}

void RepeatingSequenceInterpolated::SetOutvalues(const std::string& value)
{
    m_Outvalues = value;
}

const std::string& RepeatingSequenceInterpolated::GetTimevalues() const
{
    return m_Timevalues;
}

void RepeatingSequenceInterpolated::SetTimevalues(const std::string& value)
{
    m_Timevalues = value;
}

const std::string& RepeatingSequenceInterpolated::GetLookupmeth() const
{
    return m_Lookupmeth;
}

void RepeatingSequenceInterpolated::SetLookupmeth(const std::string& value)
{
    m_Lookupmeth = value;
}

const std::string& RepeatingSequenceInterpolated::GetTsamp() const
{
    return m_Tsamp;
}

void RepeatingSequenceInterpolated::SetTsamp(const std::string& value)
{
    m_Tsamp = value;
}

const std::string& RepeatingSequenceInterpolated::GetOutmin() const
{
    return m_Outmin;
}

void RepeatingSequenceInterpolated::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& RepeatingSequenceInterpolated::GetOutmax() const
{
    return m_Outmax;
}

void RepeatingSequenceInterpolated::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& RepeatingSequenceInterpolated::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void RepeatingSequenceInterpolated::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& RepeatingSequenceInterpolated::GetLockscale() const
{
    return m_Lockscale;
}

void RepeatingSequenceInterpolated::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
