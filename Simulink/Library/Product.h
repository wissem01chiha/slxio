// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef PRODUCT_H
#define PRODUCT_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Product final {
public:
  /** Default Constructor */
  Product();

  /** Get the ProductValue */
  Float32 GetProductValue() const;

  /** Set the ProductValue */
  void SetProductValue(Float32 value);

  /** Default Destructor */
  ~Product();

private:
  Float32 ProductValue;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // PRODUCT_H
