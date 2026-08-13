#include "PidCompensatorFormula.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PidCompensatorFormula::PidCompensatorFormula() {}

PidCompensatorFormula::~PidCompensatorFormula() {}

const std::string& PidCompensatorFormula::GetShowportlabels() const
{
    return m_Showportlabels;
}

void PidCompensatorFormula::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& PidCompensatorFormula::GetBlockchoice() const
{
    return m_Blockchoice;
}

void PidCompensatorFormula::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& PidCompensatorFormula::GetTemplateblock() const
{
    return m_Templateblock;
}

void PidCompensatorFormula::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& PidCompensatorFormula::GetMemberblocks() const
{
    return m_Memberblocks;
}

void PidCompensatorFormula::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& PidCompensatorFormula::GetPermissions() const
{
    return m_Permissions;
}

void PidCompensatorFormula::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& PidCompensatorFormula::GetErrorfcn() const
{
    return m_Errorfcn;
}

void PidCompensatorFormula::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& PidCompensatorFormula::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void PidCompensatorFormula::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& PidCompensatorFormula::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void PidCompensatorFormula::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& PidCompensatorFormula::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void PidCompensatorFormula::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& PidCompensatorFormula::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void PidCompensatorFormula::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& PidCompensatorFormula::GetScheduleas() const
{
    return m_Scheduleas;
}

void PidCompensatorFormula::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& PidCompensatorFormula::GetPartitionname() const
{
    return m_Partitionname;
}

void PidCompensatorFormula::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& PidCompensatorFormula::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void PidCompensatorFormula::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& PidCompensatorFormula::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void PidCompensatorFormula::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& PidCompensatorFormula::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void PidCompensatorFormula::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& PidCompensatorFormula::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void PidCompensatorFormula::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& PidCompensatorFormula::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void PidCompensatorFormula::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& PidCompensatorFormula::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void PidCompensatorFormula::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& PidCompensatorFormula::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void PidCompensatorFormula::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& PidCompensatorFormula::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void PidCompensatorFormula::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& PidCompensatorFormula::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void PidCompensatorFormula::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& PidCompensatorFormula::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void PidCompensatorFormula::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& PidCompensatorFormula::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void PidCompensatorFormula::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& PidCompensatorFormula::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void PidCompensatorFormula::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& PidCompensatorFormula::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void PidCompensatorFormula::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& PidCompensatorFormula::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void PidCompensatorFormula::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& PidCompensatorFormula::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void PidCompensatorFormula::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& PidCompensatorFormula::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void PidCompensatorFormula::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& PidCompensatorFormula::GetVariant() const
{
    return m_Variant;
}

void PidCompensatorFormula::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& PidCompensatorFormula::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void PidCompensatorFormula::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& PidCompensatorFormula::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void PidCompensatorFormula::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& PidCompensatorFormula::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void PidCompensatorFormula::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& PidCompensatorFormula::GetVariantchoices() const
{
    return m_Variantchoices;
}

void PidCompensatorFormula::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& PidCompensatorFormula::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void PidCompensatorFormula::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& PidCompensatorFormula::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void PidCompensatorFormula::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& PidCompensatorFormula::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void PidCompensatorFormula::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& PidCompensatorFormula::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void PidCompensatorFormula::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& PidCompensatorFormula::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void PidCompensatorFormula::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& PidCompensatorFormula::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void PidCompensatorFormula::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& PidCompensatorFormula::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void PidCompensatorFormula::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& PidCompensatorFormula::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void PidCompensatorFormula::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& PidCompensatorFormula::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void PidCompensatorFormula::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& PidCompensatorFormula::GetLatency() const
{
    return m_Latency;
}

void PidCompensatorFormula::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& PidCompensatorFormula::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void PidCompensatorFormula::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
