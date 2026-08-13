#include "Integrator.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Integrator::Integrator() {}

Integrator::~Integrator() {}

const std::string& Integrator::GetShowportlabels() const
{
    return m_Showportlabels;
}

void Integrator::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& Integrator::GetBlockchoice() const
{
    return m_Blockchoice;
}

void Integrator::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& Integrator::GetTemplateblock() const
{
    return m_Templateblock;
}

void Integrator::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& Integrator::GetMemberblocks() const
{
    return m_Memberblocks;
}

void Integrator::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& Integrator::GetPermissions() const
{
    return m_Permissions;
}

void Integrator::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& Integrator::GetErrorfcn() const
{
    return m_Errorfcn;
}

void Integrator::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& Integrator::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void Integrator::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& Integrator::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void Integrator::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& Integrator::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void Integrator::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& Integrator::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void Integrator::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& Integrator::GetScheduleas() const
{
    return m_Scheduleas;
}

void Integrator::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& Integrator::GetPartitionname() const
{
    return m_Partitionname;
}

void Integrator::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& Integrator::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void Integrator::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& Integrator::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void Integrator::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& Integrator::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void Integrator::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& Integrator::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void Integrator::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& Integrator::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void Integrator::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& Integrator::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void Integrator::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& Integrator::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void Integrator::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& Integrator::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void Integrator::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& Integrator::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void Integrator::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& Integrator::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void Integrator::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& Integrator::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void Integrator::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& Integrator::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void Integrator::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& Integrator::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void Integrator::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& Integrator::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void Integrator::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& Integrator::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void Integrator::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& Integrator::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void Integrator::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& Integrator::GetVariant() const
{
    return m_Variant;
}

void Integrator::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& Integrator::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void Integrator::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& Integrator::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void Integrator::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& Integrator::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void Integrator::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& Integrator::GetVariantchoices() const
{
    return m_Variantchoices;
}

void Integrator::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& Integrator::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void Integrator::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& Integrator::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Integrator::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Integrator::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void Integrator::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& Integrator::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void Integrator::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& Integrator::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void Integrator::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& Integrator::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void Integrator::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& Integrator::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void Integrator::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& Integrator::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void Integrator::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& Integrator::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void Integrator::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& Integrator::GetLatency() const
{
    return m_Latency;
}

void Integrator::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& Integrator::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void Integrator::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
