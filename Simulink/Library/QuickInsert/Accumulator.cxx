#include "Accumulator.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Accumulator::Accumulator() {}

Accumulator::~Accumulator() {}

const std::string& Accumulator::GetIntegratormethod() const
{
    return m_Integratormethod;
}

void Accumulator::SetIntegratormethod(const std::string& value)
{
    m_Integratormethod = value;
}

const std::string& Accumulator::GetGainval() const { return m_Gainval; }

void Accumulator::SetGainval(const std::string& value) { m_Gainval = value; }

const std::string& Accumulator::GetExternalreset() const
{
    return m_Externalreset;
}

void Accumulator::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& Accumulator::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void Accumulator::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& Accumulator::GetInitialcondition() const
{
    return m_Initialcondition;
}

void Accumulator::SetInitialcondition(const std::string& value)
{
    m_Initialcondition = value;
}

const std::string& Accumulator::GetInitialconditionsetting() const
{
    return m_Initialconditionsetting;
}

void Accumulator::SetInitialconditionsetting(const std::string& value)
{
    m_Initialconditionsetting = value;
}

const std::string& Accumulator::GetSampletime() const { return m_Sampletime; }

void Accumulator::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& Accumulator::GetOutmin() const { return m_Outmin; }

void Accumulator::SetOutmin(const std::string& value) { m_Outmin = value; }

const std::string& Accumulator::GetOutmax() const { return m_Outmax; }

void Accumulator::SetOutmax(const std::string& value) { m_Outmax = value; }

const std::string& Accumulator::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void Accumulator::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& Accumulator::GetLockscale() const { return m_Lockscale; }

void Accumulator::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& Accumulator::GetRndmeth() const { return m_Rndmeth; }

void Accumulator::SetRndmeth(const std::string& value) { m_Rndmeth = value; }

const std::string& Accumulator::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void Accumulator::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& Accumulator::GetLimitoutput() const { return m_Limitoutput; }

void Accumulator::SetLimitoutput(const std::string& value)
{
    m_Limitoutput = value;
}

const std::string& Accumulator::GetUppersaturationlimit() const
{
    return m_Uppersaturationlimit;
}

void Accumulator::SetUppersaturationlimit(const std::string& value)
{
    m_Uppersaturationlimit = value;
}

const std::string& Accumulator::GetLowersaturationlimit() const
{
    return m_Lowersaturationlimit;
}

void Accumulator::SetLowersaturationlimit(const std::string& value)
{
    m_Lowersaturationlimit = value;
}

const std::string& Accumulator::GetShowsaturationport() const
{
    return m_Showsaturationport;
}

void Accumulator::SetShowsaturationport(const std::string& value)
{
    m_Showsaturationport = value;
}

const std::string& Accumulator::GetShowstateport() const
{
    return m_Showstateport;
}

void Accumulator::SetShowstateport(const std::string& value)
{
    m_Showstateport = value;
}

const std::string& Accumulator::GetIgnorelimit() const { return m_Ignorelimit; }

void Accumulator::SetIgnorelimit(const std::string& value)
{
    m_Ignorelimit = value;
}

const std::string& Accumulator::GetStatename() const { return m_Statename; }

void Accumulator::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& Accumulator::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void Accumulator::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& Accumulator::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void Accumulator::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& Accumulator::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void Accumulator::SetRtwstatestoragetypequalifier(const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

const std::string& Accumulator::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void Accumulator::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
