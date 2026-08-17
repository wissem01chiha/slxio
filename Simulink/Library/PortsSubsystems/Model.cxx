#include "Model.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Model::Model() {}

Model::~Model() {}

const std::string& Model::GetModelnamedialog() const
{
    return m_Modelnamedialog;
}

void Model::SetModelnamedialog(const std::string& value)
{
    m_Modelnamedialog = value;
}

const std::string& Model::GetModelfile() const { return m_Modelfile; }

void Model::SetModelfile(const std::string& value) { m_Modelfile = value; }

const std::string& Model::GetModelname() const { return m_Modelname; }

void Model::SetModelname(const std::string& value) { m_Modelname = value; }

const std::string& Model::GetParameterargumentnames() const
{
    return m_Parameterargumentnames;
}

void Model::SetParameterargumentnames(const std::string& value)
{
    m_Parameterargumentnames = value;
}

const std::string& Model::GetParameterargumentvalues() const
{
    return m_Parameterargumentvalues;
}

void Model::SetParameterargumentvalues(const std::string& value)
{
    m_Parameterargumentvalues = value;
}

const std::string& Model::GetSimulationmode() const { return m_Simulationmode; }

void Model::SetSimulationmode(const std::string& value)
{
    m_Simulationmode = value;
}

const std::string& Model::GetShowmodelinitializeport() const
{
    return m_Showmodelinitializeport;
}

void Model::SetShowmodelinitializeport(const std::string& value)
{
    m_Showmodelinitializeport = value;
}

const std::string& Model::GetShowmodelreinitializeports() const
{
    return m_Showmodelreinitializeports;
}

void Model::SetShowmodelreinitializeports(const std::string& value)
{
    m_Showmodelreinitializeports = value;
}

const std::string& Model::GetShowmodelresetports() const
{
    return m_Showmodelresetports;
}

void Model::SetShowmodelresetports(const std::string& value)
{
    m_Showmodelresetports = value;
}

const std::string& Model::GetShowmodelterminateport() const
{
    return m_Showmodelterminateport;
}

void Model::SetShowmodelterminateport(const std::string& value)
{
    m_Showmodelterminateport = value;
}

const std::string& Model::GetSchedulerates() const { return m_Schedulerates; }

void Model::SetSchedulerates(const std::string& value)
{
    m_Schedulerates = value;
}

const std::string& Model::GetSchedulerateswith() const
{
    return m_Schedulerateswith;
}

void Model::SetSchedulerateswith(const std::string& value)
{
    m_Schedulerateswith = value;
}

const std::string& Model::GetPortdiscreterates() const
{
    return m_Portdiscreterates;
}

void Model::SetPortdiscreterates(const std::string& value)
{
    m_Portdiscreterates = value;
}

const std::string& Model::GetAutofillportdiscreterates() const
{
    return m_Autofillportdiscreterates;
}

void Model::SetAutofillportdiscreterates(const std::string& value)
{
    m_Autofillportdiscreterates = value;
}

const std::string& Model::GetCodeinterface() const { return m_Codeinterface; }

void Model::SetCodeinterface(const std::string& value)
{
    m_Codeinterface = value;
}

const std::string& Model::GetVariant() const { return m_Variant; }

void Model::SetVariant(const std::string& value) { m_Variant = value; }

const std::string& Model::GetVariantcontrol() const { return m_Variantcontrol; }

void Model::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Model::GetCommunicationstepsize() const
{
    return m_Communicationstepsize;
}

void Model::SetCommunicationstepsize(const std::string& value)
{
    m_Communicationstepsize = value;
}

const std::string& Model::GetInputsignalhandling() const
{
    return m_Inputsignalhandling;
}

void Model::SetInputsignalhandling(const std::string& value)
{
    m_Inputsignalhandling = value;
}

const std::string& Model::GetOutputsignalhandling() const
{
    return m_Outputsignalhandling;
}

void Model::SetOutputsignalhandling(const std::string& value)
{
    m_Outputsignalhandling = value;
}

const std::string& Model::GetParameterargumentvaluesasstring() const
{
    return m_Parameterargumentvaluesasstring;
}

void Model::SetParameterargumentvaluesasstring(const std::string& value)
{
    m_Parameterargumentvaluesasstring = value;
}

const std::string& Model::GetInstanceparameters() const
{
    return m_Instanceparameters;
}

void Model::SetInstanceparameters(const std::string& value)
{
    m_Instanceparameters = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
