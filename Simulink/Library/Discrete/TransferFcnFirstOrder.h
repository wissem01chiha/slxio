// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef TRANSFERFCNFIRSTORDER_H
#define TRANSFERFCNFIRSTORDER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT TransferFcnFirstOrder : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  TransferFcnFirstOrder();

  /** Default Destructor */
  ~TransferFcnFirstOrder();

  const std::string& GetPolez() const;
  void SetPolez(const std::string& value);

  const std::string& GetIcprevoutput() const;
  void SetIcprevoutput(const std::string& value);

  const std::string& GetRndmeth() const;
  void SetRndmeth(const std::string& value);

  const std::string& GetDosatur() const;
  void SetDosatur(const std::string& value);

private:

  std::string m_Polez;

  std::string m_Icprevoutput;

  std::string m_Rndmeth;

  std::string m_Dosatur;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // TRANSFERFCNFIRSTORDER_H
