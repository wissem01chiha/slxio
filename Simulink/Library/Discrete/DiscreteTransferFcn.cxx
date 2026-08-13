#include "DiscreteTransferFcn.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DiscreteTransferFcn::DiscreteTransferFcn() {}

DiscreteTransferFcn::~DiscreteTransferFcn() {}

const std::string& DiscreteTransferFcn::GetNumeratorsource() const
{
    return m_Numeratorsource;
}

void DiscreteTransferFcn::SetNumeratorsource(const std::string& value)
{
    m_Numeratorsource = value;
}

const std::string& DiscreteTransferFcn::GetNumerator() const
{
    return m_Numerator;
}

void DiscreteTransferFcn::SetNumerator(const std::string& value)
{
    m_Numerator = value;
}

const std::string& DiscreteTransferFcn::GetDenominatorsource() const
{
    return m_Denominatorsource;
}

void DiscreteTransferFcn::SetDenominatorsource(const std::string& value)
{
    m_Denominatorsource = value;
}

const std::string& DiscreteTransferFcn::GetDenominator() const
{
    return m_Denominator;
}

void DiscreteTransferFcn::SetDenominator(const std::string& value)
{
    m_Denominator = value;
}

const std::string& DiscreteTransferFcn::GetInitialstatessource() const
{
    return m_Initialstatessource;
}

void DiscreteTransferFcn::SetInitialstatessource(const std::string& value)
{
    m_Initialstatessource = value;
}

const std::string& DiscreteTransferFcn::GetInitialstates() const
{
    return m_Initialstates;
}

void DiscreteTransferFcn::SetInitialstates(const std::string& value)
{
    m_Initialstates = value;
}

const std::string& DiscreteTransferFcn::GetInputprocessing() const
{
    return m_Inputprocessing;
}

void DiscreteTransferFcn::SetInputprocessing(const std::string& value)
{
    m_Inputprocessing = value;
}

const std::string& DiscreteTransferFcn::GetExternalreset() const
{
    return m_Externalreset;
}

void DiscreteTransferFcn::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& DiscreteTransferFcn::GetInitialdenominatorstates() const
{
    return m_Initialdenominatorstates;
}

void DiscreteTransferFcn::SetInitialdenominatorstates(const std::string& value)
{
    m_Initialdenominatorstates = value;
}

const std::string& DiscreteTransferFcn::GetFilterstructure() const
{
    return m_Filterstructure;
}

void DiscreteTransferFcn::SetFilterstructure(const std::string& value)
{
    m_Filterstructure = value;
}

const std::string& DiscreteTransferFcn::GetSampletime() const
{
    return m_Sampletime;
}

void DiscreteTransferFcn::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscreteTransferFcn::GetA0equalsone() const
{
    return m_A0equalsone;
}

void DiscreteTransferFcn::SetA0equalsone(const std::string& value)
{
    m_A0equalsone = value;
}

const std::string& DiscreteTransferFcn::GetNumcoefmin() const
{
    return m_Numcoefmin;
}

void DiscreteTransferFcn::SetNumcoefmin(const std::string& value)
{
    m_Numcoefmin = value;
}

const std::string& DiscreteTransferFcn::GetNumcoefmax() const
{
    return m_Numcoefmax;
}

void DiscreteTransferFcn::SetNumcoefmax(const std::string& value)
{
    m_Numcoefmax = value;
}

const std::string& DiscreteTransferFcn::GetDencoefmin() const
{
    return m_Dencoefmin;
}

void DiscreteTransferFcn::SetDencoefmin(const std::string& value)
{
    m_Dencoefmin = value;
}

const std::string& DiscreteTransferFcn::GetDencoefmax() const
{
    return m_Dencoefmax;
}

void DiscreteTransferFcn::SetDencoefmax(const std::string& value)
{
    m_Dencoefmax = value;
}

