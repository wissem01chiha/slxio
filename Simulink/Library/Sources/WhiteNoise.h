// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef WHITENOISE_H
#define WHITENOISE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT WhiteNoise : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  WhiteNoise();

  /** Default Destructor */
  ~WhiteNoise();

  const std::string& GetMean() const;
  void SetMean(const std::string& value);

  const std::string& GetVariance() const;
  void SetVariance(const std::string& value);

  const std::string& GetSeed() const;
  void SetSeed(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

private:

  std::string m_Mean;

  std::string m_Variance;

  std::string m_Seed;

  std::string m_Sampletime;

  std::string m_Vectorparams1d;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // WHITENOISE_H
