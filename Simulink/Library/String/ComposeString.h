// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COMPOSESTRING_H
#define COMPOSESTRING_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ComposeString : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ComposeString();

  /** Default Destructor */
  ~ComposeString();

  const std::string& GetFormat() const;
  void SetFormat(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

private:

  std::string m_Format;

  std::string m_Outdatatypestr;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // COMPOSESTRING_H
