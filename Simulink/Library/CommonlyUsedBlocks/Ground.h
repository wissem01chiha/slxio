// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GROUND_H
#define GROUND_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Ground
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Ground();

  /** Default Destructor */
  ~Ground();

private:
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // GROUND_H
