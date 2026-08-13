// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TERMINATORPREINT_H
#define TERMINATORPREINT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TerminatorPreint : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  TerminatorPreint();

  /** Default Destructor */
  ~TerminatorPreint();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TERMINATORPREINT_H
