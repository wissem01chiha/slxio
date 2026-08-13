#include "InternalParameters.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

InternalParameters::InternalParameters() {}

InternalParameters::~InternalParameters() {}

const std::string& InternalParameters::GetShowportlabels() const
{
    return m_Showportlabels;
}

void InternalParameters::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& InternalParameters::GetBlockchoice() const
{
    return m_Blockchoice;
}

void InternalParameters::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& InternalParameters::GetTemplateblock() const
{
    return m_Templateblock;
}

void InternalParameters::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& InternalParameters::GetMemberblocks() const
{
    return m_Memberblocks;
}

void InternalParameters::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& InternalParameters::GetPermissions() const
{
    return m_Permissions;
}

void InternalParameters::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& InternalParameters::GetErrorfcn() const
{
    return m_Errorfcn;
}

void InternalParameters::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& InternalParameters::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void InternalParameters::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& InternalParameters::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void InternalParameters::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& InternalParameters::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void InternalParameters::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& InternalParameters::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void InternalParameters::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& InternalParameters::GetScheduleas() const
{
    return m_Scheduleas;
}

void InternalParameters::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& InternalParameters::GetPartitionname() const
{
    return m_Partitionname;
}

void InternalParameters::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& InternalParameters::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void InternalParameters::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& InternalParameters::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void InternalParameters::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& InternalParameters::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void InternalParameters::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& InternalParameters::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void InternalParameters::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& InternalParameters::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void InternalParameters::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& InternalParameters::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void InternalParameters::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& InternalParameters::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void InternalParameters::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& InternalParameters::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void InternalParameters::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& InternalParameters::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void InternalParameters::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& InternalParameters::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void InternalParameters::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& InternalParameters::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void InternalParameters::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& InternalParameters::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void InternalParameters::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& InternalParameters::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void InternalParameters::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& InternalParameters::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void InternalParameters::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& InternalParameters::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void InternalParameters::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& InternalParameters::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void InternalParameters::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& InternalParameters::GetVariant() const
{
    return m_Variant;
}

void InternalParameters::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& InternalParameters::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void InternalParameters::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& InternalParameters::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void InternalParameters::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& InternalParameters::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void InternalParameters::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& InternalParameters::GetVariantchoices() const
{
    return m_Variantchoices;
}

void InternalParameters::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& InternalParameters::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void InternalParameters::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& InternalParameters::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void InternalParameters::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& InternalParameters::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void InternalParameters::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& InternalParameters::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void InternalParameters::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& InternalParameters::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void InternalParameters::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& InternalParameters::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void InternalParameters::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& InternalParameters::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void InternalParameters::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& InternalParameters::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void InternalParameters::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& InternalParameters::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void InternalParameters::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& InternalParameters::GetLatency() const
{
    return m_Latency;
}

void InternalParameters::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& InternalParameters::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void InternalParameters::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
