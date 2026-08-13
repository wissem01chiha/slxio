#include "IntegratorIcs.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

IntegratorIcs::IntegratorIcs() {}

IntegratorIcs::~IntegratorIcs() {}

const std::string& IntegratorIcs::GetShowportlabels() const
{
    return m_Showportlabels;
}

void IntegratorIcs::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& IntegratorIcs::GetBlockchoice() const
{
    return m_Blockchoice;
}

void IntegratorIcs::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& IntegratorIcs::GetTemplateblock() const
{
    return m_Templateblock;
}

void IntegratorIcs::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& IntegratorIcs::GetMemberblocks() const
{
    return m_Memberblocks;
}

void IntegratorIcs::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& IntegratorIcs::GetPermissions() const
{
    return m_Permissions;
}

void IntegratorIcs::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& IntegratorIcs::GetErrorfcn() const
{
    return m_Errorfcn;
}

void IntegratorIcs::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& IntegratorIcs::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void IntegratorIcs::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& IntegratorIcs::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void IntegratorIcs::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& IntegratorIcs::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void IntegratorIcs::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& IntegratorIcs::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void IntegratorIcs::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& IntegratorIcs::GetScheduleas() const
{
    return m_Scheduleas;
}

void IntegratorIcs::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& IntegratorIcs::GetPartitionname() const
{
    return m_Partitionname;
}

void IntegratorIcs::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& IntegratorIcs::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void IntegratorIcs::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& IntegratorIcs::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void IntegratorIcs::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& IntegratorIcs::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void IntegratorIcs::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& IntegratorIcs::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void IntegratorIcs::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& IntegratorIcs::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void IntegratorIcs::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& IntegratorIcs::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void IntegratorIcs::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& IntegratorIcs::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void IntegratorIcs::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& IntegratorIcs::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void IntegratorIcs::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& IntegratorIcs::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void IntegratorIcs::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& IntegratorIcs::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void IntegratorIcs::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& IntegratorIcs::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void IntegratorIcs::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& IntegratorIcs::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void IntegratorIcs::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& IntegratorIcs::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void IntegratorIcs::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& IntegratorIcs::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void IntegratorIcs::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& IntegratorIcs::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void IntegratorIcs::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& IntegratorIcs::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void IntegratorIcs::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& IntegratorIcs::GetVariant() const
{
    return m_Variant;
}

void IntegratorIcs::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& IntegratorIcs::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void IntegratorIcs::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& IntegratorIcs::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void IntegratorIcs::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& IntegratorIcs::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void IntegratorIcs::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& IntegratorIcs::GetVariantchoices() const
{
    return m_Variantchoices;
}

void IntegratorIcs::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& IntegratorIcs::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void IntegratorIcs::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& IntegratorIcs::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void IntegratorIcs::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& IntegratorIcs::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void IntegratorIcs::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& IntegratorIcs::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void IntegratorIcs::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& IntegratorIcs::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void IntegratorIcs::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& IntegratorIcs::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void IntegratorIcs::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& IntegratorIcs::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void IntegratorIcs::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& IntegratorIcs::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void IntegratorIcs::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& IntegratorIcs::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void IntegratorIcs::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& IntegratorIcs::GetLatency() const
{
    return m_Latency;
}

void IntegratorIcs::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& IntegratorIcs::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void IntegratorIcs::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
