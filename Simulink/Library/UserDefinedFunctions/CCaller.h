// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CCALLER_H
#define CCALLER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT CCaller : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  CCaller();

  /** Default Destructor */
  ~CCaller();

  const std::string& GetFunctionname() const;
  void SetFunctionname(const std::string& value);

  const std::string& GetFunctionportspecification() const;
  void SetFunctionportspecification(const std::string& value);

  const std::string& GetAvailablefunctions() const;
  void SetAvailablefunctions(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Functionname;

  std::string m_Functionportspecification;

  std::string m_Availablefunctions;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // CCALLER_H
