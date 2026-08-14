// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGTOASCII_H
#define STRINGTOASCII_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringToAscii
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  StringToAscii();

  /** Default Destructor */
  ~StringToAscii();

  const std::string& GetOutputvectorsize() const;
  void SetOutputvectorsize(const std::string& value);

private:
  std::string m_Outputvectorsize;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGTOASCII_H
