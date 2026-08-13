// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CHIRPSIGNAL_H
#define CHIRPSIGNAL_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ChirpSignal : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ChirpSignal();

  /** Default Destructor */
  ~ChirpSignal();

  const std::string& GetF1() const;
  void SetF1(const std::string& value);

  const std::string& GetT() const;
  void SetT(const std::string& value);

  const std::string& GetF2() const;
  void SetF2(const std::string& value);

  const std::string& GetVectorparams1d() const;
  void SetVectorparams1d(const std::string& value);

private:

  std::string m_F1;

  std::string m_T;

  std::string m_F2;

  std::string m_Vectorparams1d;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // CHIRPSIGNAL_H
