#include "SignalAttributes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SignalAttributes::SignalAttributes() {}

SignalAttributes::~SignalAttributes() {}

const std::string& SignalAttributes::GetShowportlabels() const
{
    return m_Showportlabels;
}

void SignalAttributes::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& SignalAttributes::GetBlockchoice() const
{
    return m_Blockchoice;
}

void SignalAttributes::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& SignalAttributes::GetTemplateblock() const
{
    return m_Templateblock;
}

void SignalAttributes::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& SignalAttributes::GetMemberblocks() const
{
    return m_Memberblocks;
}

void SignalAttributes::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& SignalAttributes::GetPermissions() const
{
    return m_Permissions;
}

void SignalAttributes::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& SignalAttributes::GetErrorfcn() const { return m_Errorfcn; }

void SignalAttributes::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& SignalAttributes::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void SignalAttributes::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& SignalAttributes::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void SignalAttributes::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& SignalAttributes::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void SignalAttributes::SetShowsubsystemreinitializeports(
    const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& SignalAttributes::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void SignalAttributes::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& SignalAttributes::GetScheduleas() const
{
    return m_Scheduleas;
}

void SignalAttributes::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& SignalAttributes::GetPartitionname() const
{
    return m_Partitionname;
}

void SignalAttributes::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& SignalAttributes::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void SignalAttributes::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& SignalAttributes::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void SignalAttributes::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& SignalAttributes::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void SignalAttributes::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& SignalAttributes::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void SignalAttributes::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& SignalAttributes::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void SignalAttributes::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& SignalAttributes::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void SignalAttributes::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& SignalAttributes::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void SignalAttributes::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& SignalAttributes::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void SignalAttributes::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& SignalAttributes::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void SignalAttributes::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& SignalAttributes::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void SignalAttributes::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& SignalAttributes::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void SignalAttributes::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& SignalAttributes::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void SignalAttributes::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& SignalAttributes::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void SignalAttributes::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& SignalAttributes::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void SignalAttributes::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& SignalAttributes::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void SignalAttributes::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& SignalAttributes::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void SignalAttributes::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& SignalAttributes::GetVariant() const { return m_Variant; }

void SignalAttributes::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& SignalAttributes::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void SignalAttributes::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& SignalAttributes::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void SignalAttributes::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& SignalAttributes::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void SignalAttributes::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& SignalAttributes::GetVariantchoices() const
{
    return m_Variantchoices;
}

void SignalAttributes::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& SignalAttributes::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void SignalAttributes::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& SignalAttributes::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void SignalAttributes::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& SignalAttributes::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void SignalAttributes::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& SignalAttributes::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void SignalAttributes::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& SignalAttributes::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void SignalAttributes::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& SignalAttributes::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void SignalAttributes::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& SignalAttributes::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void SignalAttributes::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string&
SignalAttributes::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void SignalAttributes::SetTreatasgroupedwhenpropagatingvariantconditions(
    const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& SignalAttributes::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void SignalAttributes::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& SignalAttributes::GetLatency() const { return m_Latency; }

void SignalAttributes::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& SignalAttributes::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void SignalAttributes::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
