// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISTRIANGULAR_H
#define ISTRIANGULAR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Istriangular
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Istriangular();

  /** Default Destructor */
  ~Istriangular();

  const std::string& GetMode() const;
  void SetMode(const std::string& value);

private:
  std::string m_Mode;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ISTRIANGULAR_H
