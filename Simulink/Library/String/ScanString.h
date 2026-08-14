// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SCANSTRING_H
#define SCANSTRING_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ScanString
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  ScanString();

  /** Default Destructor */
  ~ScanString();

  const std::string& GetFormat() const;
  void SetFormat(const std::string& value);

private:
  std::string m_Format;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SCANSTRING_H
