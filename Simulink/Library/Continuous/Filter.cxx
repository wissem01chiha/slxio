#include "Filter.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Filter::Filter() {}

Filter::~Filter() {}

const std::string& Filter::GetShowportlabels() const
{
    return m_Showportlabels;
}

void Filter::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& Filter::GetBlockchoice() const
{
    return m_Blockchoice;
}

void Filter::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& Filter::GetTemplateblock() const
{
    return m_Templateblock;
}

void Filter::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& Filter::GetMemberblocks() const
{
    return m_Memberblocks;
}

void Filter::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& Filter::GetPermissions() const
{
    return m_Permissions;
}

void Filter::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& Filter::GetErrorfcn() const
{
    return m_Errorfcn;
}

void Filter::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& Filter::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void Filter::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& Filter::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void Filter::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& Filter::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void Filter::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& Filter::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void Filter::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& Filter::GetScheduleas() const
{
    return m_Scheduleas;
}

void Filter::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& Filter::GetPartitionname() const
{
    return m_Partitionname;
}

void Filter::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& Filter::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void Filter::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& Filter::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void Filter::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& Filter::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void Filter::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& Filter::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void Filter::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& Filter::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void Filter::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& Filter::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void Filter::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& Filter::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void Filter::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& Filter::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void Filter::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& Filter::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void Filter::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& Filter::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void Filter::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& Filter::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void Filter::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& Filter::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void Filter::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& Filter::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void Filter::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& Filter::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void Filter::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& Filter::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void Filter::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& Filter::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void Filter::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& Filter::GetVariant() const
{
    return m_Variant;
}

void Filter::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& Filter::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void Filter::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& Filter::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void Filter::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& Filter::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void Filter::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& Filter::GetVariantchoices() const
{
    return m_Variantchoices;
}

void Filter::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& Filter::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void Filter::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& Filter::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Filter::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Filter::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void Filter::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& Filter::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void Filter::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& Filter::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void Filter::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& Filter::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void Filter::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& Filter::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void Filter::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& Filter::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void Filter::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& Filter::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void Filter::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& Filter::GetLatency() const
{
    return m_Latency;
}

void Filter::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& Filter::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void Filter::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
