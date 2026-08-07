// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef GAIN_H
#define GAIN_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Gain final {
public:
  /** Default Constructor */
  Gain();

  /** Get the GainValue */
  Float32 GetGainValue() const;

  /** Set the GainValue */
  void SetGainValue(Float32 value);

  /** Default Destructor */
  ~Gain();

private:
  Float32 GainValue;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // GAIN_H
