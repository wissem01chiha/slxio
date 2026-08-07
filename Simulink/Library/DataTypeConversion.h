// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DATATYPECONVERSION_H
#define DATATYPECONVERSION_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DataTypeConversion final {
public:
  /** Default Constructor */
  DataTypeConversion();

  /** Get the ConversionCode */
  Float32 GetConversionCode() const;

  /** Set the ConversionCode */
  void SetConversionCode(Float32 value);

  /** Default Destructor */
  ~DataTypeConversion();

private:
  Float32 ConversionCode;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // DATATYPECONVERSION_H
