#include "SumPid.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

SumPid::SumPid() {}

SumPid::~SumPid() {}

const std::string& SumPid::GetShowportlabels() const
{
    return m_Showportlabels;
}

void SumPid::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& SumPid::GetBlockchoice() const
{
    return m_Blockchoice;
}

void SumPid::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& SumPid::GetTemplateblock() const
{
    return m_Templateblock;
}

void SumPid::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& SumPid::GetMemberblocks() const
{
    return m_Memberblocks;
}

void SumPid::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& SumPid::GetPermissions() const
{
    return m_Permissions;
}

void SumPid::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& SumPid::GetErrorfcn() const
{
    return m_Errorfcn;
}

void SumPid::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& SumPid::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void SumPid::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& SumPid::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void SumPid::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& SumPid::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void SumPid::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& SumPid::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void SumPid::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& SumPid::GetScheduleas() const
{
    return m_Scheduleas;
}

void SumPid::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& SumPid::GetPartitionname() const
{
    return m_Partitionname;
}

void SumPid::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& SumPid::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void SumPid::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& SumPid::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void SumPid::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& SumPid::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void SumPid::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& SumPid::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void SumPid::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& SumPid::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void SumPid::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& SumPid::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void SumPid::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& SumPid::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void SumPid::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& SumPid::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void SumPid::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& SumPid::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void SumPid::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& SumPid::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void SumPid::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& SumPid::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void SumPid::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& SumPid::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void SumPid::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& SumPid::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void SumPid::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& SumPid::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void SumPid::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& SumPid::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void SumPid::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& SumPid::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void SumPid::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& SumPid::GetVariant() const
{
    return m_Variant;
}

void SumPid::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& SumPid::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void SumPid::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& SumPid::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void SumPid::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& SumPid::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void SumPid::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& SumPid::GetVariantchoices() const
{
    return m_Variantchoices;
}

void SumPid::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& SumPid::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void SumPid::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& SumPid::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void SumPid::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& SumPid::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void SumPid::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& SumPid::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void SumPid::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& SumPid::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void SumPid::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& SumPid::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void SumPid::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& SumPid::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void SumPid::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& SumPid::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void SumPid::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& SumPid::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void SumPid::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& SumPid::GetLatency() const
{
    return m_Latency;
}

void SumPid::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& SumPid::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void SumPid::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
