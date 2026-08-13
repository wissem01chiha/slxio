#include "DGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

DGain::DGain() {}

DGain::~DGain() {}

const std::string& DGain::GetShowportlabels() const
{
    return m_Showportlabels;
}

void DGain::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& DGain::GetBlockchoice() const
{
    return m_Blockchoice;
}

void DGain::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& DGain::GetTemplateblock() const
{
    return m_Templateblock;
}

void DGain::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& DGain::GetMemberblocks() const
{
    return m_Memberblocks;
}

void DGain::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& DGain::GetPermissions() const
{
    return m_Permissions;
}

void DGain::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& DGain::GetErrorfcn() const
{
    return m_Errorfcn;
}

void DGain::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& DGain::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void DGain::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& DGain::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void DGain::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& DGain::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void DGain::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& DGain::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void DGain::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& DGain::GetScheduleas() const
{
    return m_Scheduleas;
}

void DGain::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& DGain::GetPartitionname() const
{
    return m_Partitionname;
}

void DGain::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& DGain::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void DGain::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& DGain::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void DGain::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& DGain::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void DGain::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& DGain::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void DGain::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& DGain::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void DGain::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& DGain::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void DGain::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& DGain::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void DGain::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& DGain::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void DGain::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& DGain::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void DGain::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& DGain::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void DGain::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& DGain::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void DGain::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& DGain::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void DGain::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& DGain::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void DGain::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& DGain::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void DGain::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& DGain::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void DGain::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& DGain::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void DGain::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& DGain::GetVariant() const
{
    return m_Variant;
}

void DGain::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& DGain::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void DGain::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& DGain::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void DGain::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& DGain::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void DGain::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& DGain::GetVariantchoices() const
{
    return m_Variantchoices;
}

void DGain::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& DGain::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void DGain::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& DGain::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void DGain::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& DGain::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void DGain::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& DGain::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void DGain::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& DGain::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void DGain::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& DGain::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void DGain::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& DGain::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void DGain::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& DGain::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void DGain::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& DGain::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void DGain::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& DGain::GetLatency() const
{
    return m_Latency;
}

void DGain::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& DGain::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void DGain::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
