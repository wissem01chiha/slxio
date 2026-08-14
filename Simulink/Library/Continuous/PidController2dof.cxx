#include "PidController2dof.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PidController2dof::PidController2dof() {}

PidController2dof::~PidController2dof() {}

const std::string& PidController2dof::GetController() const
{
  return m_Controller;
}

void PidController2dof::SetController(const std::string& value)
{
  m_Controller = value;
}

const std::string& PidController2dof::GetForm() const
{
  return m_Form;
}

void PidController2dof::SetForm(const std::string& value)
{
  m_Form = value;
}

const std::string& PidController2dof::GetTimedomain() const
{
  return m_Timedomain;
}

void PidController2dof::SetTimedomain(const std::string& value)
{
  m_Timedomain = value;
}

const std::string& PidController2dof::GetUseexternalts() const
{
  return m_Useexternalts;
}

void PidController2dof::SetUseexternalts(const std::string& value)
{
  m_Useexternalts = value;
}

const std::string& PidController2dof::GetSampletime() const
{
  return m_Sampletime;
}

void PidController2dof::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& PidController2dof::GetIntegratormethod() const
{
  return m_Integratormethod;
}

void PidController2dof::SetIntegratormethod(const std::string& value)
{
  m_Integratormethod = value;
}

const std::string& PidController2dof::GetFiltermethod() const
{
  return m_Filtermethod;
}

void PidController2dof::SetFiltermethod(const std::string& value)
{
  m_Filtermethod = value;
}

const std::string& PidController2dof::GetControllerparameterssource() const
{
  return m_Controllerparameterssource;
}

void PidController2dof::SetControllerparameterssource(const std::string& value)
{
  m_Controllerparameterssource = value;
}

const std::string& PidController2dof::GetP() const
{
  return m_P;
}

void PidController2dof::SetP(const std::string& value)
{
  m_P = value;
}

const std::string& PidController2dof::GetI() const
{
  return m_I;
}

void PidController2dof::SetI(const std::string& value)
{
  m_I = value;
}

const std::string& PidController2dof::GetUsekits() const
{
  return m_Usekits;
}

void PidController2dof::SetUsekits(const std::string& value)
{
  m_Usekits = value;
}

const std::string& PidController2dof::GetD() const
{
  return m_D;
}

void PidController2dof::SetD(const std::string& value)
{
  m_D = value;
}

const std::string& PidController2dof::GetUseexternalderivativesource() const
{
  return m_Useexternalderivativesource;
}

void PidController2dof::SetUseexternalderivativesource(const std::string& value)
{
  m_Useexternalderivativesource = value;
}

const std::string& PidController2dof::GetN() const
{
  return m_N;
}

void PidController2dof::SetN(const std::string& value)
{
  m_N = value;
}

const std::string& PidController2dof::GetUsefilter() const
{
  return m_Usefilter;
}

void PidController2dof::SetUsefilter(const std::string& value)
{
  m_Usefilter = value;
}

const std::string& PidController2dof::GetB() const
{
  return m_B;
}

void PidController2dof::SetB(const std::string& value)
{
  m_B = value;
}

const std::string& PidController2dof::GetC() const
{
  return m_C;
}

void PidController2dof::SetC(const std::string& value)
{
  m_C = value;
}

const std::string& PidController2dof::GetTunerselectoption() const
{
  return m_Tunerselectoption;
}

void PidController2dof::SetTunerselectoption(const std::string& value)
{
  m_Tunerselectoption = value;
}

const std::string& PidController2dof::GetZerocross() const
{
  return m_Zerocross;
}

void PidController2dof::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& PidController2dof::GetInitialconditionsource() const
{
  return m_Initialconditionsource;
}

void PidController2dof::SetInitialconditionsource(const std::string& value)
{
  m_Initialconditionsource = value;
}

const std::string& PidController2dof::GetInitialconditionforintegrator() const
{
  return m_Initialconditionforintegrator;
}

void PidController2dof::SetInitialconditionforintegrator(
  const std::string& value)
{
  m_Initialconditionforintegrator = value;
}

const std::string& PidController2dof::GetInitialconditionforfilter() const
{
  return m_Initialconditionforfilter;
}

void PidController2dof::SetInitialconditionforfilter(const std::string& value)
{
  m_Initialconditionforfilter = value;
}

const std::string& PidController2dof::GetDifferentiatoricprevscaledinput() const
{
  return m_Differentiatoricprevscaledinput;
}

void PidController2dof::SetDifferentiatoricprevscaledinput(
  const std::string& value)
{
  m_Differentiatoricprevscaledinput = value;
}

const std::string& PidController2dof::GetExternalreset() const
{
  return m_Externalreset;
}

void PidController2dof::SetExternalreset(const std::string& value)
{
  m_Externalreset = value;
}

const std::string& PidController2dof::GetIgnorelimit() const
{
  return m_Ignorelimit;
}

void PidController2dof::SetIgnorelimit(const std::string& value)
{
  m_Ignorelimit = value;
}

const std::string& PidController2dof::GetTrackingmode() const
{
  return m_Trackingmode;
}

void PidController2dof::SetTrackingmode(const std::string& value)
{
  m_Trackingmode = value;
}

const std::string& PidController2dof::GetKt() const
{
  return m_Kt;
}

void PidController2dof::SetKt(const std::string& value)
{
  m_Kt = value;
}

const std::string& PidController2dof::GetLimitoutput() const
{
  return m_Limitoutput;
}

void PidController2dof::SetLimitoutput(const std::string& value)
{
  m_Limitoutput = value;
}

const std::string& PidController2dof::GetSatlimitssource() const
{
  return m_Satlimitssource;
}

void PidController2dof::SetSatlimitssource(const std::string& value)
{
  m_Satlimitssource = value;
}

const std::string& PidController2dof::GetUppersaturationlimit() const
{
  return m_Uppersaturationlimit;
}

void PidController2dof::SetUppersaturationlimit(const std::string& value)
{
  m_Uppersaturationlimit = value;
}

const std::string& PidController2dof::GetLowersaturationlimit() const
{
  return m_Lowersaturationlimit;
}

void PidController2dof::SetLowersaturationlimit(const std::string& value)
{
  m_Lowersaturationlimit = value;
}

const std::string& PidController2dof::GetLinearizeasgain() const
{
  return m_Linearizeasgain;
}

void PidController2dof::SetLinearizeasgain(const std::string& value)
{
  m_Linearizeasgain = value;
}

const std::string& PidController2dof::GetAntiwindupmode() const
{
  return m_Antiwindupmode;
}

void PidController2dof::SetAntiwindupmode(const std::string& value)
{
  m_Antiwindupmode = value;
}

const std::string& PidController2dof::GetKb() const
{
  return m_Kb;
}

void PidController2dof::SetKb(const std::string& value)
{
  m_Kb = value;
}

const std::string& PidController2dof::GetLimitintegrator() const
{
  return m_Limitintegrator;
}

void PidController2dof::SetLimitintegrator(const std::string& value)
{
  m_Limitintegrator = value;
}

const std::string& PidController2dof::GetUpperintegratorsaturationlimit() const
{
  return m_Upperintegratorsaturationlimit;
}

void PidController2dof::SetUpperintegratorsaturationlimit(
  const std::string& value)
{
  m_Upperintegratorsaturationlimit = value;
}

const std::string& PidController2dof::GetLowerintegratorsaturationlimit() const
{
  return m_Lowerintegratorsaturationlimit;
}

void PidController2dof::SetLowerintegratorsaturationlimit(
  const std::string& value)
{
  m_Lowerintegratorsaturationlimit = value;
}

const std::string& PidController2dof::GetRndmeth() const
{
  return m_Rndmeth;
}

void PidController2dof::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& PidController2dof::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void PidController2dof::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& PidController2dof::GetLockscale() const
{
  return m_Lockscale;
}

void PidController2dof::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& PidController2dof::GetPgainoutdatatypestr() const
{
  return m_Pgainoutdatatypestr;
}

void PidController2dof::SetPgainoutdatatypestr(const std::string& value)
{
  m_Pgainoutdatatypestr = value;
}

const std::string& PidController2dof::GetPprodoutdatatypestr() const
{
  return m_Pprodoutdatatypestr;
}

