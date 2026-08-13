// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTEGRATOR_H
#define INTEGRATOR_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Integrator : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Integrator();

  /** Default Destructor */
  ~Integrator();

  const std::string& GetExternalreset() const;
  void SetExternalreset(const std::string& value);

  const std::string& GetInitialconditionsource() const;
  void SetInitialconditionsource(const std::string& value);

  const std::string& GetInitialcondition() const;
  void SetInitialcondition(const std::string& value);

  const std::string& GetLimitoutput() const;
  void SetLimitoutput(const std::string& value);

  const std::string& GetUppersaturationlimit() const;
  void SetUppersaturationlimit(const std::string& value);

  const std::string& GetLowersaturationlimit() const;
  void SetLowersaturationlimit(const std::string& value);

  const std::string& GetWrapstate() const;
  void SetWrapstate(const std::string& value);

  const std::string& GetWrappedstateuppervalue() const;
  void SetWrappedstateuppervalue(const std::string& value);

  const std::string& GetWrappedstatelowervalue() const;
  void SetWrappedstatelowervalue(const std::string& value);

  const std::string& GetShowsaturationport() const;
  void SetShowsaturationport(const std::string& value);

  const std::string& GetShowstateport() const;
  void SetShowstateport(const std::string& value);

  const std::string& GetAbsolutetolerance() const;
  void SetAbsolutetolerance(const std::string& value);

  const std::string& GetIgnorelimit() const;
  void SetIgnorelimit(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetContinuousstateattributes() const;
  void SetContinuousstateattributes(const std::string& value);

private:

  std::string m_Externalreset;

  std::string m_Initialconditionsource;

  std::string m_Initialcondition;

  std::string m_Limitoutput;

  std::string m_Uppersaturationlimit;

  std::string m_Lowersaturationlimit;

  std::string m_Wrapstate;

  std::string m_Wrappedstateuppervalue;

  std::string m_Wrappedstatelowervalue;

  std::string m_Showsaturationport;

  std::string m_Showstateport;

  std::string m_Absolutetolerance;

  std::string m_Ignorelimit;

  std::string m_Zerocross;

  std::string m_Continuousstateattributes;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INTEGRATOR_H
