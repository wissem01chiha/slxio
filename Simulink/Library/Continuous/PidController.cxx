#include "PidController.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PidController::PidController() {}

PidController::~PidController() {}

const std::string& PidController::GetController() const
{
  return m_Controller;
}

void PidController::SetController(const std::string& value)
{
  m_Controller = value;
}

const std::string& PidController::GetForm() const
{
  return m_Form;
}

void PidController::SetForm(const std::string& value)
{
  m_Form = value;
}

const std::string& PidController::GetTimedomain() const
{
  return m_Timedomain;
}

void PidController::SetTimedomain(const std::string& value)
{
  m_Timedomain = value;
}

const std::string& PidController::GetUseexternalts() const
{
  return m_Useexternalts;
}

void PidController::SetUseexternalts(const std::string& value)
{
  m_Useexternalts = value;
}

const std::string& PidController::GetSampletime() const
{
  return m_Sampletime;
}

void PidController::SetSampletime(const std::string& value)
{
  m_Sampletime = value;
}

const std::string& PidController::GetIntegratormethod() const
{
  return m_Integratormethod;
}

void PidController::SetIntegratormethod(const std::string& value)
{
  m_Integratormethod = value;
}

const std::string& PidController::GetFiltermethod() const
{
  return m_Filtermethod;
}

void PidController::SetFiltermethod(const std::string& value)
{
  m_Filtermethod = value;
}

const std::string& PidController::GetControllerparameterssource() const
{
  return m_Controllerparameterssource;
}

void PidController::SetControllerparameterssource(const std::string& value)
{
  m_Controllerparameterssource = value;
}

const std::string& PidController::GetP() const
{
  return m_P;
}

void PidController::SetP(const std::string& value)
{
  m_P = value;
}

const std::string& PidController::GetI() const
{
  return m_I;
}

void PidController::SetI(const std::string& value)
{
  m_I = value;
}

const std::string& PidController::GetUsekits() const
{
  return m_Usekits;
}

void PidController::SetUsekits(const std::string& value)
{
  m_Usekits = value;
}

const std::string& PidController::GetD() const
{
  return m_D;
}

void PidController::SetD(const std::string& value)
{
  m_D = value;
}

const std::string& PidController::GetUseexternalderivativesource() const
{
  return m_Useexternalderivativesource;
}

void PidController::SetUseexternalderivativesource(const std::string& value)
{
  m_Useexternalderivativesource = value;
}

const std::string& PidController::GetN() const
{
  return m_N;
}

void PidController::SetN(const std::string& value)
{
  m_N = value;
}

const std::string& PidController::GetUsefilter() const
{
  return m_Usefilter;
}

void PidController::SetUsefilter(const std::string& value)
{
  m_Usefilter = value;
}

const std::string& PidController::GetTunerselectoption() const
{
  return m_Tunerselectoption;
}

void PidController::SetTunerselectoption(const std::string& value)
{
  m_Tunerselectoption = value;
}

const std::string& PidController::GetZerocross() const
{
  return m_Zerocross;
}

void PidController::SetZerocross(const std::string& value)
{
  m_Zerocross = value;
}

const std::string& PidController::GetInitialconditionsource() const
{
  return m_Initialconditionsource;
}

void PidController::SetInitialconditionsource(const std::string& value)
{
  m_Initialconditionsource = value;
}

const std::string& PidController::GetInitialconditionforintegrator() const
{
  return m_Initialconditionforintegrator;
}

void PidController::SetInitialconditionforintegrator(const std::string& value)
{
  m_Initialconditionforintegrator = value;
}

const std::string& PidController::GetInitialconditionforfilter() const
{
  return m_Initialconditionforfilter;
}

void PidController::SetInitialconditionforfilter(const std::string& value)
{
  m_Initialconditionforfilter = value;
}

const std::string& PidController::GetDifferentiatoricprevscaledinput() const
{
  return m_Differentiatoricprevscaledinput;
}

void PidController::SetDifferentiatoricprevscaledinput(const std::string& value)
{
  m_Differentiatoricprevscaledinput = value;
}

const std::string& PidController::GetExternalreset() const
{
  return m_Externalreset;
}

void PidController::SetExternalreset(const std::string& value)
{
  m_Externalreset = value;
}

const std::string& PidController::GetIgnorelimit() const
{
  return m_Ignorelimit;
}

void PidController::SetIgnorelimit(const std::string& value)
{
  m_Ignorelimit = value;
}

const std::string& PidController::GetTrackingmode() const
{
  return m_Trackingmode;
}

void PidController::SetTrackingmode(const std::string& value)
{
  m_Trackingmode = value;
}

const std::string& PidController::GetKt() const
{
  return m_Kt;
}

void PidController::SetKt(const std::string& value)
{
  m_Kt = value;
}

const std::string& PidController::GetLimitoutput() const
{
  return m_Limitoutput;
}

void PidController::SetLimitoutput(const std::string& value)
{
  m_Limitoutput = value;
}

const std::string& PidController::GetSatlimitssource() const
{
  return m_Satlimitssource;
}

void PidController::SetSatlimitssource(const std::string& value)
{
  m_Satlimitssource = value;
}

const std::string& PidController::GetUppersaturationlimit() const
{
  return m_Uppersaturationlimit;
}

void PidController::SetUppersaturationlimit(const std::string& value)
{
  m_Uppersaturationlimit = value;
}

const std::string& PidController::GetLowersaturationlimit() const
{
  return m_Lowersaturationlimit;
}

void PidController::SetLowersaturationlimit(const std::string& value)
{
  m_Lowersaturationlimit = value;
}

const std::string& PidController::GetLinearizeasgain() const
{
  return m_Linearizeasgain;
}

void PidController::SetLinearizeasgain(const std::string& value)
{
  m_Linearizeasgain = value;
}

const std::string& PidController::GetAntiwindupmode() const
{
  return m_Antiwindupmode;
}

void PidController::SetAntiwindupmode(const std::string& value)
{
  m_Antiwindupmode = value;
}

const std::string& PidController::GetKb() const
{
  return m_Kb;
}

void PidController::SetKb(const std::string& value)
{
  m_Kb = value;
}

const std::string& PidController::GetLimitintegrator() const
{
  return m_Limitintegrator;
}

void PidController::SetLimitintegrator(const std::string& value)
{
  m_Limitintegrator = value;
}

const std::string& PidController::GetUpperintegratorsaturationlimit() const
{
  return m_Upperintegratorsaturationlimit;
}

void PidController::SetUpperintegratorsaturationlimit(const std::string& value)
{
  m_Upperintegratorsaturationlimit = value;
}

const std::string& PidController::GetLowerintegratorsaturationlimit() const
{
  return m_Lowerintegratorsaturationlimit;
}

void PidController::SetLowerintegratorsaturationlimit(const std::string& value)
{
  m_Lowerintegratorsaturationlimit = value;
}

const std::string& PidController::GetRndmeth() const
{
  return m_Rndmeth;
}

void PidController::SetRndmeth(const std::string& value)
{
  m_Rndmeth = value;
}

const std::string& PidController::GetSaturateonintegeroverflow() const
{
  return m_Saturateonintegeroverflow;
}

void PidController::SetSaturateonintegeroverflow(const std::string& value)
{
  m_Saturateonintegeroverflow = value;
}

const std::string& PidController::GetLockscale() const
{
  return m_Lockscale;
}

void PidController::SetLockscale(const std::string& value)
{
  m_Lockscale = value;
}

const std::string& PidController::GetPgainoutdatatypestr() const
{
  return m_Pgainoutdatatypestr;
}

void PidController::SetPgainoutdatatypestr(const std::string& value)
{
  m_Pgainoutdatatypestr = value;
}

const std::string& PidController::GetPprodoutdatatypestr() const
{
  return m_Pprodoutdatatypestr;
}

void PidController::SetPprodoutdatatypestr(const std::string& value)
{
  m_Pprodoutdatatypestr = value;
}

const std::string& PidController::GetPoutmin() const
{
  return m_Poutmin;
}

void PidController::SetPoutmin(const std::string& value)
{
  m_Poutmin = value;
}

const std::string& PidController::GetPoutmax() const
{
  return m_Poutmax;
}

void PidController::SetPoutmax(const std::string& value)
{
  m_Poutmax = value;
}

const std::string& PidController::GetIgainoutdatatypestr() const
{
  return m_Igainoutdatatypestr;
}

void PidController::SetIgainoutdatatypestr(const std::string& value)
{
  m_Igainoutdatatypestr = value;
}

const std::string& PidController::GetIprodoutdatatypestr() const
{
  return m_Iprodoutdatatypestr;
}

void PidController::SetIprodoutdatatypestr(const std::string& value)
{
  m_Iprodoutdatatypestr = value;
}

const std::string& PidController::GetIoutmin() const
{
  return m_Ioutmin;
}

void PidController::SetIoutmin(const std::string& value)
{
  m_Ioutmin = value;
}

const std::string& PidController::GetIoutmax() const
{
  return m_Ioutmax;
}

void PidController::SetIoutmax(const std::string& value)
{
  m_Ioutmax = value;
}

const std::string& PidController::GetDgainoutdatatypestr() const
{
  return m_Dgainoutdatatypestr;
}

void PidController::SetDgainoutdatatypestr(const std::string& value)
{
  m_Dgainoutdatatypestr = value;
}

const std::string& PidController::GetDprodoutdatatypestr() const
{
  return m_Dprodoutdatatypestr;
}

void PidController::SetDprodoutdatatypestr(const std::string& value)
{
  m_Dprodoutdatatypestr = value;
}

const std::string& PidController::GetDoutmin() const
{
  return m_Doutmin;
}

void PidController::SetDoutmin(const std::string& value)
{
  m_Doutmin = value;
}

const std::string& PidController::GetDoutmax() const
{
  return m_Doutmax;
}

void PidController::SetDoutmax(const std::string& value)
{
  m_Doutmax = value;
}

const std::string& PidController::GetNgainoutdatatypestr() const
{
  return m_Ngainoutdatatypestr;
}

void PidController::SetNgainoutdatatypestr(const std::string& value)
{
  m_Ngainoutdatatypestr = value;
}

const std::string& PidController::GetNprodoutdatatypestr() const
{
  return m_Nprodoutdatatypestr;
}

void PidController::SetNprodoutdatatypestr(const std::string& value)
{
  m_Nprodoutdatatypestr = value;
}

const std::string& PidController::GetNoutmin() const
{
  return m_Noutmin;
}

void PidController::SetNoutmin(const std::string& value)
{
  m_Noutmin = value;
}

const std::string& PidController::GetNoutmax() const
{
  return m_Noutmax;
}

void PidController::SetNoutmax(const std::string& value)
{
  m_Noutmax = value;
}

const std::string& PidController::GetSumoutdatatypestr() const
{
  return m_Sumoutdatatypestr;
}

void PidController::SetSumoutdatatypestr(const std::string& value)
{
  m_Sumoutdatatypestr = value;
}

const std::string& PidController::GetSumoutmin() const
{
  return m_Sumoutmin;
}

void PidController::SetSumoutmin(const std::string& value)
{
  m_Sumoutmin = value;
}

const std::string& PidController::GetSumoutmax() const
{
  return m_Sumoutmax;
}

void PidController::SetSumoutmax(const std::string& value)
{
  m_Sumoutmax = value;
}

const std::string& PidController::GetSaturationoutdatatypestr() const
{
  return m_Saturationoutdatatypestr;
}

void PidController::SetSaturationoutdatatypestr(const std::string& value)
{
  m_Saturationoutdatatypestr = value;
}

const std::string& PidController::GetSaturationoutmin() const
{
  return m_Saturationoutmin;
}

void PidController::SetSaturationoutmin(const std::string& value)
{
  m_Saturationoutmin = value;
}

const std::string& PidController::GetSaturationoutmax() const
{
  return m_Saturationoutmax;
}

void PidController::SetSaturationoutmax(const std::string& value)
{
  m_Saturationoutmax = value;
}

const std::string& PidController::GetPparamdatatypestr() const
{
  return m_Pparamdatatypestr;
}

void PidController::SetPparamdatatypestr(const std::string& value)
{
  m_Pparamdatatypestr = value;
}

const std::string& PidController::GetPparammin() const
{
  return m_Pparammin;
}

void PidController::SetPparammin(const std::string& value)
{
  m_Pparammin = value;
}

const std::string& PidController::GetPparammax() const
{
  return m_Pparammax;
}

void PidController::SetPparammax(const std::string& value)
{
  m_Pparammax = value;
}

const std::string& PidController::GetIparamdatatypestr() const
{
  return m_Iparamdatatypestr;
}

void PidController::SetIparamdatatypestr(const std::string& value)
{
  m_Iparamdatatypestr = value;
}

const std::string& PidController::GetIparammin() const
{
  return m_Iparammin;
}

void PidController::SetIparammin(const std::string& value)
{
  m_Iparammin = value;
}

const std::string& PidController::GetIparammax() const
{
  return m_Iparammax;
}

void PidController::SetIparammax(const std::string& value)
{
  m_Iparammax = value;
}

const std::string& PidController::GetDparamdatatypestr() const
{
  return m_Dparamdatatypestr;
}

void PidController::SetDparamdatatypestr(const std::string& value)
{
  m_Dparamdatatypestr = value;
}

const std::string& PidController::GetDparammin() const
{
  return m_Dparammin;
}

void PidController::SetDparammin(const std::string& value)
{
  m_Dparammin = value;
}

const std::string& PidController::GetDparammax() const
{
  return m_Dparammax;
}

void PidController::SetDparammax(const std::string& value)
{
  m_Dparammax = value;
}

const std::string& PidController::GetNparamdatatypestr() const
{
  return m_Nparamdatatypestr;
}

void PidController::SetNparamdatatypestr(const std::string& value)
{
  m_Nparamdatatypestr = value;
}

const std::string& PidController::GetNparammin() const
{
  return m_Nparammin;
}

void PidController::SetNparammin(const std::string& value)
{
  m_Nparammin = value;
}

const std::string& PidController::GetNparammax() const
{
  return m_Nparammax;
}

void PidController::SetNparammax(const std::string& value)
{
  m_Nparammax = value;
}

const std::string& PidController::GetKbparamdatatypestr() const
{
  return m_Kbparamdatatypestr;
}

void PidController::SetKbparamdatatypestr(const std::string& value)
{
  m_Kbparamdatatypestr = value;
}

const std::string& PidController::GetKbparammin() const
{
  return m_Kbparammin;
}

void PidController::SetKbparammin(const std::string& value)
{
  m_Kbparammin = value;
}

const std::string& PidController::GetKbparammax() const
{
  return m_Kbparammax;
}

void PidController::SetKbparammax(const std::string& value)
{
  m_Kbparammax = value;
}

const std::string& PidController::GetKtparamdatatypestr() const
{
  return m_Ktparamdatatypestr;
}

void PidController::SetKtparamdatatypestr(const std::string& value)
{
  m_Ktparamdatatypestr = value;
}

const std::string& PidController::GetKtparammin() const
{
  return m_Ktparammin;
}

void PidController::SetKtparammin(const std::string& value)
{
  m_Ktparammin = value;
}

const std::string& PidController::GetKtparammax() const
{
  return m_Ktparammax;
}

void PidController::SetKtparammax(const std::string& value)
{
  m_Ktparammax = value;
}

const std::string& PidController::GetKboutdatatypestr() const
{
  return m_Kboutdatatypestr;
}

void PidController::SetKboutdatatypestr(const std::string& value)
{
  m_Kboutdatatypestr = value;
}

const std::string& PidController::GetKboutmin() const
{
  return m_Kboutmin;
}

void PidController::SetKboutmin(const std::string& value)
{
  m_Kboutmin = value;
}

const std::string& PidController::GetKboutmax() const
{
  return m_Kboutmax;
}

void PidController::SetKboutmax(const std::string& value)
{
  m_Kboutmax = value;
}

const std::string& PidController::GetKtoutdatatypestr() const
{
  return m_Ktoutdatatypestr;
}

void PidController::SetKtoutdatatypestr(const std::string& value)
{
  m_Ktoutdatatypestr = value;
}

const std::string& PidController::GetKtoutmin() const
{
  return m_Ktoutmin;
}

void PidController::SetKtoutmin(const std::string& value)
{
  m_Ktoutmin = value;
}

const std::string& PidController::GetKtoutmax() const
{
  return m_Ktoutmax;
}

void PidController::SetKtoutmax(const std::string& value)
{
  m_Ktoutmax = value;
}

const std::string& PidController::GetIntegratoroutdatatypestr() const
{
  return m_Integratoroutdatatypestr;
}

void PidController::SetIntegratoroutdatatypestr(const std::string& value)
{
  m_Integratoroutdatatypestr = value;
}

const std::string& PidController::GetIntegratoroutmin() const
{
  return m_Integratoroutmin;
}

void PidController::SetIntegratoroutmin(const std::string& value)
{
  m_Integratoroutmin = value;
}

const std::string& PidController::GetIntegratoroutmax() const
{
  return m_Integratoroutmax;
}

void PidController::SetIntegratoroutmax(const std::string& value)
{
  m_Integratoroutmax = value;
}

const std::string& PidController::GetFilteroutdatatypestr() const
{
  return m_Filteroutdatatypestr;
}

void PidController::SetFilteroutdatatypestr(const std::string& value)
{
  m_Filteroutdatatypestr = value;
}

const std::string& PidController::GetFilteroutmin() const
{
  return m_Filteroutmin;
}

void PidController::SetFilteroutmin(const std::string& value)
{
  m_Filteroutmin = value;
}

const std::string& PidController::GetFilteroutmax() const
{
  return m_Filteroutmax;
}

void PidController::SetFilteroutmax(const std::string& value)
{
  m_Filteroutmax = value;
}

