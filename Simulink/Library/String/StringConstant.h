// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGCONSTANT_H
#define STRINGCONSTANT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringConstant : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  StringConstant();

  /** Default Destructor */
  ~StringConstant();

  const std::string& GetString() const;
  void SetString(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

private:

  std::string m_String;

  std::string m_Outdatatypestr;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGCONSTANT_H
