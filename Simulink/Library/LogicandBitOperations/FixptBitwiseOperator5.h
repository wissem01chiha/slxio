// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FIXPTBITWISEOPERATOR5_H
#define FIXPTBITWISEOPERATOR5_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FixptBitwiseOperator5 : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  FixptBitwiseOperator5();

  /** Default Destructor */
  ~FixptBitwiseOperator5();

  const std::string& GetLogicop() const;
  void SetLogicop(const std::string& value);

  const std::string& GetUsebitmask() const;
  void SetUsebitmask(const std::string& value);

  const std::string& GetNuminputports() const;
  void SetNuminputports(const std::string& value);

  const std::string& GetBitmask() const;
  void SetBitmask(const std::string& value);

  const std::string& GetBitmaskrealworld() const;
  void SetBitmaskrealworld(const std::string& value);

private:

  std::string m_Logicop;

  std::string m_Usebitmask;

  std::string m_Numinputports;

  std::string m_Bitmask;

  std::string m_Bitmaskrealworld;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FIXPTBITWISEOPERATOR5_H
