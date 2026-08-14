#include "Discrete.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

Discrete::Discrete() {}

Discrete::~Discrete() {}

const std::string& Discrete::GetShowportlabels() const
{
    return m_Showportlabels;
}

void Discrete::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& Discrete::GetBlockchoice() const { return m_Blockchoice; }

void Discrete::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& Discrete::GetTemplateblock() const
{
    return m_Templateblock;
}

void Discrete::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& Discrete::GetMemberblocks() const { return m_Memberblocks; }

void Discrete::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& Discrete::GetPermissions() const { return m_Permissions; }

void Discrete::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& Discrete::GetErrorfcn() const { return m_Errorfcn; }

void Discrete::SetErrorfcn(const std::string& value) { m_Errorfcn = value; }

const std::string& Discrete::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void Discrete::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& Discrete::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void Discrete::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& Discrete::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void Discrete::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& Discrete::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void Discrete::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& Discrete::GetScheduleas() const { return m_Scheduleas; }

void Discrete::SetScheduleas(const std::string& value) { m_Scheduleas = value; }

const std::string& Discrete::GetPartitionname() const
{
    return m_Partitionname;
}

void Discrete::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& Discrete::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void Discrete::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& Discrete::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void Discrete::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& Discrete::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void Discrete::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& Discrete::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void Discrete::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& Discrete::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void Discrete::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& Discrete::GetRtwfcnname() const { return m_Rtwfcnname; }

void Discrete::SetRtwfcnname(const std::string& value) { m_Rtwfcnname = value; }

const std::string& Discrete::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void Discrete::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& Discrete::GetRtwfilename() const { return m_Rtwfilename; }

void Discrete::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& Discrete::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void Discrete::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& Discrete::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void Discrete::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& Discrete::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void Discrete::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& Discrete::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void Discrete::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& Discrete::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void Discrete::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& Discrete::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void Discrete::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& Discrete::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void Discrete::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& Discrete::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void Discrete::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& Discrete::GetVariant() const { return m_Variant; }

void Discrete::SetVariant(const std::string& value) { m_Variant = value; }

const std::string& Discrete::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void Discrete::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& Discrete::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void Discrete::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& Discrete::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void Discrete::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& Discrete::GetVariantchoices() const
{
    return m_Variantchoices;
}

void Discrete::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& Discrete::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void Discrete::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& Discrete::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Discrete::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Discrete::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void Discrete::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& Discrete::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void Discrete::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& Discrete::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void Discrete::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& Discrete::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void Discrete::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& Discrete::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void Discrete::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string&
Discrete::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void Discrete::SetTreatasgroupedwhenpropagatingvariantconditions(
    const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& Discrete::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void Discrete::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& Discrete::GetLatency() const { return m_Latency; }

void Discrete::SetLatency(const std::string& value) { m_Latency = value; }

const std::string& Discrete::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void Discrete::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