const std::string& PidController::GetSumi1outdatatypestr() const
{
  return m_Sumi1outdatatypestr;
}

void PidController::SetSumi1outdatatypestr(const std::string& value)
{
  m_Sumi1outdatatypestr = value;
}

const std::string& PidController::GetSumi1outmin() const
{
  return m_Sumi1outmin;
}

void PidController::SetSumi1outmin(const std::string& value)
{
  m_Sumi1outmin = value;
}

const std::string& PidController::GetSumi1outmax() const
{
  return m_Sumi1outmax;
}

void PidController::SetSumi1outmax(const std::string& value)
{
  m_Sumi1outmax = value;
}

const std::string& PidController::GetSumi2outdatatypestr() const
{
  return m_Sumi2outdatatypestr;
}

void PidController::SetSumi2outdatatypestr(const std::string& value)
{
  m_Sumi2outdatatypestr = value;
}

const std::string& PidController::GetSumi2outmin() const
{
  return m_Sumi2outmin;
}

void PidController::SetSumi2outmin(const std::string& value)
{
  m_Sumi2outmin = value;
}

const std::string& PidController::GetSumi2outmax() const
{
  return m_Sumi2outmax;
}

void PidController::SetSumi2outmax(const std::string& value)
{
  m_Sumi2outmax = value;
}

const std::string& PidController::GetSumi3outdatatypestr() const
{
  return m_Sumi3outdatatypestr;
}

void PidController::SetSumi3outdatatypestr(const std::string& value)
{
  m_Sumi3outdatatypestr = value;
}

const std::string& PidController::GetSumi3outmin() const
{
  return m_Sumi3outmin;
}

void PidController::SetSumi3outmin(const std::string& value)
{
  m_Sumi3outmin = value;
}

const std::string& PidController::GetSumi3outmax() const
{
  return m_Sumi3outmax;
}

void PidController::SetSumi3outmax(const std::string& value)
{
  m_Sumi3outmax = value;
}

const std::string& PidController::GetSumi4outdatatypestr() const
{
  return m_Sumi4outdatatypestr;
}

void PidController::SetSumi4outdatatypestr(const std::string& value)
{
  m_Sumi4outdatatypestr = value;
}

const std::string& PidController::GetSumi4outmin() const
{
  return m_Sumi4outmin;
}

void PidController::SetSumi4outmin(const std::string& value)
{
  m_Sumi4outmin = value;
}

const std::string& PidController::GetSumi4outmax() const
{
  return m_Sumi4outmax;
}

void PidController::SetSumi4outmax(const std::string& value)
{
  m_Sumi4outmax = value;
}

const std::string& PidController::GetSumdoutdatatypestr() const
{
  return m_Sumdoutdatatypestr;
}

void PidController::SetSumdoutdatatypestr(const std::string& value)
{
  m_Sumdoutdatatypestr = value;
}

const std::string& PidController::GetSumdoutmin() const
{
  return m_Sumdoutmin;
}

void PidController::SetSumdoutmin(const std::string& value)
{
  m_Sumdoutmin = value;
}

const std::string& PidController::GetSumdoutmax() const
{
  return m_Sumdoutmax;
}

void PidController::SetSumdoutmax(const std::string& value)
{
  m_Sumdoutmax = value;
}

const std::string& PidController::GetSumaccumdatatypestr() const
{
  return m_Sumaccumdatatypestr;
}

void PidController::SetSumaccumdatatypestr(const std::string& value)
{
  m_Sumaccumdatatypestr = value;
}

const std::string& PidController::GetSumi1accumdatatypestr() const
{
  return m_Sumi1accumdatatypestr;
}

void PidController::SetSumi1accumdatatypestr(const std::string& value)
{
  m_Sumi1accumdatatypestr = value;
}

const std::string& PidController::GetSumi2accumdatatypestr() const
{
  return m_Sumi2accumdatatypestr;
}

void PidController::SetSumi2accumdatatypestr(const std::string& value)
{
  m_Sumi2accumdatatypestr = value;
}

const std::string& PidController::GetSumi3accumdatatypestr() const
{
  return m_Sumi3accumdatatypestr;
}

void PidController::SetSumi3accumdatatypestr(const std::string& value)
{
  m_Sumi3accumdatatypestr = value;
}

const std::string& PidController::GetSumi4accumdatatypestr() const
{
  return m_Sumi4accumdatatypestr;
}

void PidController::SetSumi4accumdatatypestr(const std::string& value)
{
  m_Sumi4accumdatatypestr = value;
}

const std::string& PidController::GetSumdaccumdatatypestr() const
{
  return m_Sumdaccumdatatypestr;
}

