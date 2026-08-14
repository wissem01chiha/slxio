// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef NEGATIVEINF_H
#define NEGATIVEINF_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT NegativeInf
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  NegativeInf();

  /** Default Destructor */
  ~NegativeInf();

  const std::string& GetValue() const;
  void SetValue(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetFrameperiod() const;
  void SetFrameperiod(const std::string& value);

private:
  std::string m_Value;

  std::string m_Vectorparams1d;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Sampletime;

  std::string m_Frameperiod;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // NEGATIVEINF_H
