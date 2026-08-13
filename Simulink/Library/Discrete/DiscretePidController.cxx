#include "DiscretePidController.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DiscretePidController::DiscretePidController() {}

DiscretePidController::~DiscretePidController() {}

const std::string& DiscretePidController::GetController() const
{
    return m_Controller;
}

void DiscretePidController::SetController(const std::string& value)
{
    m_Controller = value;
}

const std::string& DiscretePidController::GetForm() const
{
    return m_Form;
}

void DiscretePidController::SetForm(const std::string& value)
{
    m_Form = value;
}

const std::string& DiscretePidController::GetTimedomain() const
{
    return m_Timedomain;
}

void DiscretePidController::SetTimedomain(const std::string& value)
{
    m_Timedomain = value;
}

const std::string& DiscretePidController::GetUseexternalts() const
{
    return m_Useexternalts;
}

void DiscretePidController::SetUseexternalts(const std::string& value)
{
    m_Useexternalts = value;
}

const std::string& DiscretePidController::GetSampletime() const
{
    return m_Sampletime;
}

void DiscretePidController::SetSampletime(const std::string& value)
{
    m_Sampletime = value;
}

const std::string& DiscretePidController::GetIntegratormethod() const
{
    return m_Integratormethod;
}

void DiscretePidController::SetIntegratormethod(const std::string& value)
{
    m_Integratormethod = value;
}

const std::string& DiscretePidController::GetFiltermethod() const
{
    return m_Filtermethod;
}

void DiscretePidController::SetFiltermethod(const std::string& value)
{
    m_Filtermethod = value;
}

const std::string& DiscretePidController::GetControllerparameterssource() const
{
    return m_Controllerparameterssource;
}

void DiscretePidController::SetControllerparameterssource(const std::string& value)
{
    m_Controllerparameterssource = value;
}

const std::string& DiscretePidController::GetP() const
{
    return m_P;
}

void DiscretePidController::SetP(const std::string& value)
{
    m_P = value;
}

const std::string& DiscretePidController::GetI() const
{
    return m_I;
}

void DiscretePidController::SetI(const std::string& value)
{
    m_I = value;
}

const std::string& DiscretePidController::GetUsekits() const
{
    return m_Usekits;
}

void DiscretePidController::SetUsekits(const std::string& value)
{
    m_Usekits = value;
}

const std::string& DiscretePidController::GetD() const
{
    return m_D;
}

void DiscretePidController::SetD(const std::string& value)
{
    m_D = value;
}

const std::string& DiscretePidController::GetUseexternalderivativesource() const
{
    return m_Useexternalderivativesource;
}

void DiscretePidController::SetUseexternalderivativesource(const std::string& value)
{
    m_Useexternalderivativesource = value;
}

const std::string& DiscretePidController::GetN() const
{
    return m_N;
}

void DiscretePidController::SetN(const std::string& value)
{
    m_N = value;
}

const std::string& DiscretePidController::GetUsefilter() const
{
    return m_Usefilter;
}

void DiscretePidController::SetUsefilter(const std::string& value)
{
    m_Usefilter = value;
}

const std::string& DiscretePidController::GetTunerselectoption() const
{
    return m_Tunerselectoption;
}

void DiscretePidController::SetTunerselectoption(const std::string& value)
{
    m_Tunerselectoption = value;
}

const std::string& DiscretePidController::GetZerocross() const
{
    return m_Zerocross;
}

void DiscretePidController::SetZerocross(const std::string& value)
{
    m_Zerocross = value;
}

const std::string& DiscretePidController::GetInitialconditionsource() const
{
    return m_Initialconditionsource;
}

void DiscretePidController::SetInitialconditionsource(const std::string& value)
{
    m_Initialconditionsource = value;
}

const std::string& DiscretePidController::GetInitialconditionforintegrator() const
{
    return m_Initialconditionforintegrator;
}

void DiscretePidController::SetInitialconditionforintegrator(const std::string& value)
{
    m_Initialconditionforintegrator = value;
}

const std::string& DiscretePidController::GetInitialconditionforfilter() const
{
    return m_Initialconditionforfilter;
}

void DiscretePidController::SetInitialconditionforfilter(const std::string& value)
{
    m_Initialconditionforfilter = value;
}

const std::string& DiscretePidController::GetDifferentiatoricprevscaledinput() const
{
    return m_Differentiatoricprevscaledinput;
}

void DiscretePidController::SetDifferentiatoricprevscaledinput(const std::string& value)
{
    m_Differentiatoricprevscaledinput = value;
}

const std::string& DiscretePidController::GetExternalreset() const
{
    return m_Externalreset;
}

void DiscretePidController::SetExternalreset(const std::string& value)
{
    m_Externalreset = value;
}

const std::string& DiscretePidController::GetIgnorelimit() const
{
    return m_Ignorelimit;
}

