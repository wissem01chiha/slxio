#include "DiscretePidController2dof.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

DiscretePidController2dof::DiscretePidController2dof() {}

DiscretePidController2dof::~DiscretePidController2dof() {}

const std::string& DiscretePidController2dof::GetController() const
{
    return m_Controller;
}

void DiscretePidController2dof::SetController(const std::string& value)
{
    m_Controller = value;
}

const std::string& DiscretePidController2dof::GetForm() const { return m_Form; }

void DiscretePidController2dof::SetForm(const std::string& value)
{
    m_Form = value;
}

const std::string& DiscretePidController2dof::GetTimedomain() const
{
    return m_Timedomain;
}

void DiscretePidController2dof::SetTimedomain(const std::string& value)
{
    m_Timedomain = value;
}

const std::string& DiscretePidController2dof::GetUseexternalts() const
{
    return m_Useexternalts;
}

void DiscretePidController2dof::SetUseexternalts(const std::string& value)
{
    m_Useexternalts = value;
}

const std::string& DiscretePidController2dof::GetSampletime() const
{
    return m_Sampletime;
}

void DiscretePidController2dof::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscretePidController2dof::GetIntegratormethod() const
{
    return m_Integratormethod;
}

void DiscretePidController2dof::SetIntegratormethod(const std::string& value)
{
    m_Integratormethod = value;
}

const std::string& DiscretePidController2dof::GetFiltermethod() const
{
    return m_Filtermethod;
}

void DiscretePidController2dof::SetFiltermethod(const std::string& value)
{
    m_Filtermethod = value;
}

const std::string&
DiscretePidController2dof::GetControllerparameterssource() const
{
    return m_Controllerparameterssource;
}

void DiscretePidController2dof::SetControllerparameterssource(
    const std::string& value)
{
    m_Controllerparameterssource = value;
}

const std::string& DiscretePidController2dof::GetP() const { return m_P; }

void DiscretePidController2dof::SetP(const std::string& value) { m_P = value; }

const std::string& DiscretePidController2dof::GetI() const { return m_I; }

void DiscretePidController2dof::SetI(const std::string& value) { m_I = value; }

const std::string& DiscretePidController2dof::GetUsekits() const
{
    return m_Usekits;
}

void DiscretePidController2dof::SetUsekits(const std::string& value)
{
    m_Usekits = value;
}

const std::string& DiscretePidController2dof::GetD() const { return m_D; }

void DiscretePidController2dof::SetD(const std::string& value) { m_D = value; }

const std::string&
DiscretePidController2dof::GetUseexternalderivativesource() const
{
    return m_Useexternalderivativesource;
}

void DiscretePidController2dof::SetUseexternalderivativesource(
    const std::string& value)
{
    m_Useexternalderivativesource = value;
}

const std::string& DiscretePidController2dof::GetN() const { return m_N; }

void DiscretePidController2dof::SetN(const std::string& value) { m_N = value; }

const std::string& DiscretePidController2dof::GetUsefilter() const
{
    return m_Usefilter;
}

void DiscretePidController2dof::SetUsefilter(const std::string& value)
{
    m_Usefilter = value;
}

const std::string& DiscretePidController2dof::GetB() const { return m_B; }

void DiscretePidController2dof::SetB(const std::string& value) { m_B = value; }

const std::string& DiscretePidController2dof::GetC() const { return m_C; }

void DiscretePidController2dof::SetC(const std::string& value) { m_C = value; }

const std::string& DiscretePidController2dof::GetTunerselectoption() const
{
    return m_Tunerselectoption;
}

void DiscretePidController2dof::SetTunerselectoption(const std::string& value)
{
    m_Tunerselectoption = value;
}

const std::string& DiscretePidController2dof::GetZerocross() const
{
    return m_Zerocross;
}

