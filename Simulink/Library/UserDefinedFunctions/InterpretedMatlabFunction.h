// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef INTERPRETEDMATLABFUNCTION_H
#define INTERPRETEDMATLABFUNCTION_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT InterpretedMatlabFunction : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  InterpretedMatlabFunction();

  /** Default Destructor */
  ~InterpretedMatlabFunction();

  const std::string& GetMatlabfcn() const;
  void SetMatlabfcn(const std::string& value);

  const std::string& GetOutputdimensions() const;
  void SetOutputdimensions(const std::string& value);

  const std::string& GetOutputsignaltype() const;
  void SetOutputsignaltype(const std::string& value);

  const std::string& GetOutput1d() const;
  void SetOutput1d(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:

  std::string m_Matlabfcn;

  std::string m_Outputdimensions;

  std::string m_Outputsignaltype;

  std::string m_Output1d;

  std::string m_Sampletime;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // INTERPRETEDMATLABFUNCTION_H
