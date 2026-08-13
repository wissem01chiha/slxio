// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ADDCONSTANT_H
#define ADDCONSTANT_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT AddConstant : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  AddConstant();

  /** Default Destructor */
  ~AddConstant();

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

#endif // ADDCONSTANT_H
