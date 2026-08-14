// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef XOR_H
#define XOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Xor
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Xor();

  /** Default Destructor */
  ~Xor();

  const std::string& GetOperator() const;
  void SetOperator(const std::string& value);

  const std::string& GetInputs() const;
  void SetInputs(const std::string& value);

  const std::string& GetIconshape() const;
  void SetIconshape(const std::string& value);

  const std::string& GetAllportssamedt() const;
  void SetAllportssamedt(const std::string& value);

  const std::string& GetOutdatatypestr() const;
  void SetOutdatatypestr(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Operator;

  std::string m_Inputs;

  std::string m_Iconshape;

  std::string m_Allportssamedt;

  std::string m_Outdatatypestr;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // XOR_H
