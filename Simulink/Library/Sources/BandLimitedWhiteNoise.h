// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BANDLIMITEDWHITENOISE_H
#define BANDLIMITEDWHITENOISE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BandLimitedWhiteNoise
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  BandLimitedWhiteNoise();

  /** Default Destructor */
  ~BandLimitedWhiteNoise();

  const std::string& GetCov() const;
  void SetCov(const std::string& value);

  const std::string& GetTs() const;
  void SetTs(const std::string& value);

  const std::string& GetSeed() const;
  void SetSeed(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

private:
  std::string m_Cov;

  std::string m_Ts;

  std::string m_Seed;

  std::string m_Vectorparams1d;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BANDLIMITEDWHITENOISE_H
