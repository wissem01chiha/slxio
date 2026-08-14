// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef BITTOINTEGERCONVERTER_H
#define BITTOINTEGERCONVERTER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT BitToIntegerConverter
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  BitToIntegerConverter();

  /** Default Destructor */
  ~BitToIntegerConverter();

  const std::string& GetNbits() const;
  void SetNbits(const std::string& value);

  const std::string& GetBitorder() const;
  void SetBitorder(const std::string& value);

  const std::string& GetSignedoutputvalues() const;
  void SetSignedoutputvalues(const std::string& value);

  const std::string& GetOutdtype() const;
  void SetOutdtype(const std::string& value);

  const std::string& GetOutdtypesigned() const;
  void SetOutdtypesigned(const std::string& value);

private:
  std::string m_Nbits;

  std::string m_Bitorder;

  std::string m_Signedoutputvalues;

  std::string m_Outdtype;

  std::string m_Outdtypesigned;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // BITTOINTEGERCONVERTER_H