void DiscretePidController2dof::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& DiscretePidController2dof::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void DiscretePidController2dof::SetInitialconditionsource(
    const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string&
DiscretePidController2dof::GetInitialconditionforintegrator() const
{
    return m_Initialconditionforintegrator;
}

void DiscretePidController2dof::SetInitialconditionforintegrator(
    const std::string& value)
{
    m_Initialconditionforintegrator = value;
}

const std::string&
DiscretePidController2dof::GetInitialconditionforfilter() const
{
    return m_Initialconditionforfilter;
}

void DiscretePidController2dof::SetInitialconditionforfilter(
    const std::string& value)
{
    m_Initialconditionforfilter = value;
}

const std::string&
DiscretePidController2dof::GetDifferentiatoricprevscaledinput() const
{
    return m_Differentiatoricprevscaledinput;
}

void DiscretePidController2dof::SetDifferentiatoricprevscaledinput(
    const std::string& value)
{
    m_Differentiatoricprevscaledinput = value;
}

const std::string& DiscretePidController2dof::GetExternalreset() const
{
    return m_Externalreset;
}

void DiscretePidController2dof::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& DiscretePidController2dof::GetIgnorelimit() const
{
    return m_Ignorelimit;
}

void DiscretePidController2dof::SetIgnorelimit(const std::string& value)
{
    m_Ignorelimit = value;
}

const std::string& DiscretePidController2dof::GetTrackingmode() const
{
    return m_Trackingmode;
}

void DiscretePidController2dof::SetTrackingmode(const std::string& value)
{
    m_Trackingmode = value;
}

const std::string& DiscretePidController2dof::GetKt() const { return m_Kt; }

void DiscretePidController2dof::SetKt(const std::string& value)
{
    m_Kt = value;
}

const std::string& DiscretePidController2dof::GetLimitoutput() const
{
    return m_Limitoutput;
}

void DiscretePidController2dof::SetLimitoutput(const std::string& value)
{
    m_Limitoutput = value;
}

const std::string& DiscretePidController2dof::GetSatlimitssource() const
{
    return m_Satlimitssource;
}

void DiscretePidController2dof::SetSatlimitssource(const std::string& value)
{
    m_Satlimitssource = value;
}

const std::string& DiscretePidController2dof::GetUppersaturationlimit() const
{
    return m_Uppersaturationlimit;
}

void DiscretePidController2dof::SetUppersaturationlimit(
    const std::string& value)
{
    m_Uppersaturationlimit = value;
}

const std::string& DiscretePidController2dof::GetLowersaturationlimit() const
{
    return m_Lowersaturationlimit;
}

void DiscretePidController2dof::SetLowersaturationlimit(
    const std::string& value)
{
    m_Lowersaturationlimit = value;
}

const std::string& DiscretePidController2dof::GetLinearizeasgain() const
{
    return m_Linearizeasgain;
}

void DiscretePidController2dof::SetLinearizeasgain(const std::string& value)
{
    m_Linearizeasgain = value;
}

const std::string& DiscretePidController2dof::GetAntiwindupmode() const
{
    return m_Antiwindupmode;
}

void DiscretePidController2dof::SetAntiwindupmode(const std::string& value)
{
    m_Antiwindupmode = value;
}

const std::string& DiscretePidController2dof::GetKb() const { return m_Kb; }

void DiscretePidController2dof::SetKb(const std::string& value)
{
    m_Kb = value;
}

const std::string& DiscretePidController2dof::GetLimitintegrator() const
{
    return m_Limitintegrator;
}

void DiscretePidController2dof::SetLimitintegrator(const std::string& value)
{
    m_Limitintegrator = value;
}

const std::string&
DiscretePidController2dof::GetUpperintegratorsaturationlimit() const
{
    return m_Upperintegratorsaturationlimit;
}

void DiscretePidController2dof::SetUpperintegratorsaturationlimit(
    const std::string& value)
{
    m_Upperintegratorsaturationlimit = value;
}

const std::string&
DiscretePidController2dof::GetLowerintegratorsaturationlimit() const
{
    return m_Lowerintegratorsaturationlimit;
}

void DiscretePidController2dof::SetLowerintegratorsaturationlimit(
    const std::string& value)
{
    m_Lowerintegratorsaturationlimit = value;
}

const std::string& DiscretePidController2dof::GetRndmeth() const
{
    return m_Rndmeth;
}

void DiscretePidController2dof::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string&
DiscretePidController2dof::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DiscretePidController2dof::SetSaturateonintegeroverflow(
    const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DiscretePidController2dof::GetLockscale() const
{
    return m_Lockscale;
}

void DiscretePidController2dof::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DiscretePidController2dof::GetPgainoutdatatypestr() const
{
    return m_Pgainoutdatatypestr;
}

void DiscretePidController2dof::SetPgainoutdatatypestr(const std::string& value)
{
    m_Pgainoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetPprodoutdatatypestr() const
{
    return m_Pprodoutdatatypestr;
}

void DiscretePidController2dof::SetPprodoutdatatypestr(const std::string& value)
{
    m_Pprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetPoutmin() const
{
    return m_Poutmin;
}

void DiscretePidController2dof::SetPoutmin(const std::string& value)
{
    m_Poutmin = value;
}

const std::string& DiscretePidController2dof::GetPoutmax() const
{
    return m_Poutmax;
}

void DiscretePidController2dof::SetPoutmax(const std::string& value)
{
    m_Poutmax = value;
}

const std::string& DiscretePidController2dof::GetIgainoutdatatypestr() const
{
    return m_Igainoutdatatypestr;
}

void DiscretePidController2dof::SetIgainoutdatatypestr(const std::string& value)
{
    m_Igainoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetIprodoutdatatypestr() const
{
    return m_Iprodoutdatatypestr;
}

void DiscretePidController2dof::SetIprodoutdatatypestr(const std::string& value)
{
    m_Iprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetIoutmin() const
{
    return m_Ioutmin;
}

void DiscretePidController2dof::SetIoutmin(const std::string& value)
{
    m_Ioutmin = value;
}

const std::string& DiscretePidController2dof::GetIoutmax() const
{
    return m_Ioutmax;
}

void DiscretePidController2dof::SetIoutmax(const std::string& value)
{
    m_Ioutmax = value;
}

const std::string& DiscretePidController2dof::GetDgainoutdatatypestr() const
{
    return m_Dgainoutdatatypestr;
}

void DiscretePidController2dof::SetDgainoutdatatypestr(const std::string& value)
{
    m_Dgainoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetDprodoutdatatypestr() const
{
    return m_Dprodoutdatatypestr;
}

void DiscretePidController2dof::SetDprodoutdatatypestr(const std::string& value)
{
    m_Dprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetDoutmin() const
{
    return m_Doutmin;
}

void DiscretePidController2dof::SetDoutmin(const std::string& value)
{
    m_Doutmin = value;
}

const std::string& DiscretePidController2dof::GetDoutmax() const
{
    return m_Doutmax;
}

void DiscretePidController2dof::SetDoutmax(const std::string& value)
{
    m_Doutmax = value;
}

const std::string& DiscretePidController2dof::GetNgainoutdatatypestr() const
{
    return m_Ngainoutdatatypestr;
}

void DiscretePidController2dof::SetNgainoutdatatypestr(const std::string& value)
{
    m_Ngainoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetNprodoutdatatypestr() const
{
    return m_Nprodoutdatatypestr;
}

void DiscretePidController2dof::SetNprodoutdatatypestr(const std::string& value)
{
    m_Nprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetNoutmin() const
{
    return m_Noutmin;
}

void DiscretePidController2dof::SetNoutmin(const std::string& value)
{
    m_Noutmin = value;
}

const std::string& DiscretePidController2dof::GetNoutmax() const
{
    return m_Noutmax;
}

void DiscretePidController2dof::SetNoutmax(const std::string& value)
{
    m_Noutmax = value;
}

const std::string& DiscretePidController2dof::GetBgainoutdatatypestr() const
{
    return m_Bgainoutdatatypestr;
}

void DiscretePidController2dof::SetBgainoutdatatypestr(const std::string& value)
{
    m_Bgainoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetBprodoutdatatypestr() const
{
    return m_Bprodoutdatatypestr;
}

void DiscretePidController2dof::SetBprodoutdatatypestr(const std::string& value)
{
    m_Bprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetBoutmin() const
{
    return m_Boutmin;
}

void DiscretePidController2dof::SetBoutmin(const std::string& value)
{
    m_Boutmin = value;
}

const std::string& DiscretePidController2dof::GetBoutmax() const
{
    return m_Boutmax;
}

void DiscretePidController2dof::SetBoutmax(const std::string& value)
{
    m_Boutmax = value;
}

const std::string& DiscretePidController2dof::GetCgainoutdatatypestr() const
{
    return m_Cgainoutdatatypestr;
}

void DiscretePidController2dof::SetCgainoutdatatypestr(const std::string& value)
{
    m_Cgainoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetCprodoutdatatypestr() const
{
    return m_Cprodoutdatatypestr;
}

void DiscretePidController2dof::SetCprodoutdatatypestr(const std::string& value)
{
    m_Cprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetCoutmin() const
{
    return m_Coutmin;
}

void DiscretePidController2dof::SetCoutmin(const std::string& value)
{
    m_Coutmin = value;
}

const std::string& DiscretePidController2dof::GetCoutmax() const
{
    return m_Coutmax;
}

void DiscretePidController2dof::SetCoutmax(const std::string& value)
{
    m_Coutmax = value;
}

const std::string& DiscretePidController2dof::GetSumoutdatatypestr() const
{
    return m_Sumoutdatatypestr;
}

void DiscretePidController2dof::SetSumoutdatatypestr(const std::string& value)
{
    m_Sumoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumoutmin() const
{
    return m_Sumoutmin;
}

void DiscretePidController2dof::SetSumoutmin(const std::string& value)
{
    m_Sumoutmin = value;
}

const std::string& DiscretePidController2dof::GetSumoutmax() const
{
    return m_Sumoutmax;
}

void DiscretePidController2dof::SetSumoutmax(const std::string& value)
{
    m_Sumoutmax = value;
}

const std::string&
DiscretePidController2dof::GetSaturationoutdatatypestr() const
{
    return m_Saturationoutdatatypestr;
}

void DiscretePidController2dof::SetSaturationoutdatatypestr(
    const std::string& value)
{
    m_Saturationoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSaturationoutmin() const
{
    return m_Saturationoutmin;
}

void DiscretePidController2dof::SetSaturationoutmin(const std::string& value)
{
    m_Saturationoutmin = value;
}

const std::string& DiscretePidController2dof::GetSaturationoutmax() const
{
    return m_Saturationoutmax;
}

void DiscretePidController2dof::SetSaturationoutmax(const std::string& value)
{
    m_Saturationoutmax = value;
}

const std::string& DiscretePidController2dof::GetPparamdatatypestr() const
{
    return m_Pparamdatatypestr;
}

void DiscretePidController2dof::SetPparamdatatypestr(const std::string& value)
{
    m_Pparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetPparammin() const
{
    return m_Pparammin;
}

void DiscretePidController2dof::SetPparammin(const std::string& value)
{
    m_Pparammin = value;
}

const std::string& DiscretePidController2dof::GetPparammax() const
{
    return m_Pparammax;
}

void DiscretePidController2dof::SetPparammax(const std::string& value)
{
    m_Pparammax = value;
}

const std::string& DiscretePidController2dof::GetIparamdatatypestr() const
{
    return m_Iparamdatatypestr;
}

void DiscretePidController2dof::SetIparamdatatypestr(const std::string& value)
{
    m_Iparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetIparammin() const
{
    return m_Iparammin;
}

void DiscretePidController2dof::SetIparammin(const std::string& value)
{
    m_Iparammin = value;
}

const std::string& DiscretePidController2dof::GetIparammax() const
{
    return m_Iparammax;
}

void DiscretePidController2dof::SetIparammax(const std::string& value)
{
    m_Iparammax = value;
}

const std::string& DiscretePidController2dof::GetDparamdatatypestr() const
{
    return m_Dparamdatatypestr;
}

void DiscretePidController2dof::SetDparamdatatypestr(const std::string& value)
{
    m_Dparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetDparammin() const
{
    return m_Dparammin;
}

void DiscretePidController2dof::SetDparammin(const std::string& value)
{
    m_Dparammin = value;
}

const std::string& DiscretePidController2dof::GetDparammax() const
{
    return m_Dparammax;
}

void DiscretePidController2dof::SetDparammax(const std::string& value)
{
    m_Dparammax = value;
}

const std::string& DiscretePidController2dof::GetNparamdatatypestr() const
{
    return m_Nparamdatatypestr;
}

void DiscretePidController2dof::SetNparamdatatypestr(const std::string& value)
{
    m_Nparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetNparammin() const
{
    return m_Nparammin;
}

void DiscretePidController2dof::SetNparammin(const std::string& value)
{
    m_Nparammin = value;
}

const std::string& DiscretePidController2dof::GetNparammax() const
{
    return m_Nparammax;
}

void DiscretePidController2dof::SetNparammax(const std::string& value)
{
    m_Nparammax = value;
}

const std::string& DiscretePidController2dof::GetBparamdatatypestr() const
{
    return m_Bparamdatatypestr;
}

void DiscretePidController2dof::SetBparamdatatypestr(const std::string& value)
{
    m_Bparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetBparammin() const
{
    return m_Bparammin;
}

void DiscretePidController2dof::SetBparammin(const std::string& value)
{
    m_Bparammin = value;
}

const std::string& DiscretePidController2dof::GetBparammax() const
{
    return m_Bparammax;
}

void DiscretePidController2dof::SetBparammax(const std::string& value)
{
    m_Bparammax = value;
}

const std::string& DiscretePidController2dof::GetCparamdatatypestr() const
{
    return m_Cparamdatatypestr;
}

void DiscretePidController2dof::SetCparamdatatypestr(const std::string& value)
{
    m_Cparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetCparammin() const
{
    return m_Cparammin;
}

void DiscretePidController2dof::SetCparammin(const std::string& value)
{
    m_Cparammin = value;
}

const std::string& DiscretePidController2dof::GetCparammax() const
{
    return m_Cparammax;
}

void DiscretePidController2dof::SetCparammax(const std::string& value)
{
    m_Cparammax = value;
}

const std::string& DiscretePidController2dof::GetKbparamdatatypestr() const
{
    return m_Kbparamdatatypestr;
}

void DiscretePidController2dof::SetKbparamdatatypestr(const std::string& value)
{
    m_Kbparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetKbparammin() const
{
    return m_Kbparammin;
}

void DiscretePidController2dof::SetKbparammin(const std::string& value)
{
    m_Kbparammin = value;
}

const std::string& DiscretePidController2dof::GetKbparammax() const
{
    return m_Kbparammax;
}

void DiscretePidController2dof::SetKbparammax(const std::string& value)
{
    m_Kbparammax = value;
}

const std::string& DiscretePidController2dof::GetKtparamdatatypestr() const
{
    return m_Ktparamdatatypestr;
}

void DiscretePidController2dof::SetKtparamdatatypestr(const std::string& value)
{
    m_Ktparamdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetKtparammin() const
{
    return m_Ktparammin;
}

void DiscretePidController2dof::SetKtparammin(const std::string& value)
{
    m_Ktparammin = value;
}

const std::string& DiscretePidController2dof::GetKtparammax() const
{
    return m_Ktparammax;
}

void DiscretePidController2dof::SetKtparammax(const std::string& value)
{
    m_Ktparammax = value;
}

const std::string& DiscretePidController2dof::GetKboutdatatypestr() const
{
    return m_Kboutdatatypestr;
}

void DiscretePidController2dof::SetKboutdatatypestr(const std::string& value)
{
    m_Kboutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetKboutmin() const
{
    return m_Kboutmin;
}

void DiscretePidController2dof::SetKboutmin(const std::string& value)
{
    m_Kboutmin = value;
}

const std::string& DiscretePidController2dof::GetKboutmax() const
{
    return m_Kboutmax;
}

void DiscretePidController2dof::SetKboutmax(const std::string& value)
{
    m_Kboutmax = value;
}

const std::string& DiscretePidController2dof::GetKtoutdatatypestr() const
{
    return m_Ktoutdatatypestr;
}

void DiscretePidController2dof::SetKtoutdatatypestr(const std::string& value)
{
    m_Ktoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetKtoutmin() const
{
    return m_Ktoutmin;
}

void DiscretePidController2dof::SetKtoutmin(const std::string& value)
{
    m_Ktoutmin = value;
}

const std::string& DiscretePidController2dof::GetKtoutmax() const
{
    return m_Ktoutmax;
}

void DiscretePidController2dof::SetKtoutmax(const std::string& value)
{
    m_Ktoutmax = value;
}

const std::string&
DiscretePidController2dof::GetIntegratoroutdatatypestr() const
{
    return m_Integratoroutdatatypestr;
}

void DiscretePidController2dof::SetIntegratoroutdatatypestr(
    const std::string& value)
{
    m_Integratoroutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetIntegratoroutmin() const
{
    return m_Integratoroutmin;
}

void DiscretePidController2dof::SetIntegratoroutmin(const std::string& value)
{
    m_Integratoroutmin = value;
}

const std::string& DiscretePidController2dof::GetIntegratoroutmax() const
{
    return m_Integratoroutmax;
}

void DiscretePidController2dof::SetIntegratoroutmax(const std::string& value)
{
    m_Integratoroutmax = value;
}

const std::string& DiscretePidController2dof::GetFilteroutdatatypestr() const
{
    return m_Filteroutdatatypestr;
}

void DiscretePidController2dof::SetFilteroutdatatypestr(
    const std::string& value)
{
    m_Filteroutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetFilteroutmin() const
{
    return m_Filteroutmin;
}

void DiscretePidController2dof::SetFilteroutmin(const std::string& value)
{
    m_Filteroutmin = value;
}

const std::string& DiscretePidController2dof::GetFilteroutmax() const
{
    return m_Filteroutmax;
}

void DiscretePidController2dof::SetFilteroutmax(const std::string& value)
{
    m_Filteroutmax = value;
}

const std::string& DiscretePidController2dof::GetSumi1outdatatypestr() const
{
    return m_Sumi1outdatatypestr;
}

void DiscretePidController2dof::SetSumi1outdatatypestr(const std::string& value)
{
    m_Sumi1outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi1outmin() const
{
    return m_Sumi1outmin;
}

void DiscretePidController2dof::SetSumi1outmin(const std::string& value)
{
    m_Sumi1outmin = value;
}

const std::string& DiscretePidController2dof::GetSumi1outmax() const
{
    return m_Sumi1outmax;
}

void DiscretePidController2dof::SetSumi1outmax(const std::string& value)
{
    m_Sumi1outmax = value;
}

const std::string& DiscretePidController2dof::GetSumi2outdatatypestr() const
{
    return m_Sumi2outdatatypestr;
}

void DiscretePidController2dof::SetSumi2outdatatypestr(const std::string& value)
{
    m_Sumi2outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi2outmin() const
{
    return m_Sumi2outmin;
}

void DiscretePidController2dof::SetSumi2outmin(const std::string& value)
{
    m_Sumi2outmin = value;
}

const std::string& DiscretePidController2dof::GetSumi2outmax() const
{
    return m_Sumi2outmax;
}

void DiscretePidController2dof::SetSumi2outmax(const std::string& value)
{
    m_Sumi2outmax = value;
}

const std::string& DiscretePidController2dof::GetSumi3outdatatypestr() const
{
    return m_Sumi3outdatatypestr;
}

void DiscretePidController2dof::SetSumi3outdatatypestr(const std::string& value)
{
    m_Sumi3outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi3outmin() const
{
    return m_Sumi3outmin;
}

void DiscretePidController2dof::SetSumi3outmin(const std::string& value)
{
    m_Sumi3outmin = value;
}

const std::string& DiscretePidController2dof::GetSumi3outmax() const
{
    return m_Sumi3outmax;
}

void DiscretePidController2dof::SetSumi3outmax(const std::string& value)
{
    m_Sumi3outmax = value;
}

const std::string& DiscretePidController2dof::GetSumi4outdatatypestr() const
{
    return m_Sumi4outdatatypestr;
}

void DiscretePidController2dof::SetSumi4outdatatypestr(const std::string& value)
{
    m_Sumi4outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi4outmin() const
{
    return m_Sumi4outmin;
}

void DiscretePidController2dof::SetSumi4outmin(const std::string& value)
{
    m_Sumi4outmin = value;
}

const std::string& DiscretePidController2dof::GetSumi4outmax() const
{
    return m_Sumi4outmax;
}

void DiscretePidController2dof::SetSumi4outmax(const std::string& value)
{
    m_Sumi4outmax = value;
}

const std::string& DiscretePidController2dof::GetSumdoutdatatypestr() const
{
    return m_Sumdoutdatatypestr;
}

void DiscretePidController2dof::SetSumdoutdatatypestr(const std::string& value)
{
    m_Sumdoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumdoutmin() const
{
    return m_Sumdoutmin;
}

void DiscretePidController2dof::SetSumdoutmin(const std::string& value)
{
    m_Sumdoutmin = value;
}

const std::string& DiscretePidController2dof::GetSumdoutmax() const
{
    return m_Sumdoutmax;
}

void DiscretePidController2dof::SetSumdoutmax(const std::string& value)
{
    m_Sumdoutmax = value;
}

const std::string& DiscretePidController2dof::GetSum1outdatatypestr() const
{
    return m_Sum1outdatatypestr;
}

void DiscretePidController2dof::SetSum1outdatatypestr(const std::string& value)
{
    m_Sum1outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSum1outmin() const
{
    return m_Sum1outmin;
}

void DiscretePidController2dof::SetSum1outmin(const std::string& value)
{
    m_Sum1outmin = value;
}

const std::string& DiscretePidController2dof::GetSum1outmax() const
{
    return m_Sum1outmax;
}

void DiscretePidController2dof::SetSum1outmax(const std::string& value)
{
    m_Sum1outmax = value;
}

const std::string& DiscretePidController2dof::GetSum2outdatatypestr() const
{
    return m_Sum2outdatatypestr;
}

void DiscretePidController2dof::SetSum2outdatatypestr(const std::string& value)
{
    m_Sum2outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSum2outmin() const
{
    return m_Sum2outmin;
}

void DiscretePidController2dof::SetSum2outmin(const std::string& value)
{
    m_Sum2outmin = value;
}

const std::string& DiscretePidController2dof::GetSum2outmax() const
{
    return m_Sum2outmax;
}

void DiscretePidController2dof::SetSum2outmax(const std::string& value)
{
    m_Sum2outmax = value;
}

const std::string& DiscretePidController2dof::GetSum3outdatatypestr() const
{
    return m_Sum3outdatatypestr;
}

void DiscretePidController2dof::SetSum3outdatatypestr(const std::string& value)
{
    m_Sum3outdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSum3outmin() const
{
    return m_Sum3outmin;
}

void DiscretePidController2dof::SetSum3outmin(const std::string& value)
{
    m_Sum3outmin = value;
}

const std::string& DiscretePidController2dof::GetSum3outmax() const
{
    return m_Sum3outmax;
}

void DiscretePidController2dof::SetSum3outmax(const std::string& value)
{
    m_Sum3outmax = value;
}

const std::string& DiscretePidController2dof::GetSumaccumdatatypestr() const
{
    return m_Sumaccumdatatypestr;
}

void DiscretePidController2dof::SetSumaccumdatatypestr(const std::string& value)
{
    m_Sumaccumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi1accumdatatypestr() const
{
    return m_Sumi1accumdatatypestr;
}

void DiscretePidController2dof::SetSumi1accumdatatypestr(
    const std::string& value)
{
    m_Sumi1accumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi2accumdatatypestr() const
{
    return m_Sumi2accumdatatypestr;
}

void DiscretePidController2dof::SetSumi2accumdatatypestr(
    const std::string& value)
{
    m_Sumi2accumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi3accumdatatypestr() const
{
    return m_Sumi3accumdatatypestr;
}

void DiscretePidController2dof::SetSumi3accumdatatypestr(
    const std::string& value)
{
    m_Sumi3accumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumi4accumdatatypestr() const
{
    return m_Sumi4accumdatatypestr;
}

void DiscretePidController2dof::SetSumi4accumdatatypestr(
    const std::string& value)
{
    m_Sumi4accumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumdaccumdatatypestr() const
{
    return m_Sumdaccumdatatypestr;
}

void DiscretePidController2dof::SetSumdaccumdatatypestr(
    const std::string& value)
{
    m_Sumdaccumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSum1accumdatatypestr() const
{
    return m_Sum1accumdatatypestr;
}

void DiscretePidController2dof::SetSum1accumdatatypestr(
    const std::string& value)
{
    m_Sum1accumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSum2accumdatatypestr() const
{
    return m_Sum2accumdatatypestr;
}

void DiscretePidController2dof::SetSum2accumdatatypestr(
    const std::string& value)
{
    m_Sum2accumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSum3accumdatatypestr() const
{
    return m_Sum3accumdatatypestr;
}

void DiscretePidController2dof::SetSum3accumdatatypestr(
    const std::string& value)
{
    m_Sum3accumdatatypestr = value;
}

const std::string&
DiscretePidController2dof::GetDifferentiatoroutdatatypestr() const
{
    return m_Differentiatoroutdatatypestr;
}

void DiscretePidController2dof::SetDifferentiatoroutdatatypestr(
    const std::string& value)
{
    m_Differentiatoroutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetDifferentiatoroutmin() const
{
    return m_Differentiatoroutmin;
}

void DiscretePidController2dof::SetDifferentiatoroutmin(
    const std::string& value)
{
    m_Differentiatoroutmin = value;
}

const std::string& DiscretePidController2dof::GetDifferentiatoroutmax() const
{
    return m_Differentiatoroutmax;
}

void DiscretePidController2dof::SetDifferentiatoroutmax(
    const std::string& value)
{
    m_Differentiatoroutmax = value;
}

const std::string&
DiscretePidController2dof::GetFilterdiffnumproductoutputdatatypestr() const
{
    return m_Filterdiffnumproductoutputdatatypestr;
}

void DiscretePidController2dof::SetFilterdiffnumproductoutputdatatypestr(
    const std::string& value)
{
    m_Filterdiffnumproductoutputdatatypestr = value;
}

const std::string&
DiscretePidController2dof::GetFilterdiffdenproductoutputdatatypestr() const
{
    return m_Filterdiffdenproductoutputdatatypestr;
}

void DiscretePidController2dof::SetFilterdiffdenproductoutputdatatypestr(
    const std::string& value)
{
    m_Filterdiffdenproductoutputdatatypestr = value;
}

const std::string&
DiscretePidController2dof::GetFilterdiffnumaccumdatatypestr() const
{
    return m_Filterdiffnumaccumdatatypestr;
}

void DiscretePidController2dof::SetFilterdiffnumaccumdatatypestr(
    const std::string& value)
{
    m_Filterdiffnumaccumdatatypestr = value;
}

const std::string&
DiscretePidController2dof::GetFilterdiffdenaccumdatatypestr() const
{
    return m_Filterdiffdenaccumdatatypestr;
}

void DiscretePidController2dof::SetFilterdiffdenaccumdatatypestr(
    const std::string& value)
{
    m_Filterdiffdenaccumdatatypestr = value;
}

const std::string&
DiscretePidController2dof::GetFilterdiffoutcoefdatatypestr() const
{
    return m_Filterdiffoutcoefdatatypestr;
}

void DiscretePidController2dof::SetFilterdiffoutcoefdatatypestr(
    const std::string& value)
{
    m_Filterdiffoutcoefdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetFilterdiffoutcoefmin() const
{
    return m_Filterdiffoutcoefmin;
}

void DiscretePidController2dof::SetFilterdiffoutcoefmin(
    const std::string& value)
{
    m_Filterdiffoutcoefmin = value;
}

const std::string& DiscretePidController2dof::GetFilterdiffoutcoefmax() const
{
    return m_Filterdiffoutcoefmax;
}

void DiscretePidController2dof::SetFilterdiffoutcoefmax(
    const std::string& value)
{
    m_Filterdiffoutcoefmax = value;
}

const std::string&
DiscretePidController2dof::GetReciprocaloutdatatypestr() const
{
    return m_Reciprocaloutdatatypestr;
}

void DiscretePidController2dof::SetReciprocaloutdatatypestr(
    const std::string& value)
{
    m_Reciprocaloutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetReciprocaloutmin() const
{
    return m_Reciprocaloutmin;
}

void DiscretePidController2dof::SetReciprocaloutmin(const std::string& value)
{
    m_Reciprocaloutmin = value;
}

const std::string& DiscretePidController2dof::GetReciprocaloutmax() const
{
    return m_Reciprocaloutmax;
}

void DiscretePidController2dof::SetReciprocaloutmax(const std::string& value)
{
    m_Reciprocaloutmax = value;
}

const std::string& DiscretePidController2dof::GetSumdenoutdatatypestr() const
{
    return m_Sumdenoutdatatypestr;
}

void DiscretePidController2dof::SetSumdenoutdatatypestr(
    const std::string& value)
{
    m_Sumdenoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumdenoutmin() const
{
    return m_Sumdenoutmin;
}

void DiscretePidController2dof::SetSumdenoutmin(const std::string& value)
{
    m_Sumdenoutmin = value;
}

const std::string& DiscretePidController2dof::GetSumdenoutmax() const
{
    return m_Sumdenoutmax;
}

void DiscretePidController2dof::SetSumdenoutmax(const std::string& value)
{
    m_Sumdenoutmax = value;
}

const std::string& DiscretePidController2dof::GetSumnumoutdatatypestr() const
{
    return m_Sumnumoutdatatypestr;
}

void DiscretePidController2dof::SetSumnumoutdatatypestr(
    const std::string& value)
{
    m_Sumnumoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumnumoutmin() const
{
    return m_Sumnumoutmin;
}

void DiscretePidController2dof::SetSumnumoutmin(const std::string& value)
{
    m_Sumnumoutmin = value;
}

const std::string& DiscretePidController2dof::GetSumnumoutmax() const
{
    return m_Sumnumoutmax;
}

void DiscretePidController2dof::SetSumnumoutmax(const std::string& value)
{
    m_Sumnumoutmax = value;
}

const std::string& DiscretePidController2dof::GetSumdenaccumdatatypestr() const
{
    return m_Sumdenaccumdatatypestr;
}

void DiscretePidController2dof::SetSumdenaccumdatatypestr(
    const std::string& value)
{
    m_Sumdenaccumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetSumnumaccumdatatypestr() const
{
    return m_Sumnumaccumdatatypestr;
}

void DiscretePidController2dof::SetSumnumaccumdatatypestr(
    const std::string& value)
{
    m_Sumnumaccumdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetDivideoutdatatypestr() const
{
    return m_Divideoutdatatypestr;
}

void DiscretePidController2dof::SetDivideoutdatatypestr(
    const std::string& value)
{
    m_Divideoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetDivideoutmin() const
{
    return m_Divideoutmin;
}

void DiscretePidController2dof::SetDivideoutmin(const std::string& value)
{
    m_Divideoutmin = value;
}

const std::string& DiscretePidController2dof::GetDivideoutmax() const
{
    return m_Divideoutmax;
}

void DiscretePidController2dof::SetDivideoutmax(const std::string& value)
{
    m_Divideoutmax = value;
}

const std::string&
DiscretePidController2dof::GetUdifftsprodoutdatatypestr() const
{
    return m_Udifftsprodoutdatatypestr;
}

void DiscretePidController2dof::SetUdifftsprodoutdatatypestr(
    const std::string& value)
{
    m_Udifftsprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetUdifftsprodoutmin() const
{
    return m_Udifftsprodoutmin;
}

void DiscretePidController2dof::SetUdifftsprodoutmin(const std::string& value)
{
    m_Udifftsprodoutmin = value;
}

const std::string& DiscretePidController2dof::GetUdifftsprodoutmax() const
{
    return m_Udifftsprodoutmax;
}

void DiscretePidController2dof::SetUdifftsprodoutmax(const std::string& value)
{
    m_Udifftsprodoutmax = value;
}

const std::string& DiscretePidController2dof::GetNtsprodoutdatatypestr() const
{
    return m_Ntsprodoutdatatypestr;
}

void DiscretePidController2dof::SetNtsprodoutdatatypestr(
    const std::string& value)
{
    m_Ntsprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetNtsprodoutmin() const
{
    return m_Ntsprodoutmin;
}

void DiscretePidController2dof::SetNtsprodoutmin(const std::string& value)
{
    m_Ntsprodoutmin = value;
}

const std::string& DiscretePidController2dof::GetNtsprodoutmax() const
{
    return m_Ntsprodoutmax;
}

void DiscretePidController2dof::SetNtsprodoutmax(const std::string& value)
{
    m_Ntsprodoutmax = value;
}

const std::string&
DiscretePidController2dof::GetUintegraltsprodoutdatatypestr() const
{
    return m_Uintegraltsprodoutdatatypestr;
}

void DiscretePidController2dof::SetUintegraltsprodoutdatatypestr(
    const std::string& value)
{
    m_Uintegraltsprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetUintegraltsprodoutmin() const
{
    return m_Uintegraltsprodoutmin;
}

void DiscretePidController2dof::SetUintegraltsprodoutmin(
    const std::string& value)
{
    m_Uintegraltsprodoutmin = value;
}

const std::string& DiscretePidController2dof::GetUintegraltsprodoutmax() const
{
    return m_Uintegraltsprodoutmax;
}

void DiscretePidController2dof::SetUintegraltsprodoutmax(
    const std::string& value)
{
    m_Uintegraltsprodoutmax = value;
}

const std::string&
DiscretePidController2dof::GetUngaintsprodoutdatatypestr() const
{
    return m_Ungaintsprodoutdatatypestr;
}

void DiscretePidController2dof::SetUngaintsprodoutdatatypestr(
    const std::string& value)
{
    m_Ungaintsprodoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetUngaintsprodoutmin() const
{
    return m_Ungaintsprodoutmin;
}

void DiscretePidController2dof::SetUngaintsprodoutmin(const std::string& value)
{
    m_Ungaintsprodoutmin = value;
}

const std::string& DiscretePidController2dof::GetUngaintsprodoutmax() const
{
    return m_Ungaintsprodoutmax;
}

void DiscretePidController2dof::SetUngaintsprodoutmax(const std::string& value)
{
    m_Ungaintsprodoutmax = value;
}

const std::string&
DiscretePidController2dof::GetClampingzerooutdatatypestr() const
{
    return m_Clampingzerooutdatatypestr;
}

void DiscretePidController2dof::SetClampingzerooutdatatypestr(
    const std::string& value)
{
    m_Clampingzerooutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetClampingzerooutmin() const
{
    return m_Clampingzerooutmin;
}

void DiscretePidController2dof::SetClampingzerooutmin(const std::string& value)
{
    m_Clampingzerooutmin = value;
}

const std::string& DiscretePidController2dof::GetClampingzerooutmax() const
{
    return m_Clampingzerooutmax;
}

void DiscretePidController2dof::SetClampingzerooutmax(const std::string& value)
{
    m_Clampingzerooutmax = value;
}

const std::string&
DiscretePidController2dof::GetFilterdenconstantoutdatatypestr() const
{
    return m_Filterdenconstantoutdatatypestr;
}

void DiscretePidController2dof::SetFilterdenconstantoutdatatypestr(
    const std::string& value)
{
    m_Filterdenconstantoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetFilterdenconstantoutmin() const
{
    return m_Filterdenconstantoutmin;
}

void DiscretePidController2dof::SetFilterdenconstantoutmin(
    const std::string& value)
{
    m_Filterdenconstantoutmin = value;
}

const std::string& DiscretePidController2dof::GetFilterdenconstantoutmax() const
{
    return m_Filterdenconstantoutmax;
}

void DiscretePidController2dof::SetFilterdenconstantoutmax(
    const std::string& value)
{
    m_Filterdenconstantoutmax = value;
}

const std::string& DiscretePidController2dof::GetPcopyoutdatatypestr() const
{
    return m_Pcopyoutdatatypestr;
}

void DiscretePidController2dof::SetPcopyoutdatatypestr(const std::string& value)
{
    m_Pcopyoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetPcopyoutmin() const
{
    return m_Pcopyoutmin;
}

void DiscretePidController2dof::SetPcopyoutmin(const std::string& value)
{
    m_Pcopyoutmin = value;
}

const std::string& DiscretePidController2dof::GetPcopyoutmax() const
{
    return m_Pcopyoutmax;
}

void DiscretePidController2dof::SetPcopyoutmax(const std::string& value)
{
    m_Pcopyoutmax = value;
}

const std::string& DiscretePidController2dof::GetNcopyoutdatatypestr() const
{
    return m_Ncopyoutdatatypestr;
}

void DiscretePidController2dof::SetNcopyoutdatatypestr(const std::string& value)
{
    m_Ncopyoutdatatypestr = value;
}

const std::string& DiscretePidController2dof::GetNcopyoutmin() const
{
    return m_Ncopyoutmin;
}

void DiscretePidController2dof::SetNcopyoutmin(const std::string& value)
{
    m_Ncopyoutmin = value;
}

const std::string& DiscretePidController2dof::GetNcopyoutmax() const
{
    return m_Ncopyoutmax;
}

void DiscretePidController2dof::SetNcopyoutmax(const std::string& value)
{
    m_Ncopyoutmax = value;
}

const std::string&
DiscretePidController2dof::GetIntegratorcontinuousstateattributes() const
{
    return m_Integratorcontinuousstateattributes;
}

void DiscretePidController2dof::SetIntegratorcontinuousstateattributes(
    const std::string& value)
{
    m_Integratorcontinuousstateattributes = value;
}

const std::string&
DiscretePidController2dof::GetIntegratorstateidentifier() const
{
    return m_Integratorstateidentifier;
}

void DiscretePidController2dof::SetIntegratorstateidentifier(
    const std::string& value)
{
    m_Integratorstateidentifier = value;
}

const std::string&
DiscretePidController2dof::GetIntegratorstatemustresolvetosignalobject() const
{
    return m_Integratorstatemustresolvetosignalobject;
}

void DiscretePidController2dof::SetIntegratorstatemustresolvetosignalobject(
    const std::string& value)
{
    m_Integratorstatemustresolvetosignalobject = value;
}

const std::string&
DiscretePidController2dof::GetFiltercontinuousstateattributes() const
{
    return m_Filtercontinuousstateattributes;
}

void DiscretePidController2dof::SetFiltercontinuousstateattributes(
    const std::string& value)
{
    m_Filtercontinuousstateattributes = value;
}

const std::string& DiscretePidController2dof::GetFilterstateidentifier() const
{
    return m_Filterstateidentifier;
}

void DiscretePidController2dof::SetFilterstateidentifier(
    const std::string& value)
{
    m_Filterstateidentifier = value;
}

const std::string&
DiscretePidController2dof::GetFilterstatemustresolvetosignalobject() const
{
    return m_Filterstatemustresolvetosignalobject;
}

void DiscretePidController2dof::SetFilterstatemustresolvetosignalobject(
    const std::string& value)
{
    m_Filterstatemustresolvetosignalobject = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
