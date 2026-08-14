// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef STRINGCONCATENATE_H
#define STRINGCONCATENATE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT StringConcatenate
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  StringConcatenate();

  /** Default Destructor */
  ~StringConcatenate();

  const std::string& GetInputs() const;
  void SetInputs(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

private:
  std::string m_Inputs;

  std::string m_Outdatatypestr;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // STRINGCONCATENATE_H
