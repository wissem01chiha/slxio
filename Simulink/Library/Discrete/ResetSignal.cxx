#include "ResetSignal.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

ResetSignal::ResetSignal() {}

ResetSignal::~ResetSignal() {}

const std::string& ResetSignal::GetShowportlabels() const
{
    return m_Showportlabels;
}

void ResetSignal::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& ResetSignal::GetBlockchoice() const
{
    return m_Blockchoice;
}

void ResetSignal::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& ResetSignal::GetTemplateblock() const
{
    return m_Templateblock;
}

void ResetSignal::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& ResetSignal::GetMemberblocks() const
{
    return m_Memberblocks;
}

void ResetSignal::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& ResetSignal::GetPermissions() const
{
    return m_Permissions;
}

void ResetSignal::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& ResetSignal::GetErrorfcn() const
{
    return m_Errorfcn;
}

void ResetSignal::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& ResetSignal::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void ResetSignal::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& ResetSignal::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void ResetSignal::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& ResetSignal::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void ResetSignal::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& ResetSignal::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void ResetSignal::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& ResetSignal::GetScheduleas() const
{
    return m_Scheduleas;
}

void ResetSignal::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& ResetSignal::GetPartitionname() const
{
    return m_Partitionname;
}

void ResetSignal::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& ResetSignal::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void ResetSignal::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& ResetSignal::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void ResetSignal::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& ResetSignal::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void ResetSignal::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& ResetSignal::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void ResetSignal::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& ResetSignal::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void ResetSignal::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& ResetSignal::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void ResetSignal::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& ResetSignal::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void ResetSignal::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& ResetSignal::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void ResetSignal::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& ResetSignal::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void ResetSignal::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& ResetSignal::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void ResetSignal::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& ResetSignal::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void ResetSignal::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& ResetSignal::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void ResetSignal::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& ResetSignal::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void ResetSignal::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& ResetSignal::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void ResetSignal::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& ResetSignal::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void ResetSignal::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& ResetSignal::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void ResetSignal::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& ResetSignal::GetVariant() const
{
    return m_Variant;
}

void ResetSignal::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& ResetSignal::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void ResetSignal::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& ResetSignal::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void ResetSignal::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& ResetSignal::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void ResetSignal::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& ResetSignal::GetVariantchoices() const
{
    return m_Variantchoices;
}

void ResetSignal::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& ResetSignal::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void ResetSignal::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& ResetSignal::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void ResetSignal::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& ResetSignal::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void ResetSignal::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& ResetSignal::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void ResetSignal::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& ResetSignal::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void ResetSignal::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& ResetSignal::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void ResetSignal::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& ResetSignal::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void ResetSignal::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& ResetSignal::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void ResetSignal::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& ResetSignal::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void ResetSignal::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& ResetSignal::GetLatency() const
{
    return m_Latency;
}

void ResetSignal::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& ResetSignal::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void ResetSignal::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
