#include "MatlabFunction.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

MatlabFunction::MatlabFunction() {}

MatlabFunction::~MatlabFunction() {}

const std::string& MatlabFunction::GetShowportlabels() const
{
    return m_Showportlabels;
}

void MatlabFunction::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& MatlabFunction::GetBlockchoice() const
{
    return m_Blockchoice;
}

void MatlabFunction::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& MatlabFunction::GetTemplateblock() const
{
    return m_Templateblock;
}

void MatlabFunction::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& MatlabFunction::GetMemberblocks() const
{
    return m_Memberblocks;
}

void MatlabFunction::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& MatlabFunction::GetPermissions() const
{
    return m_Permissions;
}

void MatlabFunction::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& MatlabFunction::GetErrorfcn() const { return m_Errorfcn; }

void MatlabFunction::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& MatlabFunction::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void MatlabFunction::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& MatlabFunction::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void MatlabFunction::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& MatlabFunction::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void MatlabFunction::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& MatlabFunction::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void MatlabFunction::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& MatlabFunction::GetScheduleas() const
{
    return m_Scheduleas;
}

void MatlabFunction::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& MatlabFunction::GetPartitionname() const
{
    return m_Partitionname;
}

void MatlabFunction::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& MatlabFunction::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void MatlabFunction::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& MatlabFunction::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void MatlabFunction::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& MatlabFunction::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void MatlabFunction::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& MatlabFunction::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void MatlabFunction::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& MatlabFunction::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void MatlabFunction::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& MatlabFunction::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void MatlabFunction::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& MatlabFunction::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void MatlabFunction::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& MatlabFunction::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void MatlabFunction::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& MatlabFunction::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void MatlabFunction::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& MatlabFunction::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void MatlabFunction::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& MatlabFunction::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void MatlabFunction::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& MatlabFunction::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void MatlabFunction::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& MatlabFunction::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void MatlabFunction::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& MatlabFunction::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void MatlabFunction::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& MatlabFunction::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void MatlabFunction::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& MatlabFunction::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void MatlabFunction::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& MatlabFunction::GetVariant() const { return m_Variant; }

void MatlabFunction::SetVariant(const std::string& value) { m_Variant = value; }

const std::string& MatlabFunction::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void MatlabFunction::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& MatlabFunction::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void MatlabFunction::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& MatlabFunction::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void MatlabFunction::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& MatlabFunction::GetVariantchoices() const
{
    return m_Variantchoices;
}

void MatlabFunction::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& MatlabFunction::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void MatlabFunction::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& MatlabFunction::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void MatlabFunction::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& MatlabFunction::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void MatlabFunction::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& MatlabFunction::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void MatlabFunction::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& MatlabFunction::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void MatlabFunction::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& MatlabFunction::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void MatlabFunction::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& MatlabFunction::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void MatlabFunction::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string&
MatlabFunction::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void MatlabFunction::SetTreatasgroupedwhenpropagatingvariantconditions(
    const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& MatlabFunction::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void MatlabFunction::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& MatlabFunction::GetLatency() const { return m_Latency; }

void MatlabFunction::SetLatency(const std::string& value) { m_Latency = value; }

const std::string& MatlabFunction::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void MatlabFunction::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
