// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LEVEL2MATLABSFUNCTION_H
#define LEVEL2MATLABSFUNCTION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Level2MatlabSFunction
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Level2MatlabSFunction();

  /** Default Destructor */
  ~Level2MatlabSFunction();

  const std::string& GetFunctionname() const;
  void SetFunctionname(const std::string& value);

  const std::string& GetParameters() const;
  void SetParameters(const std::string& value);

private:
  std::string m_Functionname;

  std::string m_Parameters;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // LEVEL2MATLABSFUNCTION_H
