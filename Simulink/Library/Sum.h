// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SUM_H
#define SUM_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include <string>

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Sum final {
public:
  /** Default Constructor */
  Sum();

  /** Get the sum value */
  float GetValue() const;

  /** Set the sum value */
  void SetValue(float value);

  /** Default Destructor */
  ~Sum();

private:
  Float32 SumValue;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // SUM_H
