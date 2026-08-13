#include "IntegratorLimited.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntegratorLimited::IntegratorLimited() {}

IntegratorLimited::~IntegratorLimited() {}

const std::string& IntegratorLimited::GetExternalreset() const
{
    return m_Externalreset;
}

void IntegratorLimited::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& IntegratorLimited::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void IntegratorLimited::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& IntegratorLimited::GetInitialcondition() const
{
    return m_Initialcondition;
}

void IntegratorLimited::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& IntegratorLimited::GetLimitoutput() const
{
    return m_Limitoutput;
}

void IntegratorLimited::SetLimitoutput(const std::string& value)
{
    m_Limitoutput = value;
}

const std::string& IntegratorLimited::GetUppersaturationlimit() const
{
    return m_Uppersaturationlimit;
}

void IntegratorLimited::SetUppersaturationlimit(const std::string& value)
{
    m_Uppersaturationlimit = value;
}

const std::string& IntegratorLimited::GetLowersaturationlimit() const
{
    return m_Lowersaturationlimit;
}

void IntegratorLimited::SetLowersaturationlimit(const std::string& value)
{
    m_Lowersaturationlimit = value;
}

const std::string& IntegratorLimited::GetWrapstate() const
{
    return m_Wrapstate;
}

void IntegratorLimited::SetWrapstate(const std::string& value)
{
    m_Wrapstate = value;
}

const std::string& IntegratorLimited::GetWrappedstateuppervalue() const
{
    return m_Wrappedstateuppervalue;
}

void IntegratorLimited::SetWrappedstateuppervalue(const std::string& value)
{
    m_Wrappedstateuppervalue = value;
}

const std::string& IntegratorLimited::GetWrappedstatelowervalue() const
{
    return m_Wrappedstatelowervalue;
}

void IntegratorLimited::SetWrappedstatelowervalue(const std::string& value)
{
    m_Wrappedstatelowervalue = value;
}

const std::string& IntegratorLimited::GetShowsaturationport() const
{
    return m_Showsaturationport;
}

void IntegratorLimited::SetShowsaturationport(const std::string& value)
{
    m_Showsaturationport = value;
}

const std::string& IntegratorLimited::GetShowstateport() const
{
    return m_Showstateport;
}

void IntegratorLimited::SetShowstateport(const std::string& value)
{
    m_Showstateport = value;
}

const std::string& IntegratorLimited::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void IntegratorLimited::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& IntegratorLimited::GetIgnorelimit() const
{
    return m_Ignorelimit;
}

void IntegratorLimited::SetIgnorelimit(const std::string& value)
{
    m_Ignorelimit = value;
}

const std::string& IntegratorLimited::GetZerocross() const
{
    return m_Zerocross;
}

void IntegratorLimited::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& IntegratorLimited::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void IntegratorLimited::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
