// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RISING_H
#define RISING_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Rising : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Rising();

  /** Default Destructor */
  ~Rising();

  const std::string& GetGain() const;
  void SetGain(const std::string& value);

  const std::string& GetMultiplication() const;
  void SetMultiplication(const std::string& value);

  const std::string& GetParammin() const;
  void SetParammin(const std::string& value);

  const std::string& GetParammax() const;
  void SetParammax(const std::string& value);

  const std::string& GetParamdatatypestr() const;
  void SetParamdatatypestr(const std::string& value);

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

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Gain;

  std::string m_Multiplication;

  std::string m_Parammin;

  std::string m_Parammax;

  std::string m_Paramdatatypestr;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RISING_H