void PidController2dof::SetPprodoutdatatypestr(const std::string& value)
{
  m_Pprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetPoutmin() const
{
  return m_Poutmin;
}

void PidController2dof::SetPoutmin(const std::string& value)
{
  m_Poutmin = value;
}

const std::string& PidController2dof::GetPoutmax() const
{
  return m_Poutmax;
}

void PidController2dof::SetPoutmax(const std::string& value)
{
  m_Poutmax = value;
}

const std::string& PidController2dof::GetIgainoutdatatypestr() const
{
  return m_Igainoutdatatypestr;
}

void PidController2dof::SetIgainoutdatatypestr(const std::string& value)
{
  m_Igainoutdatatypestr = value;
}

const std::string& PidController2dof::GetIprodoutdatatypestr() const
{
  return m_Iprodoutdatatypestr;
}

void PidController2dof::SetIprodoutdatatypestr(const std::string& value)
{
  m_Iprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetIoutmin() const
{
  return m_Ioutmin;
}

void PidController2dof::SetIoutmin(const std::string& value)
{
  m_Ioutmin = value;
}

const std::string& PidController2dof::GetIoutmax() const
{
  return m_Ioutmax;
}

void PidController2dof::SetIoutmax(const std::string& value)
{
  m_Ioutmax = value;
}

const std::string& PidController2dof::GetDgainoutdatatypestr() const
{
  return m_Dgainoutdatatypestr;
}

void PidController2dof::SetDgainoutdatatypestr(const std::string& value)
{
  m_Dgainoutdatatypestr = value;
}

const std::string& PidController2dof::GetDprodoutdatatypestr() const
{
  return m_Dprodoutdatatypestr;
}

void PidController2dof::SetDprodoutdatatypestr(const std::string& value)
{
  m_Dprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetDoutmin() const
{
  return m_Doutmin;
}

void PidController2dof::SetDoutmin(const std::string& value)
{
  m_Doutmin = value;
}

const std::string& PidController2dof::GetDoutmax() const
{
  return m_Doutmax;
}

void PidController2dof::SetDoutmax(const std::string& value)
{
  m_Doutmax = value;
}

const std::string& PidController2dof::GetNgainoutdatatypestr() const
{
  return m_Ngainoutdatatypestr;
}

void PidController2dof::SetNgainoutdatatypestr(const std::string& value)
{
  m_Ngainoutdatatypestr = value;
}

const std::string& PidController2dof::GetNprodoutdatatypestr() const
{
  return m_Nprodoutdatatypestr;
}

void PidController2dof::SetNprodoutdatatypestr(const std::string& value)
{
  m_Nprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetNoutmin() const
{
  return m_Noutmin;
}

void PidController2dof::SetNoutmin(const std::string& value)
{
  m_Noutmin = value;
}

const std::string& PidController2dof::GetNoutmax() const
{
  return m_Noutmax;
}

void PidController2dof::SetNoutmax(const std::string& value)
{
  m_Noutmax = value;
}

const std::string& PidController2dof::GetBgainoutdatatypestr() const
{
  return m_Bgainoutdatatypestr;
}

void PidController2dof::SetBgainoutdatatypestr(const std::string& value)
{
  m_Bgainoutdatatypestr = value;
}

const std::string& PidController2dof::GetBprodoutdatatypestr() const
{
  return m_Bprodoutdatatypestr;
}

void PidController2dof::SetBprodoutdatatypestr(const std::string& value)
{
  m_Bprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetBoutmin() const
{
  return m_Boutmin;
}

void PidController2dof::SetBoutmin(const std::string& value)
{
  m_Boutmin = value;
}

const std::string& PidController2dof::GetBoutmax() const
{
  return m_Boutmax;
}

void PidController2dof::SetBoutmax(const std::string& value)
{
  m_Boutmax = value;
}

const std::string& PidController2dof::GetCgainoutdatatypestr() const
{
  return m_Cgainoutdatatypestr;
}

void PidController2dof::SetCgainoutdatatypestr(const std::string& value)
{
  m_Cgainoutdatatypestr = value;
}

const std::string& PidController2dof::GetCprodoutdatatypestr() const
{
  return m_Cprodoutdatatypestr;
}

void PidController2dof::SetCprodoutdatatypestr(const std::string& value)
{
  m_Cprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetCoutmin() const
{
  return m_Coutmin;
}

void PidController2dof::SetCoutmin(const std::string& value)
{
  m_Coutmin = value;
}

const std::string& PidController2dof::GetCoutmax() const
{
  return m_Coutmax;
}

void PidController2dof::SetCoutmax(const std::string& value)
{
  m_Coutmax = value;
}

const std::string& PidController2dof::GetSumoutdatatypestr() const
{
  return m_Sumoutdatatypestr;
}

void PidController2dof::SetSumoutdatatypestr(const std::string& value)
{
  m_Sumoutdatatypestr = value;
}

const std::string& PidController2dof::GetSumoutmin() const
{
  return m_Sumoutmin;
}

void PidController2dof::SetSumoutmin(const std::string& value)
{
  m_Sumoutmin = value;
}

const std::string& PidController2dof::GetSumoutmax() const
{
  return m_Sumoutmax;
}

void PidController2dof::SetSumoutmax(const std::string& value)
{
  m_Sumoutmax = value;
}

const std::string& PidController2dof::GetSaturationoutdatatypestr() const
{
  return m_Saturationoutdatatypestr;
}

void PidController2dof::SetSaturationoutdatatypestr(const std::string& value)
{
  m_Saturationoutdatatypestr = value;
}

const std::string& PidController2dof::GetSaturationoutmin() const
{
  return m_Saturationoutmin;
}

void PidController2dof::SetSaturationoutmin(const std::string& value)
{
  m_Saturationoutmin = value;
}

const std::string& PidController2dof::GetSaturationoutmax() const
{
  return m_Saturationoutmax;
}

void PidController2dof::SetSaturationoutmax(const std::string& value)
{
  m_Saturationoutmax = value;
}

const std::string& PidController2dof::GetPparamdatatypestr() const
{
  return m_Pparamdatatypestr;
}

void PidController2dof::SetPparamdatatypestr(const std::string& value)
{
  m_Pparamdatatypestr = value;
}

const std::string& PidController2dof::GetPparammin() const
{
  return m_Pparammin;
}

void PidController2dof::SetPparammin(const std::string& value)
{
  m_Pparammin = value;
}

const std::string& PidController2dof::GetPparammax() const
{
  return m_Pparammax;
}

void PidController2dof::SetPparammax(const std::string& value)
{
  m_Pparammax = value;
}

const std::string& PidController2dof::GetIparamdatatypestr() const
{
  return m_Iparamdatatypestr;
}

void PidController2dof::SetIparamdatatypestr(const std::string& value)
{
  m_Iparamdatatypestr = value;
}

const std::string& PidController2dof::GetIparammin() const
{
  return m_Iparammin;
}

void PidController2dof::SetIparammin(const std::string& value)
{
  m_Iparammin = value;
}

const std::string& PidController2dof::GetIparammax() const
{
  return m_Iparammax;
}

void PidController2dof::SetIparammax(const std::string& value)
{
  m_Iparammax = value;
}

const std::string& PidController2dof::GetDparamdatatypestr() const
{
  return m_Dparamdatatypestr;
}

void PidController2dof::SetDparamdatatypestr(const std::string& value)
{
  m_Dparamdatatypestr = value;
}

const std::string& PidController2dof::GetDparammin() const
{
  return m_Dparammin;
}

void PidController2dof::SetDparammin(const std::string& value)
{
  m_Dparammin = value;
}

const std::string& PidController2dof::GetDparammax() const
{
  return m_Dparammax;
}

void PidController2dof::SetDparammax(const std::string& value)
{
  m_Dparammax = value;
}

const std::string& PidController2dof::GetNparamdatatypestr() const
{
  return m_Nparamdatatypestr;
}

void PidController2dof::SetNparamdatatypestr(const std::string& value)
{
  m_Nparamdatatypestr = value;
}

const std::string& PidController2dof::GetNparammin() const
{
  return m_Nparammin;
}

void PidController2dof::SetNparammin(const std::string& value)
{
  m_Nparammin = value;
}

const std::string& PidController2dof::GetNparammax() const
{
  return m_Nparammax;
}

void PidController2dof::SetNparammax(const std::string& value)
{
  m_Nparammax = value;
}

const std::string& PidController2dof::GetBparamdatatypestr() const
{
  return m_Bparamdatatypestr;
}

void PidController2dof::SetBparamdatatypestr(const std::string& value)
{
  m_Bparamdatatypestr = value;
}

const std::string& PidController2dof::GetBparammin() const
{
  return m_Bparammin;
}

void PidController2dof::SetBparammin(const std::string& value)
{
  m_Bparammin = value;
}

const std::string& PidController2dof::GetBparammax() const
{
  return m_Bparammax;
}

void PidController2dof::SetBparammax(const std::string& value)
{
  m_Bparammax = value;
}

const std::string& PidController2dof::GetCparamdatatypestr() const
{
  return m_Cparamdatatypestr;
}

void PidController2dof::SetCparamdatatypestr(const std::string& value)
{
  m_Cparamdatatypestr = value;
}

const std::string& PidController2dof::GetCparammin() const
{
  return m_Cparammin;
}

void PidController2dof::SetCparammin(const std::string& value)
{
  m_Cparammin = value;
}

const std::string& PidController2dof::GetCparammax() const
{
  return m_Cparammax;
}

void PidController2dof::SetCparammax(const std::string& value)
{
  m_Cparammax = value;
}

const std::string& PidController2dof::GetKbparamdatatypestr() const
{
  return m_Kbparamdatatypestr;
}

void PidController2dof::SetKbparamdatatypestr(const std::string& value)
{
  m_Kbparamdatatypestr = value;
}

const std::string& PidController2dof::GetKbparammin() const
{
  return m_Kbparammin;
}

void PidController2dof::SetKbparammin(const std::string& value)
{
  m_Kbparammin = value;
}

const std::string& PidController2dof::GetKbparammax() const
{
  return m_Kbparammax;
}

void PidController2dof::SetKbparammax(const std::string& value)
{
  m_Kbparammax = value;
}

const std::string& PidController2dof::GetKtparamdatatypestr() const
{
  return m_Ktparamdatatypestr;
}

void PidController2dof::SetKtparamdatatypestr(const std::string& value)
{
  m_Ktparamdatatypestr = value;
}

const std::string& PidController2dof::GetKtparammin() const
{
  return m_Ktparammin;
}

void PidController2dof::SetKtparammin(const std::string& value)
{
  m_Ktparammin = value;
}

const std::string& PidController2dof::GetKtparammax() const
{
  return m_Ktparammax;
}

void PidController2dof::SetKtparammax(const std::string& value)
{
  m_Ktparammax = value;
}

const std::string& PidController2dof::GetKboutdatatypestr() const
{
  return m_Kboutdatatypestr;
}

void PidController2dof::SetKboutdatatypestr(const std::string& value)
{
  m_Kboutdatatypestr = value;
}

const std::string& PidController2dof::GetKboutmin() const
{
  return m_Kboutmin;
}

void PidController2dof::SetKboutmin(const std::string& value)
{
  m_Kboutmin = value;
}

const std::string& PidController2dof::GetKboutmax() const
{
  return m_Kboutmax;
}

void PidController2dof::SetKboutmax(const std::string& value)
{
  m_Kboutmax = value;
}

const std::string& PidController2dof::GetKtoutdatatypestr() const
{
  return m_Ktoutdatatypestr;
}

void PidController2dof::SetKtoutdatatypestr(const std::string& value)
{
  m_Ktoutdatatypestr = value;
}

const std::string& PidController2dof::GetKtoutmin() const
{
  return m_Ktoutmin;
}

void PidController2dof::SetKtoutmin(const std::string& value)
{
  m_Ktoutmin = value;
}

const std::string& PidController2dof::GetKtoutmax() const
{
  return m_Ktoutmax;
}

void PidController2dof::SetKtoutmax(const std::string& value)
{
  m_Ktoutmax = value;
}

const std::string& PidController2dof::GetIntegratoroutdatatypestr() const
{
  return m_Integratoroutdatatypestr;
}

void PidController2dof::SetIntegratoroutdatatypestr(const std::string& value)
{
  m_Integratoroutdatatypestr = value;
}

const std::string& PidController2dof::GetIntegratoroutmin() const
{
  return m_Integratoroutmin;
}

void PidController2dof::SetIntegratoroutmin(const std::string& value)
{
  m_Integratoroutmin = value;
}

const std::string& PidController2dof::GetIntegratoroutmax() const
{
  return m_Integratoroutmax;
}

void PidController2dof::SetIntegratoroutmax(const std::string& value)
{
  m_Integratoroutmax = value;
}

const std::string& PidController2dof::GetFilteroutdatatypestr() const
{
  return m_Filteroutdatatypestr;
}

void PidController2dof::SetFilteroutdatatypestr(const std::string& value)
{
  m_Filteroutdatatypestr = value;
}

const std::string& PidController2dof::GetFilteroutmin() const
{
  return m_Filteroutmin;
}

void PidController2dof::SetFilteroutmin(const std::string& value)
{
  m_Filteroutmin = value;
}

const std::string& PidController2dof::GetFilteroutmax() const
{
  return m_Filteroutmax;
}

void PidController2dof::SetFilteroutmax(const std::string& value)
{
  m_Filteroutmax = value;
}

const std::string& PidController2dof::GetSumi1outdatatypestr() const
{
  return m_Sumi1outdatatypestr;
}

void PidController2dof::SetSumi1outdatatypestr(const std::string& value)
{
  m_Sumi1outdatatypestr = value;
}

const std::string& PidController2dof::GetSumi1outmin() const
{
  return m_Sumi1outmin;
}

void PidController2dof::SetSumi1outmin(const std::string& value)
{
  m_Sumi1outmin = value;
}

const std::string& PidController2dof::GetSumi1outmax() const
{
  return m_Sumi1outmax;
}

void PidController2dof::SetSumi1outmax(const std::string& value)
{
  m_Sumi1outmax = value;
}

const std::string& PidController2dof::GetSumi2outdatatypestr() const
{
  return m_Sumi2outdatatypestr;
}

void PidController2dof::SetSumi2outdatatypestr(const std::string& value)
{
  m_Sumi2outdatatypestr = value;
}

const std::string& PidController2dof::GetSumi2outmin() const
{
  return m_Sumi2outmin;
}

void PidController2dof::SetSumi2outmin(const std::string& value)
{
  m_Sumi2outmin = value;
}

const std::string& PidController2dof::GetSumi2outmax() const
{
  return m_Sumi2outmax;
}

void PidController2dof::SetSumi2outmax(const std::string& value)
{
  m_Sumi2outmax = value;
}

const std::string& PidController2dof::GetSumi3outdatatypestr() const
{
  return m_Sumi3outdatatypestr;
}

void PidController2dof::SetSumi3outdatatypestr(const std::string& value)
{
  m_Sumi3outdatatypestr = value;
}

const std::string& PidController2dof::GetSumi3outmin() const
{
  return m_Sumi3outmin;
}

void PidController2dof::SetSumi3outmin(const std::string& value)
{
  m_Sumi3outmin = value;
}

const std::string& PidController2dof::GetSumi3outmax() const
{
  return m_Sumi3outmax;
}

void PidController2dof::SetSumi3outmax(const std::string& value)
{
  m_Sumi3outmax = value;
}

const std::string& PidController2dof::GetSumi4outdatatypestr() const
{
  return m_Sumi4outdatatypestr;
}

void PidController2dof::SetSumi4outdatatypestr(const std::string& value)
{
  m_Sumi4outdatatypestr = value;
}

const std::string& PidController2dof::GetSumi4outmin() const
{
  return m_Sumi4outmin;
}

void PidController2dof::SetSumi4outmin(const std::string& value)
{
  m_Sumi4outmin = value;
}

const std::string& PidController2dof::GetSumi4outmax() const
{
  return m_Sumi4outmax;
}

void PidController2dof::SetSumi4outmax(const std::string& value)
{
  m_Sumi4outmax = value;
}

const std::string& PidController2dof::GetSumdoutdatatypestr() const
{
  return m_Sumdoutdatatypestr;
}

void PidController2dof::SetSumdoutdatatypestr(const std::string& value)
{
  m_Sumdoutdatatypestr = value;
}

const std::string& PidController2dof::GetSumdoutmin() const
{
  return m_Sumdoutmin;
}

void PidController2dof::SetSumdoutmin(const std::string& value)
{
  m_Sumdoutmin = value;
}

const std::string& PidController2dof::GetSumdoutmax() const
{
  return m_Sumdoutmax;
}

void PidController2dof::SetSumdoutmax(const std::string& value)
{
  m_Sumdoutmax = value;
}

const std::string& PidController2dof::GetSum1outdatatypestr() const
{
  return m_Sum1outdatatypestr;
}

void PidController2dof::SetSum1outdatatypestr(const std::string& value)
{
  m_Sum1outdatatypestr = value;
}

const std::string& PidController2dof::GetSum1outmin() const
{
  return m_Sum1outmin;
}

void PidController2dof::SetSum1outmin(const std::string& value)
{
  m_Sum1outmin = value;
}

const std::string& PidController2dof::GetSum1outmax() const
{
  return m_Sum1outmax;
}

void PidController2dof::SetSum1outmax(const std::string& value)
{
  m_Sum1outmax = value;
}

const std::string& PidController2dof::GetSum2outdatatypestr() const
{
  return m_Sum2outdatatypestr;
}

void PidController2dof::SetSum2outdatatypestr(const std::string& value)
{
  m_Sum2outdatatypestr = value;
}

const std::string& PidController2dof::GetSum2outmin() const
{
  return m_Sum2outmin;
}

void PidController2dof::SetSum2outmin(const std::string& value)
{
  m_Sum2outmin = value;
}

const std::string& PidController2dof::GetSum2outmax() const
{
  return m_Sum2outmax;
}

void PidController2dof::SetSum2outmax(const std::string& value)
{
  m_Sum2outmax = value;
}

const std::string& PidController2dof::GetSum3outdatatypestr() const
{
  return m_Sum3outdatatypestr;
}

void PidController2dof::SetSum3outdatatypestr(const std::string& value)
{
  m_Sum3outdatatypestr = value;
}

const std::string& PidController2dof::GetSum3outmin() const
{
  return m_Sum3outmin;
}

void PidController2dof::SetSum3outmin(const std::string& value)
{
  m_Sum3outmin = value;
}

const std::string& PidController2dof::GetSum3outmax() const
{
  return m_Sum3outmax;
}

void PidController2dof::SetSum3outmax(const std::string& value)
{
  m_Sum3outmax = value;
}

const std::string& PidController2dof::GetSumaccumdatatypestr() const
{
  return m_Sumaccumdatatypestr;
}

void PidController2dof::SetSumaccumdatatypestr(const std::string& value)
{
  m_Sumaccumdatatypestr = value;
}

const std::string& PidController2dof::GetSumi1accumdatatypestr() const
{
  return m_Sumi1accumdatatypestr;
}

void PidController2dof::SetSumi1accumdatatypestr(const std::string& value)
{
  m_Sumi1accumdatatypestr = value;
}

const std::string& PidController2dof::GetSumi2accumdatatypestr() const
{
  return m_Sumi2accumdatatypestr;
}

void PidController2dof::SetSumi2accumdatatypestr(const std::string& value)
{
  m_Sumi2accumdatatypestr = value;
}

const std::string& PidController2dof::GetSumi3accumdatatypestr() const
{
  return m_Sumi3accumdatatypestr;
}

void PidController2dof::SetSumi3accumdatatypestr(const std::string& value)
{
  m_Sumi3accumdatatypestr = value;
}

const std::string& PidController2dof::GetSumi4accumdatatypestr() const
{
  return m_Sumi4accumdatatypestr;
}

void PidController2dof::SetSumi4accumdatatypestr(const std::string& value)
{
  m_Sumi4accumdatatypestr = value;
}

const std::string& PidController2dof::GetSumdaccumdatatypestr() const
{
  return m_Sumdaccumdatatypestr;
}

void PidController2dof::SetSumdaccumdatatypestr(const std::string& value)
{
  m_Sumdaccumdatatypestr = value;
}

const std::string& PidController2dof::GetSum1accumdatatypestr() const
{
  return m_Sum1accumdatatypestr;
}

void PidController2dof::SetSum1accumdatatypestr(const std::string& value)
{
  m_Sum1accumdatatypestr = value;
}

const std::string& PidController2dof::GetSum2accumdatatypestr() const
{
  return m_Sum2accumdatatypestr;
}

void PidController2dof::SetSum2accumdatatypestr(const std::string& value)
{
  m_Sum2accumdatatypestr = value;
}

const std::string& PidController2dof::GetSum3accumdatatypestr() const
{
  return m_Sum3accumdatatypestr;
}

void PidController2dof::SetSum3accumdatatypestr(const std::string& value)
{
  m_Sum3accumdatatypestr = value;
}

const std::string& PidController2dof::GetDifferentiatoroutdatatypestr() const
{
  return m_Differentiatoroutdatatypestr;
}

void PidController2dof::SetDifferentiatoroutdatatypestr(
  const std::string& value)
{
  m_Differentiatoroutdatatypestr = value;
}

const std::string& PidController2dof::GetDifferentiatoroutmin() const
{
  return m_Differentiatoroutmin;
}

void PidController2dof::SetDifferentiatoroutmin(const std::string& value)
{
  m_Differentiatoroutmin = value;
}

const std::string& PidController2dof::GetDifferentiatoroutmax() const
{
  return m_Differentiatoroutmax;
}

void PidController2dof::SetDifferentiatoroutmax(const std::string& value)
{
  m_Differentiatoroutmax = value;
}

const std::string& PidController2dof::GetFilterdiffnumproductoutputdatatypestr()
  const
{
  return m_Filterdiffnumproductoutputdatatypestr;
}

void PidController2dof::SetFilterdiffnumproductoutputdatatypestr(
  const std::string& value)
{
  m_Filterdiffnumproductoutputdatatypestr = value;
}

const std::string& PidController2dof::GetFilterdiffdenproductoutputdatatypestr()
  const
{
  return m_Filterdiffdenproductoutputdatatypestr;
}

void PidController2dof::SetFilterdiffdenproductoutputdatatypestr(
  const std::string& value)
{
  m_Filterdiffdenproductoutputdatatypestr = value;
}

const std::string& PidController2dof::GetFilterdiffnumaccumdatatypestr() const
{
  return m_Filterdiffnumaccumdatatypestr;
}

void PidController2dof::SetFilterdiffnumaccumdatatypestr(
  const std::string& value)
{
  m_Filterdiffnumaccumdatatypestr = value;
}

const std::string& PidController2dof::GetFilterdiffdenaccumdatatypestr() const
{
  return m_Filterdiffdenaccumdatatypestr;
}

void PidController2dof::SetFilterdiffdenaccumdatatypestr(
  const std::string& value)
{
  m_Filterdiffdenaccumdatatypestr = value;
}

const std::string& PidController2dof::GetFilterdiffoutcoefdatatypestr() const
{
  return m_Filterdiffoutcoefdatatypestr;
}

void PidController2dof::SetFilterdiffoutcoefdatatypestr(
  const std::string& value)
{
  m_Filterdiffoutcoefdatatypestr = value;
}

const std::string& PidController2dof::GetFilterdiffoutcoefmin() const
{
  return m_Filterdiffoutcoefmin;
}

void PidController2dof::SetFilterdiffoutcoefmin(const std::string& value)
{
  m_Filterdiffoutcoefmin = value;
}

const std::string& PidController2dof::GetFilterdiffoutcoefmax() const
{
  return m_Filterdiffoutcoefmax;
}

void PidController2dof::SetFilterdiffoutcoefmax(const std::string& value)
{
  m_Filterdiffoutcoefmax = value;
}

const std::string& PidController2dof::GetReciprocaloutdatatypestr() const
{
  return m_Reciprocaloutdatatypestr;
}

void PidController2dof::SetReciprocaloutdatatypestr(const std::string& value)
{
  m_Reciprocaloutdatatypestr = value;
}

const std::string& PidController2dof::GetReciprocaloutmin() const
{
  return m_Reciprocaloutmin;
}

void PidController2dof::SetReciprocaloutmin(const std::string& value)
{
  m_Reciprocaloutmin = value;
}

const std::string& PidController2dof::GetReciprocaloutmax() const
{
  return m_Reciprocaloutmax;
}

void PidController2dof::SetReciprocaloutmax(const std::string& value)
{
  m_Reciprocaloutmax = value;
}

const std::string& PidController2dof::GetSumdenoutdatatypestr() const
{
  return m_Sumdenoutdatatypestr;
}

void PidController2dof::SetSumdenoutdatatypestr(const std::string& value)
{
  m_Sumdenoutdatatypestr = value;
}

const std::string& PidController2dof::GetSumdenoutmin() const
{
  return m_Sumdenoutmin;
}

void PidController2dof::SetSumdenoutmin(const std::string& value)
{
  m_Sumdenoutmin = value;
}

const std::string& PidController2dof::GetSumdenoutmax() const
{
  return m_Sumdenoutmax;
}

void PidController2dof::SetSumdenoutmax(const std::string& value)
{
  m_Sumdenoutmax = value;
}

const std::string& PidController2dof::GetSumnumoutdatatypestr() const
{
  return m_Sumnumoutdatatypestr;
}

void PidController2dof::SetSumnumoutdatatypestr(const std::string& value)
{
  m_Sumnumoutdatatypestr = value;
}

const std::string& PidController2dof::GetSumnumoutmin() const
{
  return m_Sumnumoutmin;
}

void PidController2dof::SetSumnumoutmin(const std::string& value)
{
  m_Sumnumoutmin = value;
}

const std::string& PidController2dof::GetSumnumoutmax() const
{
  return m_Sumnumoutmax;
}

void PidController2dof::SetSumnumoutmax(const std::string& value)
{
  m_Sumnumoutmax = value;
}

const std::string& PidController2dof::GetSumdenaccumdatatypestr() const
{
  return m_Sumdenaccumdatatypestr;
}

void PidController2dof::SetSumdenaccumdatatypestr(const std::string& value)
{
  m_Sumdenaccumdatatypestr = value;
}

const std::string& PidController2dof::GetSumnumaccumdatatypestr() const
{
  return m_Sumnumaccumdatatypestr;
}

void PidController2dof::SetSumnumaccumdatatypestr(const std::string& value)
{
  m_Sumnumaccumdatatypestr = value;
}

const std::string& PidController2dof::GetDivideoutdatatypestr() const
{
  return m_Divideoutdatatypestr;
}

void PidController2dof::SetDivideoutdatatypestr(const std::string& value)
{
  m_Divideoutdatatypestr = value;
}

const std::string& PidController2dof::GetDivideoutmin() const
{
  return m_Divideoutmin;
}

void PidController2dof::SetDivideoutmin(const std::string& value)
{
  m_Divideoutmin = value;
}

const std::string& PidController2dof::GetDivideoutmax() const
{
  return m_Divideoutmax;
}

void PidController2dof::SetDivideoutmax(const std::string& value)
{
  m_Divideoutmax = value;
}

const std::string& PidController2dof::GetUdifftsprodoutdatatypestr() const
{
  return m_Udifftsprodoutdatatypestr;
}

void PidController2dof::SetUdifftsprodoutdatatypestr(const std::string& value)
{
  m_Udifftsprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetUdifftsprodoutmin() const
{
  return m_Udifftsprodoutmin;
}

void PidController2dof::SetUdifftsprodoutmin(const std::string& value)
{
  m_Udifftsprodoutmin = value;
}

const std::string& PidController2dof::GetUdifftsprodoutmax() const
{
  return m_Udifftsprodoutmax;
}

void PidController2dof::SetUdifftsprodoutmax(const std::string& value)
{
  m_Udifftsprodoutmax = value;
}

const std::string& PidController2dof::GetNtsprodoutdatatypestr() const
{
  return m_Ntsprodoutdatatypestr;
}

void PidController2dof::SetNtsprodoutdatatypestr(const std::string& value)
{
  m_Ntsprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetNtsprodoutmin() const
{
  return m_Ntsprodoutmin;
}

void PidController2dof::SetNtsprodoutmin(const std::string& value)
{
  m_Ntsprodoutmin = value;
}

const std::string& PidController2dof::GetNtsprodoutmax() const
{
  return m_Ntsprodoutmax;
}

void PidController2dof::SetNtsprodoutmax(const std::string& value)
{
  m_Ntsprodoutmax = value;
}

const std::string& PidController2dof::GetUintegraltsprodoutdatatypestr() const
{
  return m_Uintegraltsprodoutdatatypestr;
}

void PidController2dof::SetUintegraltsprodoutdatatypestr(
  const std::string& value)
{
  m_Uintegraltsprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetUintegraltsprodoutmin() const
{
  return m_Uintegraltsprodoutmin;
}

void PidController2dof::SetUintegraltsprodoutmin(const std::string& value)
{
  m_Uintegraltsprodoutmin = value;
}

const std::string& PidController2dof::GetUintegraltsprodoutmax() const
{
  return m_Uintegraltsprodoutmax;
}

void PidController2dof::SetUintegraltsprodoutmax(const std::string& value)
{
  m_Uintegraltsprodoutmax = value;
}

const std::string& PidController2dof::GetUngaintsprodoutdatatypestr() const
{
  return m_Ungaintsprodoutdatatypestr;
}

void PidController2dof::SetUngaintsprodoutdatatypestr(const std::string& value)
{
  m_Ungaintsprodoutdatatypestr = value;
}

const std::string& PidController2dof::GetUngaintsprodoutmin() const
{
  return m_Ungaintsprodoutmin;
}

void PidController2dof::SetUngaintsprodoutmin(const std::string& value)
{
  m_Ungaintsprodoutmin = value;
}

const std::string& PidController2dof::GetUngaintsprodoutmax() const
{
  return m_Ungaintsprodoutmax;
}

void PidController2dof::SetUngaintsprodoutmax(const std::string& value)
{
  m_Ungaintsprodoutmax = value;
}

const std::string& PidController2dof::GetClampingzerooutdatatypestr() const
{
  return m_Clampingzerooutdatatypestr;
}

void PidController2dof::SetClampingzerooutdatatypestr(const std::string& value)
{
  m_Clampingzerooutdatatypestr = value;
}

const std::string& PidController2dof::GetClampingzerooutmin() const
{
  return m_Clampingzerooutmin;
}

void PidController2dof::SetClampingzerooutmin(const std::string& value)
{
  m_Clampingzerooutmin = value;
}

const std::string& PidController2dof::GetClampingzerooutmax() const
{
  return m_Clampingzerooutmax;
}

void PidController2dof::SetClampingzerooutmax(const std::string& value)
{
  m_Clampingzerooutmax = value;
}

const std::string& PidController2dof::GetFilterdenconstantoutdatatypestr() const
{
  return m_Filterdenconstantoutdatatypestr;
}

void PidController2dof::SetFilterdenconstantoutdatatypestr(
  const std::string& value)
{
  m_Filterdenconstantoutdatatypestr = value;
}

const std::string& PidController2dof::GetFilterdenconstantoutmin() const
{
  return m_Filterdenconstantoutmin;
}

void PidController2dof::SetFilterdenconstantoutmin(const std::string& value)
{
  m_Filterdenconstantoutmin = value;
}

const std::string& PidController2dof::GetFilterdenconstantoutmax() const
{
  return m_Filterdenconstantoutmax;
}

void PidController2dof::SetFilterdenconstantoutmax(const std::string& value)
{
  m_Filterdenconstantoutmax = value;
}

const std::string& PidController2dof::GetPcopyoutdatatypestr() const
{
  return m_Pcopyoutdatatypestr;
}

void PidController2dof::SetPcopyoutdatatypestr(const std::string& value)
{
  m_Pcopyoutdatatypestr = value;
}

const std::string& PidController2dof::GetPcopyoutmin() const
{
  return m_Pcopyoutmin;
}

void PidController2dof::SetPcopyoutmin(const std::string& value)
{
  m_Pcopyoutmin = value;
}

const std::string& PidController2dof::GetPcopyoutmax() const
{
  return m_Pcopyoutmax;
}

void PidController2dof::SetPcopyoutmax(const std::string& value)
{
  m_Pcopyoutmax = value;
}

const std::string& PidController2dof::GetNcopyoutdatatypestr() const
{
  return m_Ncopyoutdatatypestr;
}

void PidController2dof::SetNcopyoutdatatypestr(const std::string& value)
{
  m_Ncopyoutdatatypestr = value;
}

const std::string& PidController2dof::GetNcopyoutmin() const
{
  return m_Ncopyoutmin;
}

void PidController2dof::SetNcopyoutmin(const std::string& value)
{
  m_Ncopyoutmin = value;
}

const std::string& PidController2dof::GetNcopyoutmax() const
{
  return m_Ncopyoutmax;
}

void PidController2dof::SetNcopyoutmax(const std::string& value)
{
  m_Ncopyoutmax = value;
}

const std::string& PidController2dof::GetIntegratorcontinuousstateattributes()
  const
{
  return m_Integratorcontinuousstateattributes;
}

void PidController2dof::SetIntegratorcontinuousstateattributes(
  const std::string& value)
{
  m_Integratorcontinuousstateattributes = value;
}

const std::string& PidController2dof::GetIntegratorstateidentifier() const
{
  return m_Integratorstateidentifier;
}

void PidController2dof::SetIntegratorstateidentifier(const std::string& value)
{
  m_Integratorstateidentifier = value;
}

const std::string&
PidController2dof::GetIntegratorstatemustresolvetosignalobject() const
{
  return m_Integratorstatemustresolvetosignalobject;
}

void PidController2dof::SetIntegratorstatemustresolvetosignalobject(
  const std::string& value)
{
  m_Integratorstatemustresolvetosignalobject = value;
}

const std::string& PidController2dof::GetFiltercontinuousstateattributes() const
{
  return m_Filtercontinuousstateattributes;
}

void PidController2dof::SetFiltercontinuousstateattributes(
  const std::string& value)
{
  m_Filtercontinuousstateattributes = value;
}

const std::string& PidController2dof::GetFilterstateidentifier() const
{
  return m_Filterstateidentifier;
}

void PidController2dof::SetFilterstateidentifier(const std::string& value)
{
  m_Filterstateidentifier = value;
}

const std::string& PidController2dof::GetFilterstatemustresolvetosignalobject()
  const
{
  return m_Filterstatemustresolvetosignalobject;
}

void PidController2dof::SetFilterstatemustresolvetosignalobject(
  const std::string& value)
{
  m_Filterstatemustresolvetosignalobject = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