void DiscretePidController::SetIgnorelimit(const std::string& value)
{
    m_Ignorelimit = value;
}

const std::string& DiscretePidController::GetTrackingmode() const
{
    return m_Trackingmode;
}

void DiscretePidController::SetTrackingmode(const std::string& value)
{
    m_Trackingmode = value;
}

const std::string& DiscretePidController::GetKt() const
{
    return m_Kt;
}

void DiscretePidController::SetKt(const std::string& value)
{
    m_Kt = value;
}

const std::string& DiscretePidController::GetLimitoutput() const
{
    return m_Limitoutput;
}

void DiscretePidController::SetLimitoutput(const std::string& value)
{
    m_Limitoutput = value;
}

const std::string& DiscretePidController::GetSatlimitssource() const
{
    return m_Satlimitssource;
}

void DiscretePidController::SetSatlimitssource(const std::string& value)
{
    m_Satlimitssource = value;
}

const std::string& DiscretePidController::GetUppersaturationlimit() const
{
    return m_Uppersaturationlimit;
}

void DiscretePidController::SetUppersaturationlimit(const std::string& value)
{
    m_Uppersaturationlimit = value;
}

const std::string& DiscretePidController::GetLowersaturationlimit() const
{
    return m_Lowersaturationlimit;
}

void DiscretePidController::SetLowersaturationlimit(const std::string& value)
{
    m_Lowersaturationlimit = value;
}

const std::string& DiscretePidController::GetLinearizeasgain() const
{
    return m_Linearizeasgain;
}

void DiscretePidController::SetLinearizeasgain(const std::string& value)
{
    m_Linearizeasgain = value;
}

const std::string& DiscretePidController::GetAntiwindupmode() const
{
    return m_Antiwindupmode;
}

void DiscretePidController::SetAntiwindupmode(const std::string& value)
{
    m_Antiwindupmode = value;
}

const std::string& DiscretePidController::GetKb() const
{
    return m_Kb;
}

void DiscretePidController::SetKb(const std::string& value)
{
    m_Kb = value;
}

const std::string& DiscretePidController::GetLimitintegrator() const
{
    return m_Limitintegrator;
}

void DiscretePidController::SetLimitintegrator(const std::string& value)
{
    m_Limitintegrator = value;
}

const std::string& DiscretePidController::GetUpperintegratorsaturationlimit() const
{
    return m_Upperintegratorsaturationlimit;
}

void DiscretePidController::SetUpperintegratorsaturationlimit(const std::string& value)
{
    m_Upperintegratorsaturationlimit = value;
}

const std::string& DiscretePidController::GetLowerintegratorsaturationlimit() const
{
    return m_Lowerintegratorsaturationlimit;
}

void DiscretePidController::SetLowerintegratorsaturationlimit(const std::string& value)
{
    m_Lowerintegratorsaturationlimit = value;
}

const std::string& DiscretePidController::GetRndmeth() const
{
    return m_Rndmeth;
}

void DiscretePidController::SetRndmeth(const std::string& value)
{
    m_Rndmeth = value;
}

const std::string& DiscretePidController::GetSaturateonintegeroverflow() const
{
    return m_Saturateonintegeroverflow;
}

void DiscretePidController::SetSaturateonintegeroverflow(const std::string& value)
{
    m_Saturateonintegeroverflow = value;
}

const std::string& DiscretePidController::GetLockscale() const
{
    return m_Lockscale;
}

void DiscretePidController::SetLockscale(const std::string& value)
{
    m_Lockscale = value;
}

const std::string& DiscretePidController::GetPgainoutdatatypestr() const
{
    return m_Pgainoutdatatypestr;
}

void DiscretePidController::SetPgainoutdatatypestr(const std::string& value)
{
    m_Pgainoutdatatypestr = value;
}

const std::string& DiscretePidController::GetPprodoutdatatypestr() const
{
    return m_Pprodoutdatatypestr;
}

