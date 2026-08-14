// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TAPPEDDELAY_H
#define TAPPEDDELAY_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TappedDelay
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  TappedDelay();

  /** Default Destructor */
  ~TappedDelay();

  const std::string& GetVinit() const;
  void SetVinit(const std::string& value);

  const std::string& GetSamptime() const;
  void SetSamptime(const std::string& value);

  const std::string& GetNumdelays() const;
  void SetNumdelays(const std::string& value);

  const std::string& GetDelayorder() const;
  void SetDelayorder(const std::string& value);

  const std::string& GetIncludecurrent() const;
  void SetIncludecurrent(const std::string& value);

private:
  std::string m_Vinit;

  std::string m_Samptime;

  std::string m_Numdelays;

  std::string m_Delayorder;

  std::string m_Includecurrent;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TAPPEDDELAY_H
