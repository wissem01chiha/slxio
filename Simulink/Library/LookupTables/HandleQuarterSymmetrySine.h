// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef HANDLEQUARTERSYMMETRYSINE_H
#define HANDLEQUARTERSYMMETRYSINE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT HandleQuarterSymmetrySine : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  HandleQuarterSymmetrySine();

  /** Default Destructor */
  ~HandleQuarterSymmetrySine();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // HANDLEQUARTERSYMMETRYSINE_H
