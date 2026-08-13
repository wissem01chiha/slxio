#include "Passthrough.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Passthrough::Passthrough() {}

Passthrough::~Passthrough() {}

const std::string& Passthrough::GetShowportlabels() const
{
    return m_Showportlabels;
}

void Passthrough::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& Passthrough::GetBlockchoice() const
{
    return m_Blockchoice;
}

void Passthrough::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& Passthrough::GetTemplateblock() const
{
    return m_Templateblock;
}

void Passthrough::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& Passthrough::GetMemberblocks() const
{
    return m_Memberblocks;
}

void Passthrough::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& Passthrough::GetPermissions() const
{
    return m_Permissions;
}

void Passthrough::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& Passthrough::GetErrorfcn() const
{
    return m_Errorfcn;
}

void Passthrough::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& Passthrough::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void Passthrough::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& Passthrough::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void Passthrough::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& Passthrough::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void Passthrough::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& Passthrough::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void Passthrough::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& Passthrough::GetScheduleas() const
{
    return m_Scheduleas;
}

void Passthrough::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& Passthrough::GetPartitionname() const
{
    return m_Partitionname;
}

void Passthrough::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& Passthrough::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void Passthrough::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& Passthrough::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void Passthrough::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& Passthrough::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void Passthrough::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& Passthrough::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void Passthrough::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& Passthrough::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void Passthrough::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& Passthrough::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void Passthrough::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& Passthrough::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void Passthrough::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& Passthrough::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void Passthrough::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& Passthrough::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void Passthrough::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& Passthrough::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void Passthrough::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& Passthrough::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void Passthrough::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& Passthrough::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void Passthrough::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& Passthrough::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void Passthrough::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& Passthrough::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void Passthrough::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& Passthrough::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void Passthrough::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& Passthrough::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void Passthrough::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& Passthrough::GetVariant() const
{
    return m_Variant;
}

void Passthrough::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& Passthrough::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void Passthrough::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& Passthrough::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void Passthrough::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& Passthrough::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void Passthrough::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& Passthrough::GetVariantchoices() const
{
    return m_Variantchoices;
}

void Passthrough::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& Passthrough::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void Passthrough::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& Passthrough::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Passthrough::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Passthrough::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void Passthrough::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& Passthrough::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void Passthrough::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& Passthrough::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void Passthrough::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& Passthrough::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void Passthrough::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& Passthrough::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void Passthrough::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& Passthrough::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void Passthrough::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& Passthrough::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void Passthrough::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& Passthrough::GetLatency() const
{
    return m_Latency;
}

void Passthrough::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& Passthrough::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void Passthrough::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
