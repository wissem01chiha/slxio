// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SIGNALEDITOR_H
#define SIGNALEDITOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SignalEditor
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  SignalEditor();

  /** Default Destructor */
  ~SignalEditor();

  const std::string& GetFilename() const;
  void SetFilename(const std::string& value);

  const std::string& GetActivescenario() const;
  void SetActivescenario(const std::string& value);

  const std::string& GetActivesignal() const;
  void SetActivesignal(const std::string& value);

  const std::string& GetIsbus() const;
  void SetIsbus(const std::string& value);

  const std::string& GetOutputbusobjectstr() const;
  void SetOutputbusobjectstr(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetInterpolate() const;
  void SetInterpolate(const std::string& value);

  const std::string& GetZerocross() const;
  void SetZerocross(const std::string& value);

  const std::string& GetOutputafterfinalvalue() const;
  void SetOutputafterfinalvalue(const std::string& value);

  const std::string& GetUnit() const;
  void SetUnit(const std::string& value);

  const std::string& GetNumberofscenarios() const;
  void SetNumberofscenarios(const std::string& value);

  const std::string& GetNumberofsignals() const;
  void SetNumberofsignals(const std::string& value);

  const std::string& GetPreservesignalname() const;
  void SetPreservesignalname(const std::string& value);

  const std::string& GetApplysigpropstoallscenarios() const;
  void SetApplysigpropstoallscenarios(const std::string& value);

  const std::string& GetApplysigpropstoallsignals() const;
  void SetApplysigpropstoallsignals(const std::string& value);

private:
  std::string m_Filename;

  std::string m_Activescenario;

  std::string m_Activesignal;

  std::string m_Isbus;

  std::string m_Outputbusobjectstr;

  std::string m_Sampletime;

  std::string m_Interpolate;

  std::string m_Zerocross;

  std::string m_Outputafterfinalvalue;

  std::string m_Unit;

  std::string m_Numberofscenarios;

  std::string m_Numberofsignals;

  std::string m_Preservesignalname;

  std::string m_Applysigpropstoallscenarios;

  std::string m_Applysigpropstoallsignals;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SIGNALEDITOR_H
