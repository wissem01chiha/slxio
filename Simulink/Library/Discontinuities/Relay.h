// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RELAY_H
#define RELAY_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Relay : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Relay();

  /** Default Destructor */
  ~Relay();

  const std::string& GetOnswitchvalue() const;
  void SetOnswitchvalue(const std::string& value);

  const std::string& GetOffswitchvalue() const;
  void SetOffswitchvalue(const std::string& value);

  const std::string& GetOnoutputvalue() const;
  void SetOnoutputvalue(const std::string& value);

  const std::string& GetOffoutputvalue() const;
  void SetOffoutputvalue(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

  const std::string& GetInputprocessing() const;
  void SetInputprocessing(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Onswitchvalue;

  std::string m_Offswitchvalue;

  std::string m_Onoutputvalue;

  std::string m_Offoutputvalue;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Lockscale;

  std::string m_Inputprocessing;

  std::string m_Zerocross;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RELAY_H
