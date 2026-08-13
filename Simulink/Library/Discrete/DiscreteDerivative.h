// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DISCRETEDERIVATIVE_H
#define DISCRETEDERIVATIVE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DiscreteDerivative : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DiscreteDerivative();

  /** Default Destructor */
  ~DiscreteDerivative();

  const std::string& GetGainval() const;
  void SetGainval(const std::string& value);

  const std::string& GetIcprevscaledinput() const;
  void SetIcprevscaledinput(const std::string& value);

  const std::string& GetInputprocessing() const;
  void SetInputprocessing(const std::string& value);

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

  const std::string& GetDosatur() const;
  void SetDosatur(const std::string& value);

private:

  std::string m_Gainval;

  std::string m_Icprevscaledinput;

  std::string m_Inputprocessing;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Dosatur;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DISCRETEDERIVATIVE_H
