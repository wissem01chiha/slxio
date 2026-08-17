#include "DiscreteFirFilter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteFirFilter::DiscreteFirFilter() {}

DiscreteFirFilter::~DiscreteFirFilter() {}

const std::string& DiscreteFirFilter::GetCoefsource() const
{
    return m_Coefsource;
}

void DiscreteFirFilter::SetCoefsource(const std::string& value)
{
    m_Coefsource = value;
}

const std::string& DiscreteFirFilter::GetFilterstructure() const
{
    return m_Filterstructure;
}

void DiscreteFirFilter::SetFilterstructure(const std::string& value)
{
    m_Filterstructure = value;
}

const std::string& DiscreteFirFilter::GetCoefficients() const
{
    return m_Coefficients;
}

void DiscreteFirFilter::SetCoefficients(const std::string& value)
{
    m_Coefficients = value;
}

const std::string& DiscreteFirFilter::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DiscreteFirFilter::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DiscreteFirFilter::GetExternalreset() const
{
    return m_Externalreset;
}

void DiscreteFirFilter::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& DiscreteFirFilter::GetShowenableport() const
{
    return m_Showenableport;
}

void DiscreteFirFilter::SetShowenableport(const std::string& value)
{
    m_Showenableport = value;
}

const std::string& DiscreteFirFilter::GetInitialstates() const
{
    return m_Initialstates;
}

void DiscreteFirFilter::SetInitialstates(const std::string& value)
{
    m_Initialstates = value;
}

const std::string& DiscreteFirFilter::GetSampletime() const
{
    return m_Sampletime;
}

void DiscreteFirFilter::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscreteFirFilter::GetCoefmin() const { return m_Coefmin; }

void DiscreteFirFilter::SetCoefmin(const std::string& value)
{
    m_Coefmin = value;
}

const std::string& DiscreteFirFilter::GetCoefmax() const { return m_Coefmax; }

void DiscreteFirFilter::SetCoefmax(const std::string& value)
{
    m_Coefmax = value;
}

const std::string& DiscreteFirFilter::GetOutmin() const { return m_Outmin; }

void DiscreteFirFilter::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DiscreteFirFilter::GetOutmax() const { return m_Outmax; }

void DiscreteFirFilter::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DiscreteFirFilter::GetTapsumdatatypestr() const
{
    return m_Tapsumdatatypestr;
}

void DiscreteFirFilter::SetTapsumdatatypestr(const std::string& value)
{
    m_Tapsumdatatypestr = value;
}

const std::string& DiscreteFirFilter::GetCoefdatatypestr() const
{
    return m_Coefdatatypestr;
}

void DiscreteFirFilter::SetCoefdatatypestr(const std::string& value)
{
    m_Coefdatatypestr = value;
}

const std::string& DiscreteFirFilter::GetProductdatatypestr() const
{
    return m_Productdatatypestr;
}

void DiscreteFirFilter::SetProductdatatypestr(const std::string& value)
{
    m_Productdatatypestr = value;
}

const std::string& DiscreteFirFilter::GetAccumdatatypestr() const
{
    return m_Accumdatatypestr;
}

void DiscreteFirFilter::SetAccumdatatypestr(const std::string& value)
{
    m_Accumdatatypestr = value;
}

const std::string& DiscreteFirFilter::GetStatedatatypestr() const
{
    return m_Statedatatypestr;
}

void DiscreteFirFilter::SetStatedatatypestr(const std::string& value)
{
    m_Statedatatypestr = value;
}

const std::string& DiscreteFirFilter::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DiscreteFirFilter::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DiscreteFirFilter::GetLockscale() const
{
    return m_Lockscale;
}

void DiscreteFirFilter::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DiscreteFirFilter::GetRndmeth() const { return m_Rndmeth; }

void DiscreteFirFilter::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DiscreteFirFilter::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DiscreteFirFilter::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DiscreteFirFilter::GetStatename() const
{
    return m_Statename;
}

void DiscreteFirFilter::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DiscreteFirFilter::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DiscreteFirFilter::SetStatemustresolvetosignalobject(
    const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DiscreteFirFilter::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DiscreteFirFilter::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DiscreteFirFilter::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DiscreteFirFilter::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DiscreteFirFilter::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void DiscreteFirFilter::SetRtwstatestoragetypequalifier(
    const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
