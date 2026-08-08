// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BITSET_H
#define BITSET_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BitSet final {
public:
  /** Default Constructor */
  BitSet();

  /** Get the BitPosition */
  Float32 GetBitPosition() const;

  /** Set the BitPosition */
  void SetBitPosition(Float32 value);

  /** Default Destructor */
  ~BitSet();

private:
  Float32 BitPosition;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // BITSET_H
