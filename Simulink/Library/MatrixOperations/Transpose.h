// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSPOSE_H
#define TRANSPOSE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Transpose : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Transpose();

  /** Default Destructor */
  ~Transpose();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRANSPOSE_H
