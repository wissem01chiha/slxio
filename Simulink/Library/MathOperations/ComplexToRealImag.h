// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COMPLEXTOREALIMAG_H
#define COMPLEXTOREALIMAG_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ComplexToRealImag : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ComplexToRealImag();

  /** Default Destructor */
  ~ComplexToRealImag();

  const std::string& GetOutput() const;
  void SetOutput(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Output;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // COMPLEXTOREALIMAG_H
