// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SWITCH_H
#define SWITCH_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Switch final {
public:
  /** Default Constructor */
  Switch();

  /** Get the Threshold */
  Float32 GetThreshold() const;

  /** Set the Threshold */
  void SetThreshold(Float32 value);

  /** Default Destructor */
  ~Switch();

private:
  Float32 Threshold;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SWITCH_H
