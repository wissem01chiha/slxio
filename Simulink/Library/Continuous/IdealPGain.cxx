#include "IdealPGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IdealPGain::IdealPGain() {}

IdealPGain::~IdealPGain() {}

const std::string& IdealPGain::GetShowportlabels() const
{
    return m_Showportlabels;
}

void IdealPGain::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& IdealPGain::GetBlockchoice() const
{
    return m_Blockchoice;
}

void IdealPGain::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& IdealPGain::GetTemplateblock() const
{
    return m_Templateblock;
}

void IdealPGain::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& IdealPGain::GetMemberblocks() const
{
    return m_Memberblocks;
}

void IdealPGain::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& IdealPGain::GetPermissions() const
{
    return m_Permissions;
}

void IdealPGain::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& IdealPGain::GetErrorfcn() const
{
    return m_Errorfcn;
}

void IdealPGain::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& IdealPGain::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void IdealPGain::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& IdealPGain::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void IdealPGain::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& IdealPGain::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void IdealPGain::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& IdealPGain::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void IdealPGain::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& IdealPGain::GetScheduleas() const
{
    return m_Scheduleas;
}

void IdealPGain::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& IdealPGain::GetPartitionname() const
{
    return m_Partitionname;
}

void IdealPGain::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& IdealPGain::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void IdealPGain::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& IdealPGain::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void IdealPGain::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& IdealPGain::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void IdealPGain::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& IdealPGain::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void IdealPGain::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& IdealPGain::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void IdealPGain::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& IdealPGain::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void IdealPGain::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& IdealPGain::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void IdealPGain::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& IdealPGain::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void IdealPGain::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& IdealPGain::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void IdealPGain::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& IdealPGain::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void IdealPGain::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& IdealPGain::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void IdealPGain::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& IdealPGain::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void IdealPGain::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& IdealPGain::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void IdealPGain::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& IdealPGain::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void IdealPGain::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& IdealPGain::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void IdealPGain::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& IdealPGain::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void IdealPGain::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& IdealPGain::GetVariant() const
{
    return m_Variant;
}

void IdealPGain::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& IdealPGain::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void IdealPGain::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& IdealPGain::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void IdealPGain::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& IdealPGain::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void IdealPGain::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& IdealPGain::GetVariantchoices() const
{
    return m_Variantchoices;
}

void IdealPGain::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& IdealPGain::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void IdealPGain::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& IdealPGain::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void IdealPGain::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& IdealPGain::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void IdealPGain::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& IdealPGain::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void IdealPGain::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& IdealPGain::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void IdealPGain::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& IdealPGain::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void IdealPGain::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& IdealPGain::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void IdealPGain::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& IdealPGain::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void IdealPGain::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& IdealPGain::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void IdealPGain::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& IdealPGain::GetLatency() const
{
    return m_Latency;
}

void IdealPGain::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& IdealPGain::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void IdealPGain::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
