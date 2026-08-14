// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef WRAPTOZERO_H
#define WRAPTOZERO_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT WrapToZero
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  WrapToZero();

  /** Default Destructor */
  ~WrapToZero();

  const std::string& GetThreshold() const;
  void SetThreshold(const std::string& value);

private:
  std::string m_Threshold;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // WRAPTOZERO_H
