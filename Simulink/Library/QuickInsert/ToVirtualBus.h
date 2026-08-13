// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TOVIRTUALBUS_H
#define TOVIRTUALBUS_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ToVirtualBus : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ToVirtualBus();

  /** Default Destructor */
  ~ToVirtualBus();

  const std::string& GetConversionoutput() const;
  void SetConversionoutput(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetOverrideopt() const;
  void SetOverrideopt(const std::string& value);

private:

  std::string m_Conversionoutput;

  std::string m_Outdatatypestr;

  std::string m_Overrideopt;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TOVIRTUALBUS_H
