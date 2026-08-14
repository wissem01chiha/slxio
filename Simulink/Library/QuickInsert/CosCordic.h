// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef COSCORDIC_H
#define COSCORDIC_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT CosCordic
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  CosCordic();

  /** Default Destructor */
  ~CosCordic();

  const std::string& GetOperator() const;
  void SetOperator(const std::string& value);

  const std::string& GetApproximationmethod() const;
  void SetApproximationmethod(const std::string& value);

  const std::string& GetNumberofiterations() const;
  void SetNumberofiterations(const std::string& value);

  const std::string& GetOutputsignaltype() const;
  void SetOutputsignaltype(const std::string& value);

  const std::string& GetInterpmethod() const;
  void SetInterpmethod(const std::string& value);

  const std::string& GetAngleunit() const;
  void SetAngleunit(const std::string& value);

  const std::string& GetNumberofdatapoints() const;
  void SetNumberofdatapoints(const std::string& value);

  const std::string& GetTabledatatypestr() const;
  void SetTabledatatypestr(const std::string& value);

  const std::string& GetRemoveprotectionagainstoutofrangeinput() const;
  void SetRemoveprotectionagainstoutofrangeinput(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Operator;

  std::string m_Approximationmethod;

  std::string m_Numberofiterations;

  std::string m_Outputsignaltype;

  std::string m_Interpmethod;

  std::string m_Angleunit;

  std::string m_Numberofdatapoints;

  std::string m_Tabledatatypestr;

  std::string m_Removeprotectionagainstoutofrangeinput;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // COSCORDIC_H
