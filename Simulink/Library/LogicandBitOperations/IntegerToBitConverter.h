// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTEGERTOBITCONVERTER_H
#define INTEGERTOBITCONVERTER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT IntegerToBitConverter
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  IntegerToBitConverter();

  /** Default Destructor */
  ~IntegerToBitConverter();

  const std::string& GetNbits() const;
  void SetNbits(const std::string& value);

  const std::string& GetSignedinputvalues() const;
  void SetSignedinputvalues(const std::string& value);

  const std::string& GetBitorder() const;
  void SetBitorder(const std::string& value);

  const std::string& GetOutdtype() const;
  void SetOutdtype(const std::string& value);

private:
  std::string m_Nbits;

  std::string m_Signedinputvalues;

  std::string m_Bitorder;

  std::string m_Outdtype;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INTEGERTOBITCONVERTER_H
