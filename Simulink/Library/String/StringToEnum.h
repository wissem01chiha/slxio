// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGTOENUM_H
#define STRINGTOENUM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringToEnum
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  StringToEnum();

  /** Default Destructor */
  ~StringToEnum();

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

private:
  std::string m_Outdatatypestr;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGTOENUM_H
