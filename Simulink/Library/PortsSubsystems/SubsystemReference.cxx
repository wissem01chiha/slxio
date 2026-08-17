#include "SubsystemReference.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SubsystemReference::SubsystemReference() {}

SubsystemReference::~SubsystemReference() {}

const std::string& SubsystemReference::GetShowportlabels() const
{
    return m_Showportlabels;
}

void SubsystemReference::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& SubsystemReference::GetBlockchoice() const
{
    return m_Blockchoice;
}

void SubsystemReference::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& SubsystemReference::GetTemplateblock() const
{
    return m_Templateblock;
}

void SubsystemReference::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& SubsystemReference::GetMemberblocks() const
{
    return m_Memberblocks;
}

void SubsystemReference::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& SubsystemReference::GetPermissions() const
{
    return m_Permissions;
}

void SubsystemReference::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& SubsystemReference::GetErrorfcn() const
{
    return m_Errorfcn;
}

void SubsystemReference::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& SubsystemReference::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void SubsystemReference::SetPermithierarchicalresolution(
    const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& SubsystemReference::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void SubsystemReference::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& SubsystemReference::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void SubsystemReference::SetShowsubsystemreinitializeports(
    const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& SubsystemReference::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void SubsystemReference::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& SubsystemReference::GetScheduleas() const
{
    return m_Scheduleas;
}

void SubsystemReference::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& SubsystemReference::GetPartitionname() const
{
    return m_Partitionname;
}

void SubsystemReference::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& SubsystemReference::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void SubsystemReference::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& SubsystemReference::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void SubsystemReference::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& SubsystemReference::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void SubsystemReference::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& SubsystemReference::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void SubsystemReference::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& SubsystemReference::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void SubsystemReference::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& SubsystemReference::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void SubsystemReference::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& SubsystemReference::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void SubsystemReference::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& SubsystemReference::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void SubsystemReference::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& SubsystemReference::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void SubsystemReference::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& SubsystemReference::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void SubsystemReference::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& SubsystemReference::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void SubsystemReference::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& SubsystemReference::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void SubsystemReference::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& SubsystemReference::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void SubsystemReference::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& SubsystemReference::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void SubsystemReference::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& SubsystemReference::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void SubsystemReference::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& SubsystemReference::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void SubsystemReference::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& SubsystemReference::GetVariant() const { return m_Variant; }

void SubsystemReference::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& SubsystemReference::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void SubsystemReference::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& SubsystemReference::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void SubsystemReference::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& SubsystemReference::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void SubsystemReference::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& SubsystemReference::GetVariantchoices() const
{
    return m_Variantchoices;
}

void SubsystemReference::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& SubsystemReference::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void SubsystemReference::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& SubsystemReference::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void SubsystemReference::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& SubsystemReference::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void SubsystemReference::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& SubsystemReference::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void SubsystemReference::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& SubsystemReference::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void SubsystemReference::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& SubsystemReference::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void SubsystemReference::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& SubsystemReference::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void SubsystemReference::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string&
SubsystemReference::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void SubsystemReference::SetTreatasgroupedwhenpropagatingvariantconditions(
    const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& SubsystemReference::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void SubsystemReference::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& SubsystemReference::GetLatency() const { return m_Latency; }

void SubsystemReference::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& SubsystemReference::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void SubsystemReference::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
