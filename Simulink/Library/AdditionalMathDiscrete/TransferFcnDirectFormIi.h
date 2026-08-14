// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSFERFCNDIRECTFORMII_H
#define TRANSFERFCNDIRECTFORMII_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TransferFcnDirectFormIi
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  TransferFcnDirectFormIi();

  /** Default Destructor */
  ~TransferFcnDirectFormIi();

  const std::string& GetNumcoefvec() const;
  void SetNumcoefvec(const std::string& value);

  const std::string& GetDencoefvec() const;
  void SetDencoefvec(const std::string& value);

  const std::string& GetVinit() const;
  void SetVinit(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetDosatur() const;
  void SetDosatur(const std::string& value);

private:
  std::string m_Numcoefvec;

  std::string m_Dencoefvec;

  std::string m_Vinit;

  std::string m_Rndmeth;

  std::string m_Dosatur;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRANSFERFCNDIRECTFORMII_H
