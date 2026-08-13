// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DEADOUT_H
#define DEADOUT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DeadOut : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DeadOut();

  /** Default Destructor */
  ~DeadOut();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DEADOUT_H
