// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BIAS_H
#define BIAS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Bias
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Bias();

  /** Default Destructor */
  ~Bias();

  const std::string& GetBias() const;
  void SetBias(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

private:
  std::string m_Bias;

  std::string m_Saturateonintegeroverflow;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BIAS_H
