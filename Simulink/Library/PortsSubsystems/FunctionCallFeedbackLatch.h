// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FUNCTIONCALLFEEDBACKLATCH_H
#define FUNCTIONCALLFEEDBACKLATCH_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FunctionCallFeedbackLatch : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  FunctionCallFeedbackLatch();

  /** Default Destructor */
  ~FunctionCallFeedbackLatch();

private:

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FUNCTIONCALLFEEDBACKLATCH_H
