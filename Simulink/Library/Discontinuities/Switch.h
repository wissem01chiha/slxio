// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SWITCH_H
#define SWITCH_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Switch : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Switch();

  /** Default Destructor */
  ~Switch();

  const std::string& GetCriteria() const;
  void SetCriteria(const std::string& value);

  const std::string& GetThreshold() const;
  void SetThreshold(const std::string& value);

  const std::string& GetInputsamedt() const;
  void SetInputsamedt(const std::string& value);

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

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetAllowdiffinputsizes() const;
  void SetAllowdiffinputsizes(const std::string& value);

private:

  std::string m_Criteria;

  std::string m_Threshold;

  std::string m_Inputsamedt;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Rndmeth;

  std::string m_Saturateonintegeroverflow;

  std::string m_Zerocross;

  std::string m_Sampletime;

  std::string m_Allowdiffinputsizes;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SWITCH_H
