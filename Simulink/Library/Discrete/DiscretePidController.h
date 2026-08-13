// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETEPIDCONTROLLER_H
#define DISCRETEPIDCONTROLLER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscretePidController : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DiscretePidController();

  /** Default Destructor */
  ~DiscretePidController();

  const std::string& GetController() const;
  void SetController(const std::string& value);

  const std::string& GetForm() const;
  void SetForm(const std::string& value);

  const std::string& GetTimedomain() const;
  void SetTimedomain(const std::string& value);

  const std::string& GetUseexternalts() const;
  void SetUseexternalts(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetIntegratormethod() const;
  void SetIntegratormethod(const std::string& value);

  const std::string& GetFiltermethod() const;
  void SetFiltermethod(const std::string& value);

  const std::string& GetControllerparameterssource() const;
  void SetControllerparameterssource(const std::string& value);

  const std::string& GetP() const;
  void SetP(const std::string& value);

  const std::string& GetI() const;
  void SetI(const std::string& value);

  const std::string& GetUsekits() const;
  void SetUsekits(const std::string& value);

  const std::string& GetD() const;
  void SetD(const std::string& value);

  const std::string& GetUseexternalderivativesource() const;
  void SetUseexternalderivativesource(const std::string& value);

  const std::string& GetN() const;
  void SetN(const std::string& value);

  const std::string& GetUsefilter() const;
  void SetUsefilter(const std::string& value);

  const std::string& GetTunerselectoption() const;
  void SetTunerselectoption(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetInitialconditionsource() const;
  void SetInitialconditionsource(const std::string& value);

  const std::string& GetInitialconditionforintegrator() const;
  void SetInitialconditionforintegrator(const std::string& value);

  const std::string& GetInitialconditionforfilter() const;
  void SetInitialconditionforfilter(const std::string& value);

  const std::string& GetDifferentiatoricprevscaledinput() const;
  void SetDifferentiatoricprevscaledinput(const std::string& value);

  const std::string& GetExternalreset() const;
  void SetExternalreset(const std::string& value);

  const std::string& GetIgnorelimit() const;
  void SetIgnorelimit(const std::string& value);

  const std::string& GetTrackingmode() const;
  void SetTrackingmode(const std::string& value);

  const std::string& GetKt() const;
  void SetKt(const std::string& value);

  const std::string& GetLimitoutput() const;
  void SetLimitoutput(const std::string& value);

  const std::string& GetSatlimitssource() const;
  void SetSatlimitssource(const std::string& value);

  const std::string& GetUppersaturationlimit() const;
  void SetUppersaturationlimit(const std::string& value);

  const std::string& GetLowersaturationlimit() const;
  void SetLowersaturationlimit(const std::string& value);

  const std::string& GetLinearizeasgain() const;
  void SetLinearizeasgain(const std::string& value);

  const std::string& GetAntiwindupmode() const;
  void SetAntiwindupmode(const std::string& value);

  const std::string& GetKb() const;
  void SetKb(const std::string& value);

  const std::string& GetLimitintegrator() const;
  void SetLimitintegrator(const std::string& value);

  const std::string& GetUpperintegratorsaturationlimit() const;
  void SetUpperintegratorsaturationlimit(const std::string& value);

  const std::string& GetLowerintegratorsaturationlimit() const;
  void SetLowerintegratorsaturationlimit(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetPgainoutdatatypestr() const;
  void SetPgainoutdatatypestr(const std::string& value);

  const std::string& GetPprodoutdatatypestr() const;
  void SetPprodoutdatatypestr(const std::string& value);

  const std::string& GetPoutmin() const;
  void SetPoutmin(const std::string& value);

  const std::string& GetPoutmax() const;
  void SetPoutmax(const std::string& value);

  const std::string& GetIgainoutdatatypestr() const;
  void SetIgainoutdatatypestr(const std::string& value);

  const std::string& GetIprodoutdatatypestr() const;
  void SetIprodoutdatatypestr(const std::string& value);

  const std::string& GetIoutmin() const;
  void SetIoutmin(const std::string& value);

  const std::string& GetIoutmax() const;
  void SetIoutmax(const std::string& value);

  const std::string& GetDgainoutdatatypestr() const;
  void SetDgainoutdatatypestr(const std::string& value);

  const std::string& GetDprodoutdatatypestr() const;
  void SetDprodoutdatatypestr(const std::string& value);

  const std::string& GetDoutmin() const;
  void SetDoutmin(const std::string& value);

  const std::string& GetDoutmax() const;
  void SetDoutmax(const std::string& value);

  const std::string& GetNgainoutdatatypestr() const;
  void SetNgainoutdatatypestr(const std::string& value);

  const std::string& GetNprodoutdatatypestr() const;
  void SetNprodoutdatatypestr(const std::string& value);

  const std::string& GetNoutmin() const;
  void SetNoutmin(const std::string& value);

  const std::string& GetNoutmax() const;
  void SetNoutmax(const std::string& value);

  const std::string& GetSumoutdatatypestr() const;
  void SetSumoutdatatypestr(const std::string& value);

  const std::string& GetSumoutmin() const;
  void SetSumoutmin(const std::string& value);

  const std::string& GetSumoutmax() const;
  void SetSumoutmax(const std::string& value);

  const std::string& GetSaturationoutdatatypestr() const;
  void SetSaturationoutdatatypestr(const std::string& value);

  const std::string& GetSaturationoutmin() const;
  void SetSaturationoutmin(const std::string& value);

  const std::string& GetSaturationoutmax() const;
  void SetSaturationoutmax(const std::string& value);

  const std::string& GetPparamdatatypestr() const;
  void SetPparamdatatypestr(const std::string& value);

  const std::string& GetPparammin() const;
  void SetPparammin(const std::string& value);

  const std::string& GetPparammax() const;
  void SetPparammax(const std::string& value);

  const std::string& GetIparamdatatypestr() const;
  void SetIparamdatatypestr(const std::string& value);

  const std::string& GetIparammin() const;
  void SetIparammin(const std::string& value);

  const std::string& GetIparammax() const;
  void SetIparammax(const std::string& value);

  const std::string& GetDparamdatatypestr() const;
  void SetDparamdatatypestr(const std::string& value);

  const std::string& GetDparammin() const;
  void SetDparammin(const std::string& value);

  const std::string& GetDparammax() const;
  void SetDparammax(const std::string& value);

  const std::string& GetNparamdatatypestr() const;
  void SetNparamdatatypestr(const std::string& value);

  const std::string& GetNparammin() const;
  void SetNparammin(const std::string& value);

  const std::string& GetNparammax() const;
  void SetNparammax(const std::string& value);

  const std::string& GetKbparamdatatypestr() const;
  void SetKbparamdatatypestr(const std::string& value);

  const std::string& GetKbparammin() const;
  void SetKbparammin(const std::string& value);

  const std::string& GetKbparammax() const;
  void SetKbparammax(const std::string& value);

  const std::string& GetKtparamdatatypestr() const;
  void SetKtparamdatatypestr(const std::string& value);

  const std::string& GetKtparammin() const;
  void SetKtparammin(const std::string& value);

  const std::string& GetKtparammax() const;
  void SetKtparammax(const std::string& value);

  const std::string& GetKboutdatatypestr() const;
  void SetKboutdatatypestr(const std::string& value);

  const std::string& GetKboutmin() const;
  void SetKboutmin(const std::string& value);

  const std::string& GetKboutmax() const;
  void SetKboutmax(const std::string& value);

  const std::string& GetKtoutdatatypestr() const;
  void SetKtoutdatatypestr(const std::string& value);

  const std::string& GetKtoutmin() const;
  void SetKtoutmin(const std::string& value);

  const std::string& GetKtoutmax() const;
  void SetKtoutmax(const std::string& value);

  const std::string& GetIntegratoroutdatatypestr() const;
  void SetIntegratoroutdatatypestr(const std::string& value);

  const std::string& GetIntegratoroutmin() const;
  void SetIntegratoroutmin(const std::string& value);

  const std::string& GetIntegratoroutmax() const;
  void SetIntegratoroutmax(const std::string& value);

  const std::string& GetFilteroutdatatypestr() const;
  void SetFilteroutdatatypestr(const std::string& value);

  const std::string& GetFilteroutmin() const;
  void SetFilteroutmin(const std::string& value);

  const std::string& GetFilteroutmax() const;
  void SetFilteroutmax(const std::string& value);

  const std::string& GetSumi1outdatatypestr() const;
  void SetSumi1outdatatypestr(const std::string& value);

  const std::string& GetSumi1outmin() const;
  void SetSumi1outmin(const std::string& value);

  const std::string& GetSumi1outmax() const;
  void SetSumi1outmax(const std::string& value);

  const std::string& GetSumi2outdatatypestr() const;
  void SetSumi2outdatatypestr(const std::string& value);

  const std::string& GetSumi2outmin() const;
  void SetSumi2outmin(const std::string& value);

  const std::string& GetSumi2outmax() const;
  void SetSumi2outmax(const std::string& value);

  const std::string& GetSumi3outdatatypestr() const;
  void SetSumi3outdatatypestr(const std::string& value);

  const std::string& GetSumi3outmin() const;
  void SetSumi3outmin(const std::string& value);

  const std::string& GetSumi3outmax() const;
  void SetSumi3outmax(const std::string& value);

  const std::string& GetSumi4outdatatypestr() const;
  void SetSumi4outdatatypestr(const std::string& value);

  const std::string& GetSumi4outmin() const;
  void SetSumi4outmin(const std::string& value);

  const std::string& GetSumi4outmax() const;
  void SetSumi4outmax(const std::string& value);

  const std::string& GetSumdoutdatatypestr() const;
  void SetSumdoutdatatypestr(const std::string& value);

  const std::string& GetSumdoutmin() const;
  void SetSumdoutmin(const std::string& value);

  const std::string& GetSumdoutmax() const;
  void SetSumdoutmax(const std::string& value);

  const std::string& GetSumaccumdatatypestr() const;
  void SetSumaccumdatatypestr(const std::string& value);

  const std::string& GetSumi1accumdatatypestr() const;
  void SetSumi1accumdatatypestr(const std::string& value);

  const std::string& GetSumi2accumdatatypestr() const;
  void SetSumi2accumdatatypestr(const std::string& value);

  const std::string& GetSumi3accumdatatypestr() const;
  void SetSumi3accumdatatypestr(const std::string& value);

  const std::string& GetSumi4accumdatatypestr() const;
  void SetSumi4accumdatatypestr(const std::string& value);

  const std::string& GetSumdaccumdatatypestr() const;
  void SetSumdaccumdatatypestr(const std::string& value);

  const std::string& GetDifferentiatoroutdatatypestr() const;
  void SetDifferentiatoroutdatatypestr(const std::string& value);

  const std::string& GetDifferentiatoroutmin() const;
  void SetDifferentiatoroutmin(const std::string& value);

  const std::string& GetDifferentiatoroutmax() const;
  void SetDifferentiatoroutmax(const std::string& value);

  const std::string& GetFilterdiffnumproductoutputdatatypestr() const;
  void SetFilterdiffnumproductoutputdatatypestr(const std::string& value);

  const std::string& GetFilterdiffdenproductoutputdatatypestr() const;
  void SetFilterdiffdenproductoutputdatatypestr(const std::string& value);

  const std::string& GetFilterdiffnumaccumdatatypestr() const;
  void SetFilterdiffnumaccumdatatypestr(const std::string& value);

  const std::string& GetFilterdiffdenaccumdatatypestr() const;
  void SetFilterdiffdenaccumdatatypestr(const std::string& value);

  const std::string& GetFilterdiffoutcoefdatatypestr() const;
  void SetFilterdiffoutcoefdatatypestr(const std::string& value);

  const std::string& GetFilterdiffoutcoefmin() const;
  void SetFilterdiffoutcoefmin(const std::string& value);

  const std::string& GetFilterdiffoutcoefmax() const;
  void SetFilterdiffoutcoefmax(const std::string& value);

  const std::string& GetReciprocaloutdatatypestr() const;
  void SetReciprocaloutdatatypestr(const std::string& value);

  const std::string& GetReciprocaloutmin() const;
  void SetReciprocaloutmin(const std::string& value);

  const std::string& GetReciprocaloutmax() const;
  void SetReciprocaloutmax(const std::string& value);

  const std::string& GetSumdenoutdatatypestr() const;
  void SetSumdenoutdatatypestr(const std::string& value);

  const std::string& GetSumdenoutmin() const;
  void SetSumdenoutmin(const std::string& value);

  const std::string& GetSumdenoutmax() const;
  void SetSumdenoutmax(const std::string& value);

  const std::string& GetSumnumoutdatatypestr() const;
  void SetSumnumoutdatatypestr(const std::string& value);

  const std::string& GetSumnumoutmin() const;
  void SetSumnumoutmin(const std::string& value);

  const std::string& GetSumnumoutmax() const;
  void SetSumnumoutmax(const std::string& value);

  const std::string& GetSumdenaccumdatatypestr() const;
  void SetSumdenaccumdatatypestr(const std::string& value);

  const std::string& GetSumnumaccumdatatypestr() const;
  void SetSumnumaccumdatatypestr(const std::string& value);

  const std::string& GetDivideoutdatatypestr() const;
  void SetDivideoutdatatypestr(const std::string& value);

  const std::string& GetDivideoutmin() const;
  void SetDivideoutmin(const std::string& value);

  const std::string& GetDivideoutmax() const;
  void SetDivideoutmax(const std::string& value);

  const std::string& GetUdifftsprodoutdatatypestr() const;
  void SetUdifftsprodoutdatatypestr(const std::string& value);

  const std::string& GetUdifftsprodoutmin() const;
  void SetUdifftsprodoutmin(const std::string& value);

  const std::string& GetUdifftsprodoutmax() const;
  void SetUdifftsprodoutmax(const std::string& value);

  const std::string& GetNtsprodoutdatatypestr() const;
  void SetNtsprodoutdatatypestr(const std::string& value);

  const std::string& GetNtsprodoutmin() const;
  void SetNtsprodoutmin(const std::string& value);

  const std::string& GetNtsprodoutmax() const;
  void SetNtsprodoutmax(const std::string& value);

  const std::string& GetUintegraltsprodoutdatatypestr() const;
  void SetUintegraltsprodoutdatatypestr(const std::string& value);

  const std::string& GetUintegraltsprodoutmin() const;
  void SetUintegraltsprodoutmin(const std::string& value);

  const std::string& GetUintegraltsprodoutmax() const;
  void SetUintegraltsprodoutmax(const std::string& value);

  const std::string& GetUngaintsprodoutdatatypestr() const;
  void SetUngaintsprodoutdatatypestr(const std::string& value);

  const std::string& GetUngaintsprodoutmin() const;
  void SetUngaintsprodoutmin(const std::string& value);

  const std::string& GetUngaintsprodoutmax() const;
  void SetUngaintsprodoutmax(const std::string& value);

  const std::string& GetClampingzerooutdatatypestr() const;
  void SetClampingzerooutdatatypestr(const std::string& value);

  const std::string& GetClampingzerooutmin() const;
  void SetClampingzerooutmin(const std::string& value);

  const std::string& GetClampingzerooutmax() const;
  void SetClampingzerooutmax(const std::string& value);

  const std::string& GetFilterdenconstantoutdatatypestr() const;
  void SetFilterdenconstantoutdatatypestr(const std::string& value);

  const std::string& GetFilterdenconstantoutmin() const;
  void SetFilterdenconstantoutmin(const std::string& value);

  const std::string& GetFilterdenconstantoutmax() const;
  void SetFilterdenconstantoutmax(const std::string& value);

  const std::string& GetPcopyoutdatatypestr() const;
  void SetPcopyoutdatatypestr(const std::string& value);

  const std::string& GetPcopyoutmin() const;
  void SetPcopyoutmin(const std::string& value);

  const std::string& GetPcopyoutmax() const;
  void SetPcopyoutmax(const std::string& value);

  const std::string& GetNcopyoutdatatypestr() const;
  void SetNcopyoutdatatypestr(const std::string& value);

  const std::string& GetNcopyoutmin() const;
  void SetNcopyoutmin(const std::string& value);

  const std::string& GetNcopyoutmax() const;
  void SetNcopyoutmax(const std::string& value);

  const std::string& GetIntegratorcontinuousstateattributes() const;
  void SetIntegratorcontinuousstateattributes(const std::string& value);

  const std::string& GetIntegratorstateidentifier() const;
  void SetIntegratorstateidentifier(const std::string& value);

  const std::string& GetIntegratorstatemustresolvetosignalobject() const;
  void SetIntegratorstatemustresolvetosignalobject(const std::string& value);

  const std::string& GetFiltercontinuousstateattributes() const;
  void SetFiltercontinuousstateattributes(const std::string& value);

  const std::string& GetFilterstateidentifier() const;
  void SetFilterstateidentifier(const std::string& value);

  const std::string& GetFilterstatemustresolvetosignalobject() const;
  void SetFilterstatemustresolvetosignalobject(const std::string& value);

private:

  std::string m_Controller;

  std::string m_Form;

  std::string m_Timedomain;

  std::string m_Useexternalts;

  std::string m_Sampletime;

  std::string m_Integratormethod;

  std::string m_Filtermethod;

  std::string m_Controllerparameterssource;

  std::string m_P;

  std::string m_I;

  std::string m_Usekits;

  std::string m_D;

  std::string m_Useexternalderivativesource;

  std::string m_N;

  std::string m_Usefilter;

  std::string m_Tunerselectoption;

  std::string m_Zerocross;

  std::string m_Initialconditionsource;

  std::string m_Initialconditionforintegrator;

  std::string m_Initialconditionforfilter;

  std::string m_Differentiatoricprevscaledinput;

  std::string m_Externalreset;

  std::string m_Ignorelimit;

  std::string m_Trackingmode;

  std::string m_Kt;

  std::string m_Limitoutput;

  std::string m_Satlimitssource;

  std::string m_Uppersaturationlimit;

  std::string m_Lowersaturationlimit;

  std::string m_Linearizeasgain;

  std::string m_Antiwindupmode;

  std::string m_Kb;

  std::string m_Limitintegrator;

  std::string m_Upperintegratorsaturationlimit;

  std::string m_Lowerintegratorsaturationlimit;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Lockscale;

  std::string m_Pgainoutdatatypestr;

  std::string m_Pprodoutdatatypestr;

  std::string m_Poutmin;

  std::string m_Poutmax;

  std::string m_Igainoutdatatypestr;

  std::string m_Iprodoutdatatypestr;

  std::string m_Ioutmin;

  std::string m_Ioutmax;

  std::string m_Dgainoutdatatypestr;

  std::string m_Dprodoutdatatypestr;

  std::string m_Doutmin;

  std::string m_Doutmax;

  std::string m_Ngainoutdatatypestr;

  std::string m_Nprodoutdatatypestr;

  std::string m_Noutmin;

  std::string m_Noutmax;

  std::string m_Sumoutdatatypestr;

  std::string m_Sumoutmin;

  std::string m_Sumoutmax;

  std::string m_Saturationoutdatatypestr;

  std::string m_Saturationoutmin;

  std::string m_Saturationoutmax;

  std::string m_Pparamdatatypestr;

  std::string m_Pparammin;

  std::string m_Pparammax;

  std::string m_Iparamdatatypestr;

  std::string m_Iparammin;

  std::string m_Iparammax;

  std::string m_Dparamdatatypestr;

  std::string m_Dparammin;

  std::string m_Dparammax;

  std::string m_Nparamdatatypestr;

  std::string m_Nparammin;

  std::string m_Nparammax;

  std::string m_Kbparamdatatypestr;

  std::string m_Kbparammin;

  std::string m_Kbparammax;

  std::string m_Ktparamdatatypestr;

  std::string m_Ktparammin;

  std::string m_Ktparammax;

  std::string m_Kboutdatatypestr;

  std::string m_Kboutmin;

  std::string m_Kboutmax;

  std::string m_Ktoutdatatypestr;

  std::string m_Ktoutmin;

  std::string m_Ktoutmax;

  std::string m_Integratoroutdatatypestr;

  std::string m_Integratoroutmin;

  std::string m_Integratoroutmax;

  std::string m_Filteroutdatatypestr;

  std::string m_Filteroutmin;

  std::string m_Filteroutmax;

  std::string m_Sumi1outdatatypestr;

  std::string m_Sumi1outmin;

  std::string m_Sumi1outmax;

  std::string m_Sumi2outdatatypestr;

  std::string m_Sumi2outmin;

  std::string m_Sumi2outmax;

  std::string m_Sumi3outdatatypestr;

  std::string m_Sumi3outmin;

  std::string m_Sumi3outmax;

  std::string m_Sumi4outdatatypestr;

  std::string m_Sumi4outmin;

  std::string m_Sumi4outmax;

  std::string m_Sumdoutdatatypestr;

  std::string m_Sumdoutmin;

  std::string m_Sumdoutmax;

  std::string m_Sumaccumdatatypestr;

  std::string m_Sumi1accumdatatypestr;

  std::string m_Sumi2accumdatatypestr;

  std::string m_Sumi3accumdatatypestr;

  std::string m_Sumi4accumdatatypestr;

  std::string m_Sumdaccumdatatypestr;

  std::string m_Differentiatoroutdatatypestr;

  std::string m_Differentiatoroutmin;

  std::string m_Differentiatoroutmax;

  std::string m_Filterdiffnumproductoutputdatatypestr;

  std::string m_Filterdiffdenproductoutputdatatypestr;

  std::string m_Filterdiffnumaccumdatatypestr;

  std::string m_Filterdiffdenaccumdatatypestr;

  std::string m_Filterdiffoutcoefdatatypestr;

  std::string m_Filterdiffoutcoefmin;

  std::string m_Filterdiffoutcoefmax;

  std::string m_Reciprocaloutdatatypestr;

  std::string m_Reciprocaloutmin;

  std::string m_Reciprocaloutmax;

  std::string m_Sumdenoutdatatypestr;

  std::string m_Sumdenoutmin;

  std::string m_Sumdenoutmax;

  std::string m_Sumnumoutdatatypestr;

  std::string m_Sumnumoutmin;

  std::string m_Sumnumoutmax;

  std::string m_Sumdenaccumdatatypestr;

  std::string m_Sumnumaccumdatatypestr;

  std::string m_Divideoutdatatypestr;

  std::string m_Divideoutmin;

  std::string m_Divideoutmax;

  std::string m_Udifftsprodoutdatatypestr;

  std::string m_Udifftsprodoutmin;

  std::string m_Udifftsprodoutmax;

  std::string m_Ntsprodoutdatatypestr;

  std::string m_Ntsprodoutmin;

  std::string m_Ntsprodoutmax;

  std::string m_Uintegraltsprodoutdatatypestr;

  std::string m_Uintegraltsprodoutmin;

  std::string m_Uintegraltsprodoutmax;

  std::string m_Ungaintsprodoutdatatypestr;

  std::string m_Ungaintsprodoutmin;

  std::string m_Ungaintsprodoutmax;

  std::string m_Clampingzerooutdatatypestr;

  std::string m_Clampingzerooutmin;

  std::string m_Clampingzerooutmax;

  std::string m_Filterdenconstantoutdatatypestr;

  std::string m_Filterdenconstantoutmin;

  std::string m_Filterdenconstantoutmax;

  std::string m_Pcopyoutdatatypestr;

  std::string m_Pcopyoutmin;

  std::string m_Pcopyoutmax;

  std::string m_Ncopyoutdatatypestr;

  std::string m_Ncopyoutmin;

  std::string m_Ncopyoutmax;

  std::string m_Integratorcontinuousstateattributes;

  std::string m_Integratorstateidentifier;

  std::string m_Integratorstatemustresolvetosignalobject;

  std::string m_Filtercontinuousstateattributes;

  std::string m_Filterstateidentifier;

  std::string m_Filterstatemustresolvetosignalobject;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISCRETEPIDCONTROLLER_H
