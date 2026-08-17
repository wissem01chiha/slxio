#include "LookupTables.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

LookupTables::LookupTables() {}

LookupTables::~LookupTables() {}

const std::string& LookupTables::GetShowportlabels() const
{
    return m_Showportlabels;
}

void LookupTables::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& LookupTables::GetBlockchoice() const
{
    return m_Blockchoice;
}

void LookupTables::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& LookupTables::GetTemplateblock() const
{
    return m_Templateblock;
}

void LookupTables::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& LookupTables::GetMemberblocks() const
{
    return m_Memberblocks;
}

void LookupTables::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& LookupTables::GetPermissions() const
{
    return m_Permissions;
}

void LookupTables::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& LookupTables::GetErrorfcn() const { return m_Errorfcn; }

void LookupTables::SetErrorfcn(const std::string& value) { m_Errorfcn = value; }

const std::string& LookupTables::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void LookupTables::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& LookupTables::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void LookupTables::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& LookupTables::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void LookupTables::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& LookupTables::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void LookupTables::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& LookupTables::GetScheduleas() const { return m_Scheduleas; }

void LookupTables::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& LookupTables::GetPartitionname() const
{
    return m_Partitionname;
}

void LookupTables::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& LookupTables::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void LookupTables::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& LookupTables::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void LookupTables::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& LookupTables::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void LookupTables::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& LookupTables::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void LookupTables::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& LookupTables::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void LookupTables::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& LookupTables::GetRtwfcnname() const { return m_Rtwfcnname; }

void LookupTables::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& LookupTables::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void LookupTables::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& LookupTables::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void LookupTables::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& LookupTables::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void LookupTables::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& LookupTables::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void LookupTables::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& LookupTables::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void LookupTables::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& LookupTables::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void LookupTables::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& LookupTables::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void LookupTables::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& LookupTables::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void LookupTables::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& LookupTables::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void LookupTables::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& LookupTables::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void LookupTables::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& LookupTables::GetVariant() const { return m_Variant; }

void LookupTables::SetVariant(const std::string& value) { m_Variant = value; }

const std::string& LookupTables::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void LookupTables::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& LookupTables::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void LookupTables::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& LookupTables::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void LookupTables::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& LookupTables::GetVariantchoices() const
{
    return m_Variantchoices;
}

void LookupTables::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& LookupTables::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void LookupTables::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& LookupTables::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void LookupTables::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& LookupTables::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void LookupTables::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& LookupTables::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void LookupTables::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& LookupTables::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void LookupTables::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& LookupTables::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void LookupTables::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& LookupTables::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void LookupTables::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string&
LookupTables::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void LookupTables::SetTreatasgroupedwhenpropagatingvariantconditions(
    const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& LookupTables::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void LookupTables::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& LookupTables::GetLatency() const { return m_Latency; }

void LookupTables::SetLatency(const std::string& value) { m_Latency = value; }

const std::string& LookupTables::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void LookupTables::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