void PidController::SetSumdaccumdatatypestr(const std::string& value)
{
  m_Sumdaccumdatatypestr = value;
}

const std::string& PidController::GetDifferentiatoroutdatatypestr() const
{
  return m_Differentiatoroutdatatypestr;
}

void PidController::SetDifferentiatoroutdatatypestr(const std::string& value)
{
  m_Differentiatoroutdatatypestr = value;
}

const std::string& PidController::GetDifferentiatoroutmin() const
{
  return m_Differentiatoroutmin;
}

void PidController::SetDifferentiatoroutmin(const std::string& value)
{
  m_Differentiatoroutmin = value;
}

const std::string& PidController::GetDifferentiatoroutmax() const
{
  return m_Differentiatoroutmax;
}

void PidController::SetDifferentiatoroutmax(const std::string& value)
{
  m_Differentiatoroutmax = value;
}

const std::string& PidController::GetFilterdiffnumproductoutputdatatypestr()
  const
{
  return m_Filterdiffnumproductoutputdatatypestr;
}

void PidController::SetFilterdiffnumproductoutputdatatypestr(
  const std::string& value)
{
  m_Filterdiffnumproductoutputdatatypestr = value;
}

const std::string& PidController::GetFilterdiffdenproductoutputdatatypestr()
  const
{
  return m_Filterdiffdenproductoutputdatatypestr;
}

void PidController::SetFilterdiffdenproductoutputdatatypestr(
  const std::string& value)
{
  m_Filterdiffdenproductoutputdatatypestr = value;
}

const std::string& PidController::GetFilterdiffnumaccumdatatypestr() const
{
  return m_Filterdiffnumaccumdatatypestr;
}

void PidController::SetFilterdiffnumaccumdatatypestr(const std::string& value)
{
  m_Filterdiffnumaccumdatatypestr = value;
}

const std::string& PidController::GetFilterdiffdenaccumdatatypestr() const
{
  return m_Filterdiffdenaccumdatatypestr;
}

void PidController::SetFilterdiffdenaccumdatatypestr(const std::string& value)
{
  m_Filterdiffdenaccumdatatypestr = value;
}

const std::string& PidController::GetFilterdiffoutcoefdatatypestr() const
{
  return m_Filterdiffoutcoefdatatypestr;
}

void PidController::SetFilterdiffoutcoefdatatypestr(const std::string& value)
{
  m_Filterdiffoutcoefdatatypestr = value;
}

const std::string& PidController::GetFilterdiffoutcoefmin() const
{
  return m_Filterdiffoutcoefmin;
}

void PidController::SetFilterdiffoutcoefmin(const std::string& value)
{
  m_Filterdiffoutcoefmin = value;
}

const std::string& PidController::GetFilterdiffoutcoefmax() const
{
  return m_Filterdiffoutcoefmax;
}

void PidController::SetFilterdiffoutcoefmax(const std::string& value)
{
  m_Filterdiffoutcoefmax = value;
}

const std::string& PidController::GetReciprocaloutdatatypestr() const
{
  return m_Reciprocaloutdatatypestr;
}

void PidController::SetReciprocaloutdatatypestr(const std::string& value)
{
  m_Reciprocaloutdatatypestr = value;
}

const std::string& PidController::GetReciprocaloutmin() const
{
  return m_Reciprocaloutmin;
}

void PidController::SetReciprocaloutmin(const std::string& value)
{
  m_Reciprocaloutmin = value;
}

const std::string& PidController::GetReciprocaloutmax() const
{
  return m_Reciprocaloutmax;
}

void PidController::SetReciprocaloutmax(const std::string& value)
{
  m_Reciprocaloutmax = value;
}

const std::string& PidController::GetSumdenoutdatatypestr() const
{
  return m_Sumdenoutdatatypestr;
}

void PidController::SetSumdenoutdatatypestr(const std::string& value)
{
  m_Sumdenoutdatatypestr = value;
}

const std::string& PidController::GetSumdenoutmin() const
{
  return m_Sumdenoutmin;
}

void PidController::SetSumdenoutmin(const std::string& value)
{
  m_Sumdenoutmin = value;
}

const std::string& PidController::GetSumdenoutmax() const
{
  return m_Sumdenoutmax;
}

void PidController::SetSumdenoutmax(const std::string& value)
{
  m_Sumdenoutmax = value;
}

const std::string& PidController::GetSumnumoutdatatypestr() const
{
  return m_Sumnumoutdatatypestr;
}

void PidController::SetSumnumoutdatatypestr(const std::string& value)
{
  m_Sumnumoutdatatypestr = value;
}

