// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Polynomial
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Polynomial();

  /** Default Destructor */
  ~Polynomial();

  const std::string& GetCoefs() const;
  void SetCoefs(const std::string& value);

private:
  std::string m_Coefs;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // POLYNOMIAL_H
