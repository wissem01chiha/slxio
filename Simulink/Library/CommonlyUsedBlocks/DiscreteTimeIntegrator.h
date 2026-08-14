// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETETIMEINTEGRATOR_H
#define DISCRETETIMEINTEGRATOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteTimeIntegrator
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  DiscreteTimeIntegrator();

  /** Default Destructor */
  ~DiscreteTimeIntegrator();

  const std::string& GetIntegratormethod() const;
  void SetIntegratormethod(const std::string& value);

  const std::string& GetGainval() const;
  void SetGainval(const std::string& value);

  const std::string& GetExternalreset() const;
  void SetExternalreset(const std::string& value);

  const std::string& GetInitialconditionsource() const;
  void SetInitialconditionsource(const std::string& value);

  const std::string& GetInitialcondition() const;
  void SetInitialcondition(const std::string& value);

  const std::string& GetInitialconditionsetting() const;
  void SetInitialconditionsetting(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

  const std::string& GetLimitoutput() const;
  void SetLimitoutput(const std::string& value);

  const std::string& GetUppersaturationlimit() const;
  void SetUppersaturationlimit(const std::string& value);

  const std::string& GetLowersaturationlimit() const;
  void SetLowersaturationlimit(const std::string& value);

  const std::string& GetShowsaturationport() const;
  void SetShowsaturationport(const std::string& value);

  const std::string& GetShowstateport() const;
  void SetShowstateport(const std::string& value);

  const std::string& GetIgnorelimit() const;
  void SetIgnorelimit(const std::string& value);

  const std::string& GetStatename() const;
  void SetStatename(const std::string& value);

  const std::string& GetStatemustresolvetosignalobject() const;
  void SetStatemustresolvetosignalobject(const std::string& value);

  const std::string& GetStatestorageclass() const;
  void SetStatestorageclass(const std::string& value);

  const std::string& GetRtwstatestoragetypequalifier() const;
  void SetRtwstatestoragetypequalifier(const std::string& value);

  const std::string& GetStatesignalobject() const;
  void SetStatesignalobject(const std::string& value);

private:
  std::string m_Integratormethod;

  std::string m_Gainval;

  std::string m_Externalreset;

  std::string m_Initialconditionsource;

  std::string m_Initialcondition;

  std::string m_Initialconditionsetting;

  std::string m_Sampletime;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Limitoutput;

  std::string m_Uppersaturationlimit;

  std::string m_Lowersaturationlimit;

  std::string m_Showsaturationport;

  std::string m_Showstateport;

  std::string m_Ignorelimit;

  std::string m_Statename;

  std::string m_Statemustresolvetosignalobject;

  std::string m_Statestorageclass;

  std::string m_Rtwstatestoragetypequalifier;

  std::string m_Statesignalobject;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISCRETETIMEINTEGRATOR_H
