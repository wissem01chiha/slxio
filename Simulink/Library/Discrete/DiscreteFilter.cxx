#include "DiscreteFilter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteFilter::DiscreteFilter() {}

DiscreteFilter::~DiscreteFilter() {}

const std::string& DiscreteFilter::GetNumeratorsource() const
{
  return m_Numeratorsource;
}

void DiscreteFilter::SetNumeratorsource(const std::string& value)
{
  m_Numeratorsource = value;
}

const std::string& DiscreteFilter::GetNumerator() const
{
  return m_Numerator;
}

void DiscreteFilter::SetNumerator(const std::string& value)
{
  m_Numerator = value;
}

const std::string& DiscreteFilter::GetDenominatorsource() const
{
  return m_Denominatorsource;
}

void DiscreteFilter::SetDenominatorsource(const std::string& value)
{
  m_Denominatorsource = value;
}

const std::string& DiscreteFilter::GetDenominator() const
{
  return m_Denominator;
}

void DiscreteFilter::SetDenominator(const std::string& value)
{
  m_Denominator = value;
}

const std::string& DiscreteFilter::GetInitialstatessource() const
{
  return m_Initialstatessource;
}

void DiscreteFilter::SetInitialstatessource(const std::string& value)
{
  m_Initialstatessource = value;
}

const std::string& DiscreteFilter::GetInitialstates() const
{
  return m_Initialstates;
}

void DiscreteFilter::SetInitialstates(const std::string& value)
{
  m_Initialstates = value;
}

const std::string& DiscreteFilter::GetInputprocessing() const
{
  return m_Inputprocessing;
}

void DiscreteFilter::SetInputprocessing(const std::string& value)
{
  m_Inputprocessing = value;
}

const std::string& DiscreteFilter::GetExternalreset() const
{
  return m_Externalreset;
}

void DiscreteFilter::SetExternalreset(const std::string& value)
{
  m_Externalreset = value;
}

const std::string& DiscreteFilter::GetInitialdenominatorstates() const
{
  return m_Initialdenominatorstates;
}

void DiscreteFilter::SetInitialdenominatorstates(const std::string& value)
{
  m_Initialdenominatorstates = value;
}

const std::string& DiscreteFilter::GetFilterstructure() const
{
  return m_Filterstructure;
}

void DiscreteFilter::SetFilterstructure(const std::string& value)
{
  m_Filterstructure = value;
}

const std::string& DiscreteFilter::GetSampletime() const
{
  return m_Sampletime;
}

void DiscreteFilter::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& DiscreteFilter::GetA0equalsone() const
{
  return m_A0equalsone;
}

void DiscreteFilter::SetA0equalsone(const std::string& value)
{
  m_A0equalsone = value;
}

const std::string& DiscreteFilter::GetNumcoefmin() const
{
  return m_Numcoefmin;
}

void DiscreteFilter::SetNumcoefmin(const std::string& value)
{
  m_Numcoefmin = value;
}

const std::string& DiscreteFilter::GetNumcoefmax() const
{
  return m_Numcoefmax;
}

void DiscreteFilter::SetNumcoefmax(const std::string& value)
{
  m_Numcoefmax = value;
}

const std::string& DiscreteFilter::GetDencoefmin() const
{
  return m_Dencoefmin;
}

void DiscreteFilter::SetDencoefmin(const std::string& value)
{
  m_Dencoefmin = value;
}

const std::string& DiscreteFilter::GetDencoefmax() const
{
  return m_Dencoefmax;
}

void DiscreteFilter::SetDencoefmax(const std::string& value)
{
  m_Dencoefmax = value;
}

const std::string& DiscreteFilter::GetOutmin() const
{
  return m_Outmin;
}

void DiscreteFilter::SetOutmin(const std::string& value)
{
  m_Outmin = value;
}

const std::string& DiscreteFilter::GetOutmax() const
{
  return m_Outmax;
}

void DiscreteFilter::SetOutmax(const std::string& value)
{
  m_Outmax = value;
}

const std::string& DiscreteFilter::GetStatedatatypestr() const
{
  return m_Statedatatypestr;
}

void DiscreteFilter::SetStatedatatypestr(const std::string& value)
{
  m_Statedatatypestr = value;
}

const std::string& DiscreteFilter::GetMultiplicanddatatypestr() const
{
  return m_Multiplicanddatatypestr;
}

void DiscreteFilter::SetMultiplicanddatatypestr(const std::string& value)
{
  m_Multiplicanddatatypestr = value;
}

const std::string& DiscreteFilter::GetNumcoefdatatypestr() const
{
  return m_Numcoefdatatypestr;
}

void DiscreteFilter::SetNumcoefdatatypestr(const std::string& value)
{
  m_Numcoefdatatypestr = value;
}

const std::string& DiscreteFilter::GetDencoefdatatypestr() const
{
  return m_Dencoefdatatypestr;
}

void DiscreteFilter::SetDencoefdatatypestr(const std::string& value)
{
  m_Dencoefdatatypestr = value;
}

const std::string& DiscreteFilter::GetNumproductdatatypestr() const
{
  return m_Numproductdatatypestr;
}

void DiscreteFilter::SetNumproductdatatypestr(const std::string& value)
{
  m_Numproductdatatypestr = value;
}

const std::string& DiscreteFilter::GetDenproductdatatypestr() const
{
  return m_Denproductdatatypestr;
}

void DiscreteFilter::SetDenproductdatatypestr(const std::string& value)
{
  m_Denproductdatatypestr = value;
}

const std::string& DiscreteFilter::GetNumaccumdatatypestr() const
{
  return m_Numaccumdatatypestr;
}

void DiscreteFilter::SetNumaccumdatatypestr(const std::string& value)
{
  m_Numaccumdatatypestr = value;
}

const std::string& DiscreteFilter::GetDenaccumdatatypestr() const
{
  return m_Denaccumdatatypestr;
}

void DiscreteFilter::SetDenaccumdatatypestr(const std::string& value)
{
  m_Denaccumdatatypestr = value;
}

const std::string& DiscreteFilter::GetOutdatatypestr() const
{
  return m_Outdatatypestr;
}

void DiscreteFilter::SetOutdatatypestr(const std::string& value)
{
  m_Outdatatypestr = value;
}

const std::string& DiscreteFilter::GetLockscale() const
{
  return m_Lockscale;
}

void DiscreteFilter::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& DiscreteFilter::GetRndmeth() const
{
  return m_Rndmeth;
}

void DiscreteFilter::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& DiscreteFilter::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void DiscreteFilter::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& DiscreteFilter::GetStatename() const
{
  return m_Statename;
}

void DiscreteFilter::SetStatename(const std::string& value)
{
  m_Statename = value;
}

const std::string& DiscreteFilter::GetStatemustresolvetosignalobject() const
{
  return m_Statemustresolvetosignalobject;
}

void DiscreteFilter::SetStatemustresolvetosignalobject(const std::string& value)
{
  m_Statemustresolvetosignalobject = value;
}

const std::string& DiscreteFilter::GetStatesignalobject() const
{
  return m_Statesignalobject;
}

void DiscreteFilter::SetStatesignalobject(const std::string& value)
{
  m_Statesignalobject = value;
}

const std::string& DiscreteFilter::GetStatestorageclass() const
{
  return m_Statestorageclass;
}

void DiscreteFilter::SetStatestorageclass(const std::string& value)
{
  m_Statestorageclass = value;
}

const std::string& DiscreteFilter::GetRtwstatestoragetypequalifier() const
{
  return m_Rtwstatestoragetypequalifier;
}

void DiscreteFilter::SetRtwstatestoragetypequalifier(const std::string& value)
{
  m_Rtwstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
