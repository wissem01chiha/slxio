#include "AntiWindup.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

AntiWindup::AntiWindup() {}

AntiWindup::~AntiWindup() {}

const std::string& AntiWindup::GetShowportlabels() const
{
    return m_Showportlabels;
}

void AntiWindup::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& AntiWindup::GetBlockchoice() const
{
    return m_Blockchoice;
}

void AntiWindup::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& AntiWindup::GetTemplateblock() const
{
    return m_Templateblock;
}

void AntiWindup::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& AntiWindup::GetMemberblocks() const
{
    return m_Memberblocks;
}

void AntiWindup::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& AntiWindup::GetPermissions() const
{
    return m_Permissions;
}

void AntiWindup::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& AntiWindup::GetErrorfcn() const
{
    return m_Errorfcn;
}

void AntiWindup::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& AntiWindup::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void AntiWindup::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& AntiWindup::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void AntiWindup::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& AntiWindup::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void AntiWindup::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& AntiWindup::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void AntiWindup::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& AntiWindup::GetScheduleas() const
{
    return m_Scheduleas;
}

void AntiWindup::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& AntiWindup::GetPartitionname() const
{
    return m_Partitionname;
}

void AntiWindup::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& AntiWindup::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void AntiWindup::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& AntiWindup::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void AntiWindup::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& AntiWindup::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void AntiWindup::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& AntiWindup::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void AntiWindup::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& AntiWindup::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void AntiWindup::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& AntiWindup::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void AntiWindup::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& AntiWindup::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void AntiWindup::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& AntiWindup::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void AntiWindup::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& AntiWindup::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void AntiWindup::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& AntiWindup::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void AntiWindup::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& AntiWindup::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void AntiWindup::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& AntiWindup::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void AntiWindup::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& AntiWindup::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void AntiWindup::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& AntiWindup::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void AntiWindup::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& AntiWindup::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void AntiWindup::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& AntiWindup::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void AntiWindup::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& AntiWindup::GetVariant() const
{
    return m_Variant;
}

void AntiWindup::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& AntiWindup::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void AntiWindup::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& AntiWindup::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void AntiWindup::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& AntiWindup::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void AntiWindup::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& AntiWindup::GetVariantchoices() const
{
    return m_Variantchoices;
}

void AntiWindup::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& AntiWindup::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void AntiWindup::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& AntiWindup::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void AntiWindup::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& AntiWindup::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void AntiWindup::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& AntiWindup::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void AntiWindup::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& AntiWindup::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void AntiWindup::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& AntiWindup::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void AntiWindup::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& AntiWindup::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void AntiWindup::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& AntiWindup::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void AntiWindup::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& AntiWindup::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void AntiWindup::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& AntiWindup::GetLatency() const
{
    return m_Latency;
}

void AntiWindup::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& AntiWindup::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void AntiWindup::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
