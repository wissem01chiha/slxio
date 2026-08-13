// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SFUNCTION_H
#define SFUNCTION_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SFunction : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  SFunction();

  /** Default Destructor */
  ~SFunction();

  const std::string& GetFunctionname() const;
  void SetFunctionname(const std::string& value);

  const std::string& GetParameters() const;
  void SetParameters(const std::string& value);

  const std::string& GetSfunctionmodules() const;
  void SetSfunctionmodules(const std::string& value);

private:

  std::string m_Functionname;

  std::string m_Parameters;

  std::string m_Sfunctionmodules;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SFUNCTION_H
