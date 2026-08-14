// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef UNARYMINUS_H
#define UNARYMINUS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT UnaryMinus
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  UnaryMinus();

  /** Default Destructor */
  ~UnaryMinus();

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetSaturateonintegeroverflow() const;
  void SetSaturateonintegeroverflow(const std::string& value);

private:
  std::string m_Sampletime;

  std::string m_Saturateonintegeroverflow;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // UNARYMINUS_H
