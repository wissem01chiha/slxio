// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef IDENTITYMATRIX_H
#define IDENTITYMATRIX_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Identitymatrix : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Identitymatrix();

  /** Default Destructor */
  ~Identitymatrix();

  const std::string& GetInheritoutputportattributes() const;
  void SetInheritoutputportattributes(const std::string& value);

  const std::string& GetOutputdimensions() const;
  void SetOutputdimensions(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Inheritoutputportattributes;

  std::string m_Outputdimensions;

  std::string m_Outdatatypestr;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // IDENTITYMATRIX_H
