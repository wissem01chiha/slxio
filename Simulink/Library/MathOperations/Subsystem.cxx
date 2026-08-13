#include "Subsystem.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Subsystem::Subsystem() {}

Subsystem::~Subsystem() {}

const std::string& Subsystem::GetShowportlabels() const
{
    return m_Showportlabels;
}

void Subsystem::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& Subsystem::GetBlockchoice() const
{
    return m_Blockchoice;
}

void Subsystem::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& Subsystem::GetTemplateblock() const
{
    return m_Templateblock;
}

void Subsystem::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& Subsystem::GetMemberblocks() const
{
    return m_Memberblocks;
}

void Subsystem::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& Subsystem::GetPermissions() const
{
    return m_Permissions;
}

void Subsystem::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& Subsystem::GetErrorfcn() const
{
    return m_Errorfcn;
}

void Subsystem::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& Subsystem::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void Subsystem::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& Subsystem::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void Subsystem::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& Subsystem::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void Subsystem::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& Subsystem::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void Subsystem::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& Subsystem::GetScheduleas() const
{
    return m_Scheduleas;
}

void Subsystem::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& Subsystem::GetPartitionname() const
{
    return m_Partitionname;
}

void Subsystem::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& Subsystem::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void Subsystem::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& Subsystem::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void Subsystem::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& Subsystem::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void Subsystem::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& Subsystem::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void Subsystem::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& Subsystem::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void Subsystem::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& Subsystem::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void Subsystem::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& Subsystem::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void Subsystem::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& Subsystem::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void Subsystem::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& Subsystem::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void Subsystem::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& Subsystem::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void Subsystem::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& Subsystem::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void Subsystem::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& Subsystem::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void Subsystem::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& Subsystem::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void Subsystem::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& Subsystem::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void Subsystem::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& Subsystem::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void Subsystem::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& Subsystem::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void Subsystem::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& Subsystem::GetVariant() const
{
    return m_Variant;
}

void Subsystem::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& Subsystem::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void Subsystem::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& Subsystem::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void Subsystem::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& Subsystem::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void Subsystem::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& Subsystem::GetVariantchoices() const
{
    return m_Variantchoices;
}

void Subsystem::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& Subsystem::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void Subsystem::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& Subsystem::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Subsystem::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Subsystem::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void Subsystem::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& Subsystem::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void Subsystem::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& Subsystem::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void Subsystem::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& Subsystem::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void Subsystem::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& Subsystem::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void Subsystem::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& Subsystem::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void Subsystem::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& Subsystem::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void Subsystem::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& Subsystem::GetLatency() const
{
    return m_Latency;
}

void Subsystem::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& Subsystem::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void Subsystem::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
