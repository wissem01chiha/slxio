#include "DiscreteTimeIntegrator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteTimeIntegrator::DiscreteTimeIntegrator() {}

DiscreteTimeIntegrator::~DiscreteTimeIntegrator() {}

const std::string& DiscreteTimeIntegrator::GetIntegratormethod() const
{
    return m_Integratormethod;
}

void DiscreteTimeIntegrator::SetIntegratormethod(const std::string& value)
{
    m_Integratormethod = value;
}

const std::string& DiscreteTimeIntegrator::GetGainval() const
{
    return m_Gainval;
}

void DiscreteTimeIntegrator::SetGainval(const std::string& value)
{
    m_Gainval = value;
}

const std::string& DiscreteTimeIntegrator::GetExternalreset() const
{
    return m_Externalreset;
}

void DiscreteTimeIntegrator::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& DiscreteTimeIntegrator::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void DiscreteTimeIntegrator::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& DiscreteTimeIntegrator::GetInitialcondition() const
{
    return m_Initialcondition;
}

void DiscreteTimeIntegrator::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& DiscreteTimeIntegrator::GetInitialconditionsetting() const
{
    return m_Initialconditionsetting;
}

void DiscreteTimeIntegrator::SetInitialconditionsetting(
    const std::string& value)
{
    m_Initialconditionsetting = value;
}

const std::string& DiscreteTimeIntegrator::GetSampletime() const
{
    return m_Sampletime;
}

void DiscreteTimeIntegrator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscreteTimeIntegrator::GetOutmin() const
{
    return m_Outmin;
}

void DiscreteTimeIntegrator::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DiscreteTimeIntegrator::GetOutmax() const
{
    return m_Outmax;
}

void DiscreteTimeIntegrator::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DiscreteTimeIntegrator::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DiscreteTimeIntegrator::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DiscreteTimeIntegrator::GetLockscale() const
{
    return m_Lockscale;
}

void DiscreteTimeIntegrator::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DiscreteTimeIntegrator::GetRndmeth() const
{
    return m_Rndmeth;
}

void DiscreteTimeIntegrator::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DiscreteTimeIntegrator::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DiscreteTimeIntegrator::SetSaturateonintegeroverflow(
    const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DiscreteTimeIntegrator::GetLimitoutput() const
{
    return m_Limitoutput;
}

void DiscreteTimeIntegrator::SetLimitoutput(const std::string& value)
{
    m_Limitoutput = value;
}

const std::string& DiscreteTimeIntegrator::GetUppersaturationlimit() const
{
    return m_Uppersaturationlimit;
}

void DiscreteTimeIntegrator::SetUppersaturationlimit(const std::string& value)
{
    m_Uppersaturationlimit = value;
}

const std::string& DiscreteTimeIntegrator::GetLowersaturationlimit() const
{
    return m_Lowersaturationlimit;
}

void DiscreteTimeIntegrator::SetLowersaturationlimit(const std::string& value)
{
    m_Lowersaturationlimit = value;
}

const std::string& DiscreteTimeIntegrator::GetShowsaturationport() const
{
    return m_Showsaturationport;
}

void DiscreteTimeIntegrator::SetShowsaturationport(const std::string& value)
{
    m_Showsaturationport = value;
}

const std::string& DiscreteTimeIntegrator::GetShowstateport() const
{
    return m_Showstateport;
}

void DiscreteTimeIntegrator::SetShowstateport(const std::string& value)
{
    m_Showstateport = value;
}

const std::string& DiscreteTimeIntegrator::GetIgnorelimit() const
{
    return m_Ignorelimit;
}

void DiscreteTimeIntegrator::SetIgnorelimit(const std::string& value)
{
    m_Ignorelimit = value;
}

const std::string& DiscreteTimeIntegrator::GetStatename() const
{
    return m_Statename;
}

void DiscreteTimeIntegrator::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string&
DiscreteTimeIntegrator::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DiscreteTimeIntegrator::SetStatemustresolvetosignalobject(
    const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DiscreteTimeIntegrator::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DiscreteTimeIntegrator::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string&
DiscreteTimeIntegrator::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void DiscreteTimeIntegrator::SetRtwstatestoragetypequalifier(
    const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

const std::string& DiscreteTimeIntegrator::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DiscreteTimeIntegrator::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
