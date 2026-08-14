// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MODEL_H
#define MODEL_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Model
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Model();

  /** Default Destructor */
  ~Model();

  const std::string& GetModelnamedialog() const;
  void SetModelnamedialog(const std::string& value);

  const std::string& GetModelfile() const;
  void SetModelfile(const std::string& value);

  const std::string& GetModelname() const;
  void SetModelname(const std::string& value);

  const std::string& GetParameterargumentnames() const;
  void SetParameterargumentnames(const std::string& value);

  const std::string& GetParameterargumentvalues() const;
  void SetParameterargumentvalues(const std::string& value);

  const std::string& GetSimulationmode() const;
  void SetSimulationmode(const std::string& value);

  const std::string& GetShowmodelinitializeport() const;
  void SetShowmodelinitializeport(const std::string& value);

  const std::string& GetShowmodelreinitializeports() const;
  void SetShowmodelreinitializeports(const std::string& value);

  const std::string& GetShowmodelresetports() const;
  void SetShowmodelresetports(const std::string& value);

  const std::string& GetShowmodelterminateport() const;
  void SetShowmodelterminateport(const std::string& value);

  const std::string& GetSchedulerates() const;
  void SetSchedulerates(const std::string& value);

  const std::string& GetSchedulerateswith() const;
  void SetSchedulerateswith(const std::string& value);

  const std::string& GetPortdiscreterates() const;
  void SetPortdiscreterates(const std::string& value);

  const std::string& GetAutofillportdiscreterates() const;
  void SetAutofillportdiscreterates(const std::string& value);

  const std::string& GetCodeinterface() const;
  void SetCodeinterface(const std::string& value);

  const std::string& GetVariant() const;
  void SetVariant(const std::string& value);

  const std::string& GetVariantcontrol() const;
  void SetVariantcontrol(const std::string& value);

  const std::string& GetCommunicationstepsize() const;
  void SetCommunicationstepsize(const std::string& value);

  const std::string& GetInputsignalhandling() const;
  void SetInputsignalhandling(const std::string& value);

  const std::string& GetOutputsignalhandling() const;
  void SetOutputsignalhandling(const std::string& value);

  const std::string& GetParameterargumentvaluesasstring() const;
  void SetParameterargumentvaluesasstring(const std::string& value);

  const std::string& GetInstanceparameters() const;
  void SetInstanceparameters(const std::string& value);

private:
  std::string m_Modelnamedialog;

  std::string m_Modelfile;

  std::string m_Modelname;

  std::string m_Parameterargumentnames;

  std::string m_Parameterargumentvalues;

  std::string m_Simulationmode;

  std::string m_Showmodelinitializeport;

  std::string m_Showmodelreinitializeports;

  std::string m_Showmodelresetports;

  std::string m_Showmodelterminateport;

  std::string m_Schedulerates;

  std::string m_Schedulerateswith;

  std::string m_Portdiscreterates;

  std::string m_Autofillportdiscreterates;

  std::string m_Codeinterface;

  std::string m_Variant;

  std::string m_Variantcontrol;

  std::string m_Communicationstepsize;

  std::string m_Inputsignalhandling;

  std::string m_Outputsignalhandling;

  std::string m_Parameterargumentvaluesasstring;

  std::string m_Instanceparameters;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MODEL_H