const std::string& DiscreteTransferFcn::GetOutmin() const
{
    return m_Outmin;
}

void DiscreteTransferFcn::SetOutmin(const std::string& value)
{
    m_Outmin = value;
}

const std::string& DiscreteTransferFcn::GetOutmax() const
{
    return m_Outmax;
}

void DiscreteTransferFcn::SetOutmax(const std::string& value)
{
    m_Outmax = value;
}

const std::string& DiscreteTransferFcn::GetStatedatatypestr() const
{
    return m_Statedatatypestr;
}

void DiscreteTransferFcn::SetStatedatatypestr(const std::string& value)
{
    m_Statedatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetMultiplicanddatatypestr() const
{
    return m_Multiplicanddatatypestr;
}

void DiscreteTransferFcn::SetMultiplicanddatatypestr(const std::string& value)
{
    m_Multiplicanddatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetNumcoefdatatypestr() const
{
    return m_Numcoefdatatypestr;
}

void DiscreteTransferFcn::SetNumcoefdatatypestr(const std::string& value)
{
    m_Numcoefdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetDencoefdatatypestr() const
{
    return m_Dencoefdatatypestr;
}

void DiscreteTransferFcn::SetDencoefdatatypestr(const std::string& value)
{
    m_Dencoefdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetNumproductdatatypestr() const
{
    return m_Numproductdatatypestr;
}

void DiscreteTransferFcn::SetNumproductdatatypestr(const std::string& value)
{
    m_Numproductdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetDenproductdatatypestr() const
{
    return m_Denproductdatatypestr;
}

void DiscreteTransferFcn::SetDenproductdatatypestr(const std::string& value)
{
    m_Denproductdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetNumaccumdatatypestr() const
{
    return m_Numaccumdatatypestr;
}

void DiscreteTransferFcn::SetNumaccumdatatypestr(const std::string& value)
{
    m_Numaccumdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetDenaccumdatatypestr() const
{
    return m_Denaccumdatatypestr;
}

void DiscreteTransferFcn::SetDenaccumdatatypestr(const std::string& value)
{
    m_Denaccumdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetOutdatatypestr() const
{
    return m_Outdatatypestr;
}

void DiscreteTransferFcn::SetOutdatatypestr(const std::string& value)
{
    m_Outdatatypestr = value;
}

const std::string& DiscreteTransferFcn::GetLockscale() const
{
    return m_Lockscale;
}

void DiscreteTransferFcn::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DiscreteTransferFcn::GetRndmeth() const
{
    return m_Rndmeth;
}

void DiscreteTransferFcn::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DiscreteTransferFcn::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DiscreteTransferFcn::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DiscreteTransferFcn::GetStatename() const
{
    return m_Statename;
}

void DiscreteTransferFcn::SetStatename(const std::string& value)
{
    m_Statename = value;
}

const std::string& DiscreteTransferFcn::GetStatemustresolvetosignalobject() const
{
    return m_Statemustresolvetosignalobject;
}

void DiscreteTransferFcn::SetStatemustresolvetosignalobject(const std::string& value)
{
    m_Statemustresolvetosignalobject = value;
}

const std::string& DiscreteTransferFcn::GetStatesignalobject() const
{
    return m_Statesignalobject;
}

void DiscreteTransferFcn::SetStatesignalobject(const std::string& value)
{
    m_Statesignalobject = value;
}

const std::string& DiscreteTransferFcn::GetStatestorageclass() const
{
    return m_Statestorageclass;
}

void DiscreteTransferFcn::SetStatestorageclass(const std::string& value)
{
    m_Statestorageclass = value;
}

const std::string& DiscreteTransferFcn::GetRtwstatestoragetypequalifier() const
{
    return m_Rtwstatestoragetypequalifier;
}

void DiscreteTransferFcn::SetRtwstatestoragetypequalifier(const std::string& value)
{
    m_Rtwstatestoragetypequalifier = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
