// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MINMAXRUNNINGRESETTABLE_H
#define MINMAXRUNNINGRESETTABLE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT MinmaxRunningResettable : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  MinmaxRunningResettable();

  /** Default Destructor */
  ~MinmaxRunningResettable();

  const std::string& GetFunction() const;
  void SetFunction(const std::string& value);

  const std::string& GetVinit() const;
  void SetVinit(const std::string& value);

private:

  std::string m_Function;

  std::string m_Vinit;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MINMAXRUNNINGRESETTABLE_H
