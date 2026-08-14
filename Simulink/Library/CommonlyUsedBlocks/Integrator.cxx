#include "Integrator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Integrator::Integrator() {}

Integrator::~Integrator() {}

const std::string& Integrator::GetExternalreset() const
{
    return m_Externalreset;
}

void Integrator::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& Integrator::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void Integrator::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& Integrator::GetInitialcondition() const
{
    return m_Initialcondition;
}

void Integrator::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& Integrator::GetLimitoutput() const { return m_Limitoutput; }

void Integrator::SetLimitoutput(const std::string& value)
{
    m_Limitoutput = value;
}

const std::string& Integrator::GetUppersaturationlimit() const
{
    return m_Uppersaturationlimit;
}

void Integrator::SetUppersaturationlimit(const std::string& value)
{
    m_Uppersaturationlimit = value;
}

const std::string& Integrator::GetLowersaturationlimit() const
{
    return m_Lowersaturationlimit;
}

void Integrator::SetLowersaturationlimit(const std::string& value)
{
    m_Lowersaturationlimit = value;
}

const std::string& Integrator::GetWrapstate() const { return m_Wrapstate; }

void Integrator::SetWrapstate(const std::string& value) { m_Wrapstate = value; }

const std::string& Integrator::GetWrappedstateuppervalue() const
{
    return m_Wrappedstateuppervalue;
}

void Integrator::SetWrappedstateuppervalue(const std::string& value)
{
    m_Wrappedstateuppervalue = value;
}

const std::string& Integrator::GetWrappedstatelowervalue() const
{
    return m_Wrappedstatelowervalue;
}

void Integrator::SetWrappedstatelowervalue(const std::string& value)
{
    m_Wrappedstatelowervalue = value;
}

const std::string& Integrator::GetShowsaturationport() const
{
    return m_Showsaturationport;
}

void Integrator::SetShowsaturationport(const std::string& value)
{
    m_Showsaturationport = value;
}

const std::string& Integrator::GetShowstateport() const
{
    return m_Showstateport;
}

void Integrator::SetShowstateport(const std::string& value)
{
    m_Showstateport = value;
}

const std::string& Integrator::GetAbsolutetolerance() const
{
    return m_Absolutetolerance;
}

void Integrator::SetAbsolutetolerance(const std::string& value)
{
    m_Absolutetolerance = value;
}

const std::string& Integrator::GetIgnorelimit() const { return m_Ignorelimit; }

void Integrator::SetIgnorelimit(const std::string& value)
{
    m_Ignorelimit = value;
}

const std::string& Integrator::GetZerocross() const { return m_Zerocross; }

void Integrator::SetZerocross(const std::string& value) { m_Zerocross = value; }

const std::string& Integrator::GetContinuousstateattributes() const
{
    return m_Continuousstateattributes;
}

void Integrator::SetContinuousstateattributes(const std::string& value)
{
    m_Continuousstateattributes = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
