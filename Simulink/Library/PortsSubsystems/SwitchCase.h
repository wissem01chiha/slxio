// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SWITCHCASE_H
#define SWITCHCASE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SwitchCase
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  SwitchCase();

  /** Default Destructor */
  ~SwitchCase();

  const std::string& GetCaseconditions() const;
  void SetCaseconditions(const std::string& value);

  const std::string& GetShowdefaultcase() const;
  void SetShowdefaultcase(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Caseconditions;

  std::string m_Showdefaultcase;

  std::string m_Zerocross;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SWITCHCASE_H