void DiscretePidController::SetPprodoutdatatypestr(const std::string& value)
{
    m_Pprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetPoutmin() const
{
    return m_Poutmin;
}

void DiscretePidController::SetPoutmin(const std::string& value)
{
    m_Poutmin = value;
}

const std::string& DiscretePidController::GetPoutmax() const
{
    return m_Poutmax;
}

void DiscretePidController::SetPoutmax(const std::string& value)
{
    m_Poutmax = value;
}

const std::string& DiscretePidController::GetIgainoutdatatypestr() const
{
    return m_Igainoutdatatypestr;
}

void DiscretePidController::SetIgainoutdatatypestr(const std::string& value)
{
    m_Igainoutdatatypestr = value;
}

const std::string& DiscretePidController::GetIprodoutdatatypestr() const
{
    return m_Iprodoutdatatypestr;
}

void DiscretePidController::SetIprodoutdatatypestr(const std::string& value)
{
    m_Iprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetIoutmin() const
{
    return m_Ioutmin;
}

void DiscretePidController::SetIoutmin(const std::string& value)
{
    m_Ioutmin = value;
}

const std::string& DiscretePidController::GetIoutmax() const
{
    return m_Ioutmax;
}

void DiscretePidController::SetIoutmax(const std::string& value)
{
    m_Ioutmax = value;
}

const std::string& DiscretePidController::GetDgainoutdatatypestr() const
{
    return m_Dgainoutdatatypestr;
}

void DiscretePidController::SetDgainoutdatatypestr(const std::string& value)
{
    m_Dgainoutdatatypestr = value;
}

const std::string& DiscretePidController::GetDprodoutdatatypestr() const
{
    return m_Dprodoutdatatypestr;
}

void DiscretePidController::SetDprodoutdatatypestr(const std::string& value)
{
    m_Dprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetDoutmin() const
{
    return m_Doutmin;
}

void DiscretePidController::SetDoutmin(const std::string& value)
{
    m_Doutmin = value;
}

const std::string& DiscretePidController::GetDoutmax() const
{
    return m_Doutmax;
}

void DiscretePidController::SetDoutmax(const std::string& value)
{
    m_Doutmax = value;
}

const std::string& DiscretePidController::GetNgainoutdatatypestr() const
{
    return m_Ngainoutdatatypestr;
}

void DiscretePidController::SetNgainoutdatatypestr(const std::string& value)
{
    m_Ngainoutdatatypestr = value;
}

const std::string& DiscretePidController::GetNprodoutdatatypestr() const
{
    return m_Nprodoutdatatypestr;
}

void DiscretePidController::SetNprodoutdatatypestr(const std::string& value)
{
    m_Nprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetNoutmin() const
{
    return m_Noutmin;
}

void DiscretePidController::SetNoutmin(const std::string& value)
{
    m_Noutmin = value;
}

const std::string& DiscretePidController::GetNoutmax() const
{
    return m_Noutmax;
}

void DiscretePidController::SetNoutmax(const std::string& value)
{
    m_Noutmax = value;
}

const std::string& DiscretePidController::GetSumoutdatatypestr() const
{
    return m_Sumoutdatatypestr;
}

void DiscretePidController::SetSumoutdatatypestr(const std::string& value)
{
    m_Sumoutdatatypestr = value;
}

const std::string& DiscretePidController::GetSumoutmin() const
{
    return m_Sumoutmin;
}

void DiscretePidController::SetSumoutmin(const std::string& value)
{
    m_Sumoutmin = value;
}

const std::string& DiscretePidController::GetSumoutmax() const
{
    return m_Sumoutmax;
}

void DiscretePidController::SetSumoutmax(const std::string& value)
{
    m_Sumoutmax = value;
}

const std::string& DiscretePidController::GetSaturationoutdatatypestr() const
{
    return m_Saturationoutdatatypestr;
}

void DiscretePidController::SetSaturationoutdatatypestr(const std::string& value)
{
    m_Saturationoutdatatypestr = value;
}

const std::string& DiscretePidController::GetSaturationoutmin() const
{
    return m_Saturationoutmin;
}

void DiscretePidController::SetSaturationoutmin(const std::string& value)
{
    m_Saturationoutmin = value;
}

const std::string& DiscretePidController::GetSaturationoutmax() const
{
    return m_Saturationoutmax;
}

void DiscretePidController::SetSaturationoutmax(const std::string& value)
{
    m_Saturationoutmax = value;
}

const std::string& DiscretePidController::GetPparamdatatypestr() const
{
    return m_Pparamdatatypestr;
}

void DiscretePidController::SetPparamdatatypestr(const std::string& value)
{
    m_Pparamdatatypestr = value;
}

const std::string& DiscretePidController::GetPparammin() const
{
    return m_Pparammin;
}

void DiscretePidController::SetPparammin(const std::string& value)
{
    m_Pparammin = value;
}

const std::string& DiscretePidController::GetPparammax() const
{
    return m_Pparammax;
}

void DiscretePidController::SetPparammax(const std::string& value)
{
    m_Pparammax = value;
}

const std::string& DiscretePidController::GetIparamdatatypestr() const
{
    return m_Iparamdatatypestr;
}

void DiscretePidController::SetIparamdatatypestr(const std::string& value)
{
    m_Iparamdatatypestr = value;
}

const std::string& DiscretePidController::GetIparammin() const
{
    return m_Iparammin;
}

void DiscretePidController::SetIparammin(const std::string& value)
{
    m_Iparammin = value;
}

const std::string& DiscretePidController::GetIparammax() const
{
    return m_Iparammax;
}

void DiscretePidController::SetIparammax(const std::string& value)
{
    m_Iparammax = value;
}

const std::string& DiscretePidController::GetDparamdatatypestr() const
{
    return m_Dparamdatatypestr;
}

void DiscretePidController::SetDparamdatatypestr(const std::string& value)
{
    m_Dparamdatatypestr = value;
}

const std::string& DiscretePidController::GetDparammin() const
{
    return m_Dparammin;
}

void DiscretePidController::SetDparammin(const std::string& value)
{
    m_Dparammin = value;
}

const std::string& DiscretePidController::GetDparammax() const
{
    return m_Dparammax;
}

void DiscretePidController::SetDparammax(const std::string& value)
{
    m_Dparammax = value;
}

const std::string& DiscretePidController::GetNparamdatatypestr() const
{
    return m_Nparamdatatypestr;
}

void DiscretePidController::SetNparamdatatypestr(const std::string& value)
{
    m_Nparamdatatypestr = value;
}

const std::string& DiscretePidController::GetNparammin() const
{
    return m_Nparammin;
}

void DiscretePidController::SetNparammin(const std::string& value)
{
    m_Nparammin = value;
}

const std::string& DiscretePidController::GetNparammax() const
{
    return m_Nparammax;
}

void DiscretePidController::SetNparammax(const std::string& value)
{
    m_Nparammax = value;
}

const std::string& DiscretePidController::GetKbparamdatatypestr() const
{
    return m_Kbparamdatatypestr;
}

void DiscretePidController::SetKbparamdatatypestr(const std::string& value)
{
    m_Kbparamdatatypestr = value;
}

const std::string& DiscretePidController::GetKbparammin() const
{
    return m_Kbparammin;
}

void DiscretePidController::SetKbparammin(const std::string& value)
{
    m_Kbparammin = value;
}

const std::string& DiscretePidController::GetKbparammax() const
{
    return m_Kbparammax;
}

void DiscretePidController::SetKbparammax(const std::string& value)
{
    m_Kbparammax = value;
}

const std::string& DiscretePidController::GetKtparamdatatypestr() const
{
    return m_Ktparamdatatypestr;
}

void DiscretePidController::SetKtparamdatatypestr(const std::string& value)
{
    m_Ktparamdatatypestr = value;
}

const std::string& DiscretePidController::GetKtparammin() const
{
    return m_Ktparammin;
}

void DiscretePidController::SetKtparammin(const std::string& value)
{
    m_Ktparammin = value;
}

const std::string& DiscretePidController::GetKtparammax() const
{
    return m_Ktparammax;
}

void DiscretePidController::SetKtparammax(const std::string& value)
{
    m_Ktparammax = value;
}

const std::string& DiscretePidController::GetKboutdatatypestr() const
{
    return m_Kboutdatatypestr;
}

void DiscretePidController::SetKboutdatatypestr(const std::string& value)
{
    m_Kboutdatatypestr = value;
}

const std::string& DiscretePidController::GetKboutmin() const
{
    return m_Kboutmin;
}

void DiscretePidController::SetKboutmin(const std::string& value)
{
    m_Kboutmin = value;
}

const std::string& DiscretePidController::GetKboutmax() const
{
    return m_Kboutmax;
}

void DiscretePidController::SetKboutmax(const std::string& value)
{
    m_Kboutmax = value;
}

const std::string& DiscretePidController::GetKtoutdatatypestr() const
{
    return m_Ktoutdatatypestr;
}

void DiscretePidController::SetKtoutdatatypestr(const std::string& value)
{
    m_Ktoutdatatypestr = value;
}

const std::string& DiscretePidController::GetKtoutmin() const
{
    return m_Ktoutmin;
}

void DiscretePidController::SetKtoutmin(const std::string& value)
{
    m_Ktoutmin = value;
}

const std::string& DiscretePidController::GetKtoutmax() const
{
    return m_Ktoutmax;
}

void DiscretePidController::SetKtoutmax(const std::string& value)
{
    m_Ktoutmax = value;
}

const std::string& DiscretePidController::GetIntegratoroutdatatypestr() const
{
    return m_Integratoroutdatatypestr;
}

void DiscretePidController::SetIntegratoroutdatatypestr(const std::string& value)
{
    m_Integratoroutdatatypestr = value;
}

const std::string& DiscretePidController::GetIntegratoroutmin() const
{
    return m_Integratoroutmin;
}

void DiscretePidController::SetIntegratoroutmin(const std::string& value)
{
    m_Integratoroutmin = value;
}

const std::string& DiscretePidController::GetIntegratoroutmax() const
{
    return m_Integratoroutmax;
}

void DiscretePidController::SetIntegratoroutmax(const std::string& value)
{
    m_Integratoroutmax = value;
}

const std::string& DiscretePidController::GetFilteroutdatatypestr() const
{
    return m_Filteroutdatatypestr;
}

void DiscretePidController::SetFilteroutdatatypestr(const std::string& value)
{
    m_Filteroutdatatypestr = value;
}

const std::string& DiscretePidController::GetFilteroutmin() const
{
    return m_Filteroutmin;
}

void DiscretePidController::SetFilteroutmin(const std::string& value)
{
    m_Filteroutmin = value;
}

const std::string& DiscretePidController::GetFilteroutmax() const
{
    return m_Filteroutmax;
}

void DiscretePidController::SetFilteroutmax(const std::string& value)
{
    m_Filteroutmax = value;
}

const std::string& DiscretePidController::GetSumi1outdatatypestr() const
{
    return m_Sumi1outdatatypestr;
}

void DiscretePidController::SetSumi1outdatatypestr(const std::string& value)
{
    m_Sumi1outdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi1outmin() const
{
    return m_Sumi1outmin;
}

void DiscretePidController::SetSumi1outmin(const std::string& value)
{
    m_Sumi1outmin = value;
}

const std::string& DiscretePidController::GetSumi1outmax() const
{
    return m_Sumi1outmax;
}

void DiscretePidController::SetSumi1outmax(const std::string& value)
{
    m_Sumi1outmax = value;
}

const std::string& DiscretePidController::GetSumi2outdatatypestr() const
{
    return m_Sumi2outdatatypestr;
}

void DiscretePidController::SetSumi2outdatatypestr(const std::string& value)
{
    m_Sumi2outdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi2outmin() const
{
    return m_Sumi2outmin;
}

void DiscretePidController::SetSumi2outmin(const std::string& value)
{
    m_Sumi2outmin = value;
}

const std::string& DiscretePidController::GetSumi2outmax() const
{
    return m_Sumi2outmax;
}

void DiscretePidController::SetSumi2outmax(const std::string& value)
{
    m_Sumi2outmax = value;
}

const std::string& DiscretePidController::GetSumi3outdatatypestr() const
{
    return m_Sumi3outdatatypestr;
}

void DiscretePidController::SetSumi3outdatatypestr(const std::string& value)
{
    m_Sumi3outdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi3outmin() const
{
    return m_Sumi3outmin;
}

void DiscretePidController::SetSumi3outmin(const std::string& value)
{
    m_Sumi3outmin = value;
}

const std::string& DiscretePidController::GetSumi3outmax() const
{
    return m_Sumi3outmax;
}

void DiscretePidController::SetSumi3outmax(const std::string& value)
{
    m_Sumi3outmax = value;
}

const std::string& DiscretePidController::GetSumi4outdatatypestr() const
{
    return m_Sumi4outdatatypestr;
}

void DiscretePidController::SetSumi4outdatatypestr(const std::string& value)
{
    m_Sumi4outdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi4outmin() const
{
    return m_Sumi4outmin;
}

void DiscretePidController::SetSumi4outmin(const std::string& value)
{
    m_Sumi4outmin = value;
}

const std::string& DiscretePidController::GetSumi4outmax() const
{
    return m_Sumi4outmax;
}

void DiscretePidController::SetSumi4outmax(const std::string& value)
{
    m_Sumi4outmax = value;
}

const std::string& DiscretePidController::GetSumdoutdatatypestr() const
{
    return m_Sumdoutdatatypestr;
}

void DiscretePidController::SetSumdoutdatatypestr(const std::string& value)
{
    m_Sumdoutdatatypestr = value;
}

const std::string& DiscretePidController::GetSumdoutmin() const
{
    return m_Sumdoutmin;
}

void DiscretePidController::SetSumdoutmin(const std::string& value)
{
    m_Sumdoutmin = value;
}

const std::string& DiscretePidController::GetSumdoutmax() const
{
    return m_Sumdoutmax;
}

void DiscretePidController::SetSumdoutmax(const std::string& value)
{
    m_Sumdoutmax = value;
}

const std::string& DiscretePidController::GetSumaccumdatatypestr() const
{
    return m_Sumaccumdatatypestr;
}

void DiscretePidController::SetSumaccumdatatypestr(const std::string& value)
{
    m_Sumaccumdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi1accumdatatypestr() const
{
    return m_Sumi1accumdatatypestr;
}

void DiscretePidController::SetSumi1accumdatatypestr(const std::string& value)
{
    m_Sumi1accumdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi2accumdatatypestr() const
{
    return m_Sumi2accumdatatypestr;
}

void DiscretePidController::SetSumi2accumdatatypestr(const std::string& value)
{
    m_Sumi2accumdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi3accumdatatypestr() const
{
    return m_Sumi3accumdatatypestr;
}

void DiscretePidController::SetSumi3accumdatatypestr(const std::string& value)
{
    m_Sumi3accumdatatypestr = value;
}

const std::string& DiscretePidController::GetSumi4accumdatatypestr() const
{
    return m_Sumi4accumdatatypestr;
}

void DiscretePidController::SetSumi4accumdatatypestr(const std::string& value)
{
    m_Sumi4accumdatatypestr = value;
}

const std::string& DiscretePidController::GetSumdaccumdatatypestr() const
{
    return m_Sumdaccumdatatypestr;
}

void DiscretePidController::SetSumdaccumdatatypestr(const std::string& value)
{
    m_Sumdaccumdatatypestr = value;
}

const std::string& DiscretePidController::GetDifferentiatoroutdatatypestr() const
{
    return m_Differentiatoroutdatatypestr;
}

void DiscretePidController::SetDifferentiatoroutdatatypestr(const std::string& value)
{
    m_Differentiatoroutdatatypestr = value;
}

const std::string& DiscretePidController::GetDifferentiatoroutmin() const
{
    return m_Differentiatoroutmin;
}

void DiscretePidController::SetDifferentiatoroutmin(const std::string& value)
{
    m_Differentiatoroutmin = value;
}

const std::string& DiscretePidController::GetDifferentiatoroutmax() const
{
    return m_Differentiatoroutmax;
}

void DiscretePidController::SetDifferentiatoroutmax(const std::string& value)
{
    m_Differentiatoroutmax = value;
}

const std::string& DiscretePidController::GetFilterdiffnumproductoutputdatatypestr() const
{
    return m_Filterdiffnumproductoutputdatatypestr;
}

void DiscretePidController::SetFilterdiffnumproductoutputdatatypestr(const std::string& value)
{
    m_Filterdiffnumproductoutputdatatypestr = value;
}

const std::string& DiscretePidController::GetFilterdiffdenproductoutputdatatypestr() const
{
    return m_Filterdiffdenproductoutputdatatypestr;
}

void DiscretePidController::SetFilterdiffdenproductoutputdatatypestr(const std::string& value)
{
    m_Filterdiffdenproductoutputdatatypestr = value;
}

const std::string& DiscretePidController::GetFilterdiffnumaccumdatatypestr() const
{
    return m_Filterdiffnumaccumdatatypestr;
}

void DiscretePidController::SetFilterdiffnumaccumdatatypestr(const std::string& value)
{
    m_Filterdiffnumaccumdatatypestr = value;
}

const std::string& DiscretePidController::GetFilterdiffdenaccumdatatypestr() const
{
    return m_Filterdiffdenaccumdatatypestr;
}

void DiscretePidController::SetFilterdiffdenaccumdatatypestr(const std::string& value)
{
    m_Filterdiffdenaccumdatatypestr = value;
}

const std::string& DiscretePidController::GetFilterdiffoutcoefdatatypestr() const
{
    return m_Filterdiffoutcoefdatatypestr;
}

void DiscretePidController::SetFilterdiffoutcoefdatatypestr(const std::string& value)
{
    m_Filterdiffoutcoefdatatypestr = value;
}

const std::string& DiscretePidController::GetFilterdiffoutcoefmin() const
{
    return m_Filterdiffoutcoefmin;
}

void DiscretePidController::SetFilterdiffoutcoefmin(const std::string& value)
{
    m_Filterdiffoutcoefmin = value;
}

const std::string& DiscretePidController::GetFilterdiffoutcoefmax() const
{
    return m_Filterdiffoutcoefmax;
}

void DiscretePidController::SetFilterdiffoutcoefmax(const std::string& value)
{
    m_Filterdiffoutcoefmax = value;
}

const std::string& DiscretePidController::GetReciprocaloutdatatypestr() const
{
    return m_Reciprocaloutdatatypestr;
}

void DiscretePidController::SetReciprocaloutdatatypestr(const std::string& value)
{
    m_Reciprocaloutdatatypestr = value;
}

const std::string& DiscretePidController::GetReciprocaloutmin() const
{
    return m_Reciprocaloutmin;
}

void DiscretePidController::SetReciprocaloutmin(const std::string& value)
{
    m_Reciprocaloutmin = value;
}

const std::string& DiscretePidController::GetReciprocaloutmax() const
{
    return m_Reciprocaloutmax;
}

void DiscretePidController::SetReciprocaloutmax(const std::string& value)
{
    m_Reciprocaloutmax = value;
}

const std::string& DiscretePidController::GetSumdenoutdatatypestr() const
{
    return m_Sumdenoutdatatypestr;
}

void DiscretePidController::SetSumdenoutdatatypestr(const std::string& value)
{
    m_Sumdenoutdatatypestr = value;
}

const std::string& DiscretePidController::GetSumdenoutmin() const
{
    return m_Sumdenoutmin;
}

void DiscretePidController::SetSumdenoutmin(const std::string& value)
{
    m_Sumdenoutmin = value;
}

const std::string& DiscretePidController::GetSumdenoutmax() const
{
    return m_Sumdenoutmax;
}

void DiscretePidController::SetSumdenoutmax(const std::string& value)
{
    m_Sumdenoutmax = value;
}

const std::string& DiscretePidController::GetSumnumoutdatatypestr() const
{
    return m_Sumnumoutdatatypestr;
}

void DiscretePidController::SetSumnumoutdatatypestr(const std::string& value)
{
    m_Sumnumoutdatatypestr = value;
}

const std::string& DiscretePidController::GetSumnumoutmin() const
{
    return m_Sumnumoutmin;
}

void DiscretePidController::SetSumnumoutmin(const std::string& value)
{
    m_Sumnumoutmin = value;
}

const std::string& DiscretePidController::GetSumnumoutmax() const
{
    return m_Sumnumoutmax;
}

void DiscretePidController::SetSumnumoutmax(const std::string& value)
{
    m_Sumnumoutmax = value;
}

const std::string& DiscretePidController::GetSumdenaccumdatatypestr() const
{
    return m_Sumdenaccumdatatypestr;
}

void DiscretePidController::SetSumdenaccumdatatypestr(const std::string& value)
{
    m_Sumdenaccumdatatypestr = value;
}

const std::string& DiscretePidController::GetSumnumaccumdatatypestr() const
{
    return m_Sumnumaccumdatatypestr;
}

void DiscretePidController::SetSumnumaccumdatatypestr(const std::string& value)
{
    m_Sumnumaccumdatatypestr = value;
}

const std::string& DiscretePidController::GetDivideoutdatatypestr() const
{
    return m_Divideoutdatatypestr;
}

void DiscretePidController::SetDivideoutdatatypestr(const std::string& value)
{
    m_Divideoutdatatypestr = value;
}

const std::string& DiscretePidController::GetDivideoutmin() const
{
    return m_Divideoutmin;
}

void DiscretePidController::SetDivideoutmin(const std::string& value)
{
    m_Divideoutmin = value;
}

const std::string& DiscretePidController::GetDivideoutmax() const
{
    return m_Divideoutmax;
}

void DiscretePidController::SetDivideoutmax(const std::string& value)
{
    m_Divideoutmax = value;
}

const std::string& DiscretePidController::GetUdifftsprodoutdatatypestr() const
{
    return m_Udifftsprodoutdatatypestr;
}

void DiscretePidController::SetUdifftsprodoutdatatypestr(const std::string& value)
{
    m_Udifftsprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetUdifftsprodoutmin() const
{
    return m_Udifftsprodoutmin;
}

void DiscretePidController::SetUdifftsprodoutmin(const std::string& value)
{
    m_Udifftsprodoutmin = value;
}

const std::string& DiscretePidController::GetUdifftsprodoutmax() const
{
    return m_Udifftsprodoutmax;
}

void DiscretePidController::SetUdifftsprodoutmax(const std::string& value)
{
    m_Udifftsprodoutmax = value;
}

const std::string& DiscretePidController::GetNtsprodoutdatatypestr() const
{
    return m_Ntsprodoutdatatypestr;
}

void DiscretePidController::SetNtsprodoutdatatypestr(const std::string& value)
{
    m_Ntsprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetNtsprodoutmin() const
{
    return m_Ntsprodoutmin;
}

void DiscretePidController::SetNtsprodoutmin(const std::string& value)
{
    m_Ntsprodoutmin = value;
}

const std::string& DiscretePidController::GetNtsprodoutmax() const
{
    return m_Ntsprodoutmax;
}

void DiscretePidController::SetNtsprodoutmax(const std::string& value)
{
    m_Ntsprodoutmax = value;
}

const std::string& DiscretePidController::GetUintegraltsprodoutdatatypestr() const
{
    return m_Uintegraltsprodoutdatatypestr;
}

void DiscretePidController::SetUintegraltsprodoutdatatypestr(const std::string& value)
{
    m_Uintegraltsprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetUintegraltsprodoutmin() const
{
    return m_Uintegraltsprodoutmin;
}

void DiscretePidController::SetUintegraltsprodoutmin(const std::string& value)
{
    m_Uintegraltsprodoutmin = value;
}

const std::string& DiscretePidController::GetUintegraltsprodoutmax() const
{
    return m_Uintegraltsprodoutmax;
}

void DiscretePidController::SetUintegraltsprodoutmax(const std::string& value)
{
    m_Uintegraltsprodoutmax = value;
}

const std::string& DiscretePidController::GetUngaintsprodoutdatatypestr() const
{
    return m_Ungaintsprodoutdatatypestr;
}

void DiscretePidController::SetUngaintsprodoutdatatypestr(const std::string& value)
{
    m_Ungaintsprodoutdatatypestr = value;
}

const std::string& DiscretePidController::GetUngaintsprodoutmin() const
{
    return m_Ungaintsprodoutmin;
}

void DiscretePidController::SetUngaintsprodoutmin(const std::string& value)
{
    m_Ungaintsprodoutmin = value;
}

const std::string& DiscretePidController::GetUngaintsprodoutmax() const
{
    return m_Ungaintsprodoutmax;
}

void DiscretePidController::SetUngaintsprodoutmax(const std::string& value)
{
    m_Ungaintsprodoutmax = value;
}

const std::string& DiscretePidController::GetClampingzerooutdatatypestr() const
{
    return m_Clampingzerooutdatatypestr;
}

void DiscretePidController::SetClampingzerooutdatatypestr(const std::string& value)
{
    m_Clampingzerooutdatatypestr = value;
}

const std::string& DiscretePidController::GetClampingzerooutmin() const
{
    return m_Clampingzerooutmin;
}

void DiscretePidController::SetClampingzerooutmin(const std::string& value)
{
    m_Clampingzerooutmin = value;
}

const std::string& DiscretePidController::GetClampingzerooutmax() const
{
    return m_Clampingzerooutmax;
}

void DiscretePidController::SetClampingzerooutmax(const std::string& value)
{
    m_Clampingzerooutmax = value;
}

const std::string& DiscretePidController::GetFilterdenconstantoutdatatypestr() const
{
    return m_Filterdenconstantoutdatatypestr;
}

void DiscretePidController::SetFilterdenconstantoutdatatypestr(const std::string& value)
{
    m_Filterdenconstantoutdatatypestr = value;
}

const std::string& DiscretePidController::GetFilterdenconstantoutmin() const
{
    return m_Filterdenconstantoutmin;
}

void DiscretePidController::SetFilterdenconstantoutmin(const std::string& value)
{
    m_Filterdenconstantoutmin = value;
}

const std::string& DiscretePidController::GetFilterdenconstantoutmax() const
{
    return m_Filterdenconstantoutmax;
}

void DiscretePidController::SetFilterdenconstantoutmax(const std::string& value)
{
    m_Filterdenconstantoutmax = value;
}

const std::string& DiscretePidController::GetPcopyoutdatatypestr() const
{
    return m_Pcopyoutdatatypestr;
}

void DiscretePidController::SetPcopyoutdatatypestr(const std::string& value)
{
    m_Pcopyoutdatatypestr = value;
}

const std::string& DiscretePidController::GetPcopyoutmin() const
{
    return m_Pcopyoutmin;
}

void DiscretePidController::SetPcopyoutmin(const std::string& value)
{
    m_Pcopyoutmin = value;
}

const std::string& DiscretePidController::GetPcopyoutmax() const
{
    return m_Pcopyoutmax;
}

void DiscretePidController::SetPcopyoutmax(const std::string& value)
{
    m_Pcopyoutmax = value;
}

const std::string& DiscretePidController::GetNcopyoutdatatypestr() const
{
    return m_Ncopyoutdatatypestr;
}

void DiscretePidController::SetNcopyoutdatatypestr(const std::string& value)
{
    m_Ncopyoutdatatypestr = value;
}

const std::string& DiscretePidController::GetNcopyoutmin() const
{
    return m_Ncopyoutmin;
}

void DiscretePidController::SetNcopyoutmin(const std::string& value)
{
    m_Ncopyoutmin = value;
}

const std::string& DiscretePidController::GetNcopyoutmax() const
{
    return m_Ncopyoutmax;
}

void DiscretePidController::SetNcopyoutmax(const std::string& value)
{
    m_Ncopyoutmax = value;
}

const std::string& DiscretePidController::GetIntegratorcontinuousstateattributes() const
{
    return m_Integratorcontinuousstateattributes;
}

void DiscretePidController::SetIntegratorcontinuousstateattributes(const std::string& value)
{
    m_Integratorcontinuousstateattributes = value;
}

const std::string& DiscretePidController::GetIntegratorstateidentifier() const
{
    return m_Integratorstateidentifier;
}

void DiscretePidController::SetIntegratorstateidentifier(const std::string& value)
{
    m_Integratorstateidentifier = value;
}

const std::string& DiscretePidController::GetIntegratorstatemustresolvetosignalobject() const
{
    return m_Integratorstatemustresolvetosignalobject;
}

void DiscretePidController::SetIntegratorstatemustresolvetosignalobject(const std::string& value)
{
    m_Integratorstatemustresolvetosignalobject = value;
}

const std::string& DiscretePidController::GetFiltercontinuousstateattributes() const
{
    return m_Filtercontinuousstateattributes;
}

void DiscretePidController::SetFiltercontinuousstateattributes(const std::string& value)
{
    m_Filtercontinuousstateattributes = value;
}

const std::string& DiscretePidController::GetFilterstateidentifier() const
{
    return m_Filterstateidentifier;
}

void DiscretePidController::SetFilterstateidentifier(const std::string& value)
{
    m_Filterstateidentifier = value;
}

const std::string& DiscretePidController::GetFilterstatemustresolvetosignalobject() const
{
    return m_Filterstatemustresolvetosignalobject;
}

void DiscretePidController::SetFilterstatemustresolvetosignalobject(const std::string& value)
{
    m_Filterstatemustresolvetosignalobject = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
