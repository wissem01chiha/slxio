// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FUNCTIONCALLER_H
#define FUNCTIONCALLER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT FunctionCaller : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  FunctionCaller();

  /** Default Destructor */
  ~FunctionCaller();

  const std::string& GetFunctionprototype() const;
  void SetFunctionprototype(const std::string& value);

  const std::string& GetInputargumentspecifications() const;
  void SetInputargumentspecifications(const std::string& value);

  const std::string& GetOutputargumentspecifications() const;
  void SetOutputargumentspecifications(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetAsynchronouscaller() const;
  void SetAsynchronouscaller(const std::string& value);

private:

  std::string m_Functionprototype;

  std::string m_Inputargumentspecifications;

  std::string m_Outputargumentspecifications;

  std::string m_Sampletime;

  std::string m_Asynchronouscaller;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FUNCTIONCALLER_H
