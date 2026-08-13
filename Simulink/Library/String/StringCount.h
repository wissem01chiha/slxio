// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGCOUNT_H
#define STRINGCOUNT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringCount : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  StringCount();

  /** Default Destructor */
  ~StringCount();

  const std::string& GetCasesensitive() const;
  void SetCasesensitive(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

private:

  std::string m_Casesensitive;

  std::string m_Outdatatypestr;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGCOUNT_H
