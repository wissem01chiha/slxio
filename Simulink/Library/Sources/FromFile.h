// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FROMFILE_H
#define FROMFILE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FromFile
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  FromFile();

  /** Default Destructor */
  ~FromFile();

  const std::string& GetFilename() const;
  void SetFilename(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetExtrapolationbeforefirstdatapoint() const;
  void SetExtrapolationbeforefirstdatapoint(const std::string& value);

  const std::string& GetInterpolationwithintimerange() const;
  void SetInterpolationwithintimerange(const std::string& value);

  const std::string& GetExtrapolationafterlastdatapoint() const;
  void SetExtrapolationafterlastdatapoint(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

private:
  std::string m_Filename;

  std::string m_Outdatatypestr;

  std::string m_Sampletime;

  std::string m_Extrapolationbeforefirstdatapoint;

  std::string m_Interpolationwithintimerange;

  std::string m_Extrapolationafterlastdatapoint;

  std::string m_Zerocross;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FROMFILE_H
