#include "Error.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

Error::Error() {}

Error::~Error() {}

const std::string& Error::GetShowportlabels() const
{
    return m_Showportlabels;
}

void Error::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& Error::GetBlockchoice() const
{
    return m_Blockchoice;
}

void Error::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& Error::GetTemplateblock() const
{
    return m_Templateblock;
}

void Error::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& Error::GetMemberblocks() const
{
    return m_Memberblocks;
}

void Error::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& Error::GetPermissions() const
{
    return m_Permissions;
}

void Error::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& Error::GetErrorfcn() const
{
    return m_Errorfcn;
}

void Error::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& Error::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void Error::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& Error::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void Error::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& Error::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void Error::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& Error::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void Error::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& Error::GetScheduleas() const
{
    return m_Scheduleas;
}

void Error::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& Error::GetPartitionname() const
{
    return m_Partitionname;
}

void Error::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& Error::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void Error::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& Error::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void Error::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& Error::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void Error::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& Error::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void Error::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& Error::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void Error::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& Error::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void Error::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& Error::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void Error::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& Error::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void Error::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& Error::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void Error::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& Error::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void Error::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& Error::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void Error::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& Error::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void Error::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& Error::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void Error::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& Error::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void Error::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& Error::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void Error::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& Error::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void Error::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& Error::GetVariant() const
{
    return m_Variant;
}

void Error::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& Error::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void Error::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& Error::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void Error::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& Error::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void Error::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& Error::GetVariantchoices() const
{
    return m_Variantchoices;
}

void Error::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& Error::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void Error::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& Error::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void Error::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& Error::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void Error::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& Error::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void Error::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& Error::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void Error::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& Error::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void Error::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& Error::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void Error::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& Error::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void Error::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& Error::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void Error::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& Error::GetLatency() const
{
    return m_Latency;
}

void Error::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& Error::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void Error::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
