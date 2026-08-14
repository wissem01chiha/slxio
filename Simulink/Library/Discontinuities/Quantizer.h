// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef QUANTIZER_H
#define QUANTIZER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Quantizer
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Quantizer();

  /** Default Destructor */
  ~Quantizer();

  const std::string& GetQuantizationinterval() const;
  void SetQuantizationinterval(const std::string& value);

  const std::string& GetLinearizeasgain() const;
  void SetLinearizeasgain(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Quantizationinterval;

  std::string m_Linearizeasgain;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // QUANTIZER_H
