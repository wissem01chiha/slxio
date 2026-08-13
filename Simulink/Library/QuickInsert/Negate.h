// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef NEGATE_H
#define NEGATE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Negate : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  Negate();

  /** Default Destructor */
  ~Negate();

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

#endif // NEGATE_H
