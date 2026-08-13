// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ENABLE_H
#define ENABLE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Enable : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Enable();

  /** Default Destructor */
  ~Enable();

  const std::string& GetStateswhenenabling() const;
  void SetStateswhenenabling(const std::string& value);

  const std::string& GetPropagatevarsize() const;
  void SetPropagatevarsize(const std::string& value);

  const std::string& GetShowoutputport() const;
  void SetShowoutputport(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetPortdimensions() const;
  void SetPortdimensions(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetOutmin() const;
  void SetOutmin(const std::string& value);

  const std::string& GetOutmax() const;
  void SetOutmax(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetInterpolate() const;
  void SetInterpolate(const std::string& value);

private:

  std::string m_Stateswhenenabling;

  std::string m_Propagatevarsize;

  std::string m_Showoutputport;

  std::string m_Zerocross;

  std::string m_Portdimensions;

  std::string m_Sampletime;

  std::string m_Outmin;

  std::string m_Outmax;

  std::string m_Outdatatypestr;

  std::string m_Interpolate;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ENABLE_H