const std::string& PidController::GetSumnumoutmin() const
{
  return m_Sumnumoutmin;
}

void PidController::SetSumnumoutmin(const std::string& value)
{
  m_Sumnumoutmin = value;
}

const std::string& PidController::GetSumnumoutmax() const
{
  return m_Sumnumoutmax;
}

void PidController::SetSumnumoutmax(const std::string& value)
{
  m_Sumnumoutmax = value;
}

const std::string& PidController::GetSumdenaccumdatatypestr() const
{
  return m_Sumdenaccumdatatypestr;
}

void PidController::SetSumdenaccumdatatypestr(const std::string& value)
{
  m_Sumdenaccumdatatypestr = value;
}

const std::string& PidController::GetSumnumaccumdatatypestr() const
{
  return m_Sumnumaccumdatatypestr;
}

void PidController::SetSumnumaccumdatatypestr(const std::string& value)
{
  m_Sumnumaccumdatatypestr = value;
}

const std::string& PidController::GetDivideoutdatatypestr() const
{
  return m_Divideoutdatatypestr;
}

void PidController::SetDivideoutdatatypestr(const std::string& value)
{
  m_Divideoutdatatypestr = value;
}

const std::string& PidController::GetDivideoutmin() const
{
  return m_Divideoutmin;
}

void PidController::SetDivideoutmin(const std::string& value)
{
  m_Divideoutmin = value;
}

const std::string& PidController::GetDivideoutmax() const
{
  return m_Divideoutmax;
}

void PidController::SetDivideoutmax(const std::string& value)
{
  m_Divideoutmax = value;
}

const std::string& PidController::GetUdifftsprodoutdatatypestr() const
{
  return m_Udifftsprodoutdatatypestr;
}

void PidController::SetUdifftsprodoutdatatypestr(const std::string& value)
{
  m_Udifftsprodoutdatatypestr = value;
}

const std::string& PidController::GetUdifftsprodoutmin() const
{
  return m_Udifftsprodoutmin;
}

void PidController::SetUdifftsprodoutmin(const std::string& value)
{
  m_Udifftsprodoutmin = value;
}

const std::string& PidController::GetUdifftsprodoutmax() const
{
  return m_Udifftsprodoutmax;
}

void PidController::SetUdifftsprodoutmax(const std::string& value)
{
  m_Udifftsprodoutmax = value;
}

const std::string& PidController::GetNtsprodoutdatatypestr() const
{
  return m_Ntsprodoutdatatypestr;
}

void PidController::SetNtsprodoutdatatypestr(const std::string& value)
{
  m_Ntsprodoutdatatypestr = value;
}

const std::string& PidController::GetNtsprodoutmin() const
{
  return m_Ntsprodoutmin;
}

void PidController::SetNtsprodoutmin(const std::string& value)
{
  m_Ntsprodoutmin = value;
}

const std::string& PidController::GetNtsprodoutmax() const
{
  return m_Ntsprodoutmax;
}

void PidController::SetNtsprodoutmax(const std::string& value)
{
  m_Ntsprodoutmax = value;
}

const std::string& PidController::GetUintegraltsprodoutdatatypestr() const
{
  return m_Uintegraltsprodoutdatatypestr;
}

void PidController::SetUintegraltsprodoutdatatypestr(const std::string& value)
{
  m_Uintegraltsprodoutdatatypestr = value;
}

const std::string& PidController::GetUintegraltsprodoutmin() const
{
  return m_Uintegraltsprodoutmin;
}

void PidController::SetUintegraltsprodoutmin(const std::string& value)
{
  m_Uintegraltsprodoutmin = value;
}

const std::string& PidController::GetUintegraltsprodoutmax() const
{
  return m_Uintegraltsprodoutmax;
}

void PidController::SetUintegraltsprodoutmax(const std::string& value)
{
  m_Uintegraltsprodoutmax = value;
}

const std::string& PidController::GetUngaintsprodoutdatatypestr() const
{
  return m_Ungaintsprodoutdatatypestr;
}

void PidController::SetUngaintsprodoutdatatypestr(const std::string& value)
{
  m_Ungaintsprodoutdatatypestr = value;
}

const std::string& PidController::GetUngaintsprodoutmin() const
{
  return m_Ungaintsprodoutmin;
}

void PidController::SetUngaintsprodoutmin(const std::string& value)
{
  m_Ungaintsprodoutmin = value;
}

const std::string& PidController::GetUngaintsprodoutmax() const
{
  return m_Ungaintsprodoutmax;
}

