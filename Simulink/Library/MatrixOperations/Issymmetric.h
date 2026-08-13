// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ISSYMMETRIC_H
#define ISSYMMETRIC_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Issymmetric : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Issymmetric();

  /** Default Destructor */
  ~Issymmetric();

  const std::string& GetMode() const;
  void SetMode(const std::string& value);

private:

  std::string m_Mode;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // ISSYMMETRIC_H
