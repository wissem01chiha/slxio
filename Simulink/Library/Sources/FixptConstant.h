// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FIXPTCONSTANT_H
#define FIXPTCONSTANT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FixptConstant : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  FixptConstant();

  /** Default Destructor */
  ~FixptConstant();

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

#endif // FIXPTCONSTANT_H