void PidController::SetUngaintsprodoutmax(const std::string& value)
{
  m_Ungaintsprodoutmax = value;
}

const std::string& PidController::GetClampingzerooutdatatypestr() const
{
  return m_Clampingzerooutdatatypestr;
}

void PidController::SetClampingzerooutdatatypestr(const std::string& value)
{
  m_Clampingzerooutdatatypestr = value;
}

const std::string& PidController::GetClampingzerooutmin() const
{
  return m_Clampingzerooutmin;
}

void PidController::SetClampingzerooutmin(const std::string& value)
{
  m_Clampingzerooutmin = value;
}

const std::string& PidController::GetClampingzerooutmax() const
{
  return m_Clampingzerooutmax;
}

void PidController::SetClampingzerooutmax(const std::string& value)
{
  m_Clampingzerooutmax = value;
}

const std::string& PidController::GetFilterdenconstantoutdatatypestr() const
{
  return m_Filterdenconstantoutdatatypestr;
}

void PidController::SetFilterdenconstantoutdatatypestr(const std::string& value)
{
  m_Filterdenconstantoutdatatypestr = value;
}

const std::string& PidController::GetFilterdenconstantoutmin() const
{
  return m_Filterdenconstantoutmin;
}

void PidController::SetFilterdenconstantoutmin(const std::string& value)
{
  m_Filterdenconstantoutmin = value;
}

const std::string& PidController::GetFilterdenconstantoutmax() const
{
  return m_Filterdenconstantoutmax;
}

void PidController::SetFilterdenconstantoutmax(const std::string& value)
{
  m_Filterdenconstantoutmax = value;
}

const std::string& PidController::GetPcopyoutdatatypestr() const
{
  return m_Pcopyoutdatatypestr;
}

void PidController::SetPcopyoutdatatypestr(const std::string& value)
{
  m_Pcopyoutdatatypestr = value;
}

const std::string& PidController::GetPcopyoutmin() const
{
  return m_Pcopyoutmin;
}

void PidController::SetPcopyoutmin(const std::string& value)
{
  m_Pcopyoutmin = value;
}

const std::string& PidController::GetPcopyoutmax() const
{
  return m_Pcopyoutmax;
}

void PidController::SetPcopyoutmax(const std::string& value)
{
  m_Pcopyoutmax = value;
}

const std::string& PidController::GetNcopyoutdatatypestr() const
{
  return m_Ncopyoutdatatypestr;
}

void PidController::SetNcopyoutdatatypestr(const std::string& value)
{
  m_Ncopyoutdatatypestr = value;
}

const std::string& PidController::GetNcopyoutmin() const
{
  return m_Ncopyoutmin;
}

void PidController::SetNcopyoutmin(const std::string& value)
{
  m_Ncopyoutmin = value;
}

const std::string& PidController::GetNcopyoutmax() const
{
  return m_Ncopyoutmax;
}

void PidController::SetNcopyoutmax(const std::string& value)
{
  m_Ncopyoutmax = value;
}

const std::string& PidController::GetIntegratorcontinuousstateattributes() const
{
  return m_Integratorcontinuousstateattributes;
}

void PidController::SetIntegratorcontinuousstateattributes(
  const std::string& value)
{
  m_Integratorcontinuousstateattributes = value;
}

const std::string& PidController::GetIntegratorstateidentifier() const
{
  return m_Integratorstateidentifier;
}

void PidController::SetIntegratorstateidentifier(const std::string& value)
{
  m_Integratorstateidentifier = value;
}

const std::string& PidController::GetIntegratorstatemustresolvetosignalobject()
  const
{
  return m_Integratorstatemustresolvetosignalobject;
}

void PidController::SetIntegratorstatemustresolvetosignalobject(
  const std::string& value)
{
  m_Integratorstatemustresolvetosignalobject = value;
}

const std::string& PidController::GetFiltercontinuousstateattributes() const
{
  return m_Filtercontinuousstateattributes;
}

void PidController::SetFiltercontinuousstateattributes(const std::string& value)
{
  m_Filtercontinuousstateattributes = value;
}

const std::string& PidController::GetFilterstateidentifier() const
{
  return m_Filterstateidentifier;
}

void PidController::SetFilterstateidentifier(const std::string& value)
{
  m_Filterstateidentifier = value;
}

const std::string& PidController::GetFilterstatemustresolvetosignalobject()
  const
{
  return m_Filterstatemustresolvetosignalobject;
}

void PidController::SetFilterstatemustresolvetosignalobject(
  const std::string& value)
{
  m_Filterstatemustresolvetosignalobject = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
