#include "IGain.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IGain::IGain() {}

IGain::~IGain() {}

const std::string& IGain::GetShowportlabels() const
{
    return m_Showportlabels;
}

void IGain::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& IGain::GetBlockchoice() const
{
    return m_Blockchoice;
}

void IGain::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& IGain::GetTemplateblock() const
{
    return m_Templateblock;
}

void IGain::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& IGain::GetMemberblocks() const
{
    return m_Memberblocks;
}

void IGain::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& IGain::GetPermissions() const
{
    return m_Permissions;
}

void IGain::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& IGain::GetErrorfcn() const
{
    return m_Errorfcn;
}

void IGain::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& IGain::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void IGain::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& IGain::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void IGain::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& IGain::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void IGain::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& IGain::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void IGain::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& IGain::GetScheduleas() const
{
    return m_Scheduleas;
}

void IGain::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& IGain::GetPartitionname() const
{
    return m_Partitionname;
}

void IGain::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& IGain::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void IGain::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& IGain::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void IGain::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& IGain::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void IGain::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& IGain::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void IGain::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& IGain::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void IGain::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& IGain::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void IGain::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& IGain::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void IGain::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& IGain::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void IGain::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& IGain::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void IGain::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& IGain::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void IGain::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& IGain::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void IGain::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& IGain::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void IGain::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& IGain::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void IGain::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& IGain::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void IGain::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& IGain::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void IGain::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& IGain::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void IGain::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& IGain::GetVariant() const
{
    return m_Variant;
}

void IGain::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& IGain::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void IGain::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& IGain::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void IGain::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& IGain::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void IGain::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& IGain::GetVariantchoices() const
{
    return m_Variantchoices;
}

void IGain::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& IGain::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void IGain::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& IGain::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void IGain::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& IGain::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void IGain::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& IGain::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void IGain::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& IGain::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void IGain::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& IGain::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void IGain::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& IGain::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void IGain::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& IGain::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void IGain::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& IGain::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void IGain::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& IGain::GetLatency() const
{
    return m_Latency;
}

void IGain::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& IGain::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void IGain::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
