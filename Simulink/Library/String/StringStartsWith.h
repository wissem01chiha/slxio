// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGSTARTSWITH_H
#define STRINGSTARTSWITH_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringStartsWith
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  StringStartsWith();

  /** Default Destructor */
  ~StringStartsWith();

  const std::string& GetCasesensitive() const;
  void SetCasesensitive(const std::string& value);

  const std::string& GetFunction() const;
  void SetFunction(const std::string& value);

private:
  std::string m_Casesensitive;

  std::string m_Function;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGSTARTSWITH_H
