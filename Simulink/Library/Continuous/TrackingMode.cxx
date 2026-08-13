#include "TrackingMode.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TrackingMode::TrackingMode() {}

TrackingMode::~TrackingMode() {}

const std::string& TrackingMode::GetShowportlabels() const
{
    return m_Showportlabels;
}

void TrackingMode::SetShowportlabels(const std::string& value)
{
    m_Showportlabels = value;
}

const std::string& TrackingMode::GetBlockchoice() const
{
    return m_Blockchoice;
}

void TrackingMode::SetBlockchoice(const std::string& value)
{
    m_Blockchoice = value;
}

const std::string& TrackingMode::GetTemplateblock() const
{
    return m_Templateblock;
}

void TrackingMode::SetTemplateblock(const std::string& value)
{
    m_Templateblock = value;
}

const std::string& TrackingMode::GetMemberblocks() const
{
    return m_Memberblocks;
}

void TrackingMode::SetMemberblocks(const std::string& value)
{
    m_Memberblocks = value;
}

const std::string& TrackingMode::GetPermissions() const
{
    return m_Permissions;
}

void TrackingMode::SetPermissions(const std::string& value)
{
    m_Permissions = value;
}

const std::string& TrackingMode::GetErrorfcn() const
{
    return m_Errorfcn;
}

void TrackingMode::SetErrorfcn(const std::string& value)
{
    m_Errorfcn = value;
}

const std::string& TrackingMode::GetPermithierarchicalresolution() const
{
    return m_Permithierarchicalresolution;
}

void TrackingMode::SetPermithierarchicalresolution(const std::string& value)
{
    m_Permithierarchicalresolution = value;
}

const std::string& TrackingMode::GetTreatasatomicunit() const
{
    return m_Treatasatomicunit;
}

void TrackingMode::SetTreatasatomicunit(const std::string& value)
{
    m_Treatasatomicunit = value;
}

const std::string& TrackingMode::GetShowsubsystemreinitializeports() const
{
    return m_Showsubsystemreinitializeports;
}

void TrackingMode::SetShowsubsystemreinitializeports(const std::string& value)
{
    m_Showsubsystemreinitializeports = value;
}

const std::string& TrackingMode::GetMinalgloopoccurrences() const
{
    return m_Minalgloopoccurrences;
}

void TrackingMode::SetMinalgloopoccurrences(const std::string& value)
{
    m_Minalgloopoccurrences = value;
}

const std::string& TrackingMode::GetScheduleas() const
{
    return m_Scheduleas;
}

void TrackingMode::SetScheduleas(const std::string& value)
{
    m_Scheduleas = value;
}

const std::string& TrackingMode::GetPartitionname() const
{
    return m_Partitionname;
}

void TrackingMode::SetPartitionname(const std::string& value)
{
    m_Partitionname = value;
}

const std::string& TrackingMode::GetSystemsampletime() const
{
    return m_Systemsampletime;
}

void TrackingMode::SetSystemsampletime(const std::string& value)
{
    m_Systemsampletime = value;
}

const std::string& TrackingMode::GetSetexecutiondomain() const
{
    return m_Setexecutiondomain;
}

void TrackingMode::SetSetexecutiondomain(const std::string& value)
{
    m_Setexecutiondomain = value;
}

const std::string& TrackingMode::GetExecutiondomaintype() const
{
    return m_Executiondomaintype;
}

void TrackingMode::SetExecutiondomaintype(const std::string& value)
{
    m_Executiondomaintype = value;
}

const std::string& TrackingMode::GetRtwsystemcode() const
{
    return m_Rtwsystemcode;
}

void TrackingMode::SetRtwsystemcode(const std::string& value)
{
    m_Rtwsystemcode = value;
}

const std::string& TrackingMode::GetRtwfcnnameopts() const
{
    return m_Rtwfcnnameopts;
}

void TrackingMode::SetRtwfcnnameopts(const std::string& value)
{
    m_Rtwfcnnameopts = value;
}

const std::string& TrackingMode::GetRtwfcnname() const
{
    return m_Rtwfcnname;
}

void TrackingMode::SetRtwfcnname(const std::string& value)
{
    m_Rtwfcnname = value;
}

const std::string& TrackingMode::GetRtwfilenameopts() const
{
    return m_Rtwfilenameopts;
}

void TrackingMode::SetRtwfilenameopts(const std::string& value)
{
    m_Rtwfilenameopts = value;
}

const std::string& TrackingMode::GetRtwfilename() const
{
    return m_Rtwfilename;
}

void TrackingMode::SetRtwfilename(const std::string& value)
{
    m_Rtwfilename = value;
}

const std::string& TrackingMode::GetFunctioninterfacespec() const
{
    return m_Functioninterfacespec;
}

void TrackingMode::SetFunctioninterfacespec(const std::string& value)
{
    m_Functioninterfacespec = value;
}

const std::string& TrackingMode::GetFunctionwithseparatedata() const
{
    return m_Functionwithseparatedata;
}

void TrackingMode::SetFunctionwithseparatedata(const std::string& value)
{
    m_Functionwithseparatedata = value;
}

const std::string& TrackingMode::GetRtwmemsecfuncinitterm() const
{
    return m_Rtwmemsecfuncinitterm;
}

void TrackingMode::SetRtwmemsecfuncinitterm(const std::string& value)
{
    m_Rtwmemsecfuncinitterm = value;
}

const std::string& TrackingMode::GetRtwmemsecfuncexecute() const
{
    return m_Rtwmemsecfuncexecute;
}

void TrackingMode::SetRtwmemsecfuncexecute(const std::string& value)
{
    m_Rtwmemsecfuncexecute = value;
}

const std::string& TrackingMode::GetRtwmemsecdataconstants() const
{
    return m_Rtwmemsecdataconstants;
}

void TrackingMode::SetRtwmemsecdataconstants(const std::string& value)
{
    m_Rtwmemsecdataconstants = value;
}

const std::string& TrackingMode::GetRtwmemsecdatainternal() const
{
    return m_Rtwmemsecdatainternal;
}

void TrackingMode::SetRtwmemsecdatainternal(const std::string& value)
{
    m_Rtwmemsecdatainternal = value;
}

const std::string& TrackingMode::GetRtwmemsecdataparameters() const
{
    return m_Rtwmemsecdataparameters;
}

void TrackingMode::SetRtwmemsecdataparameters(const std::string& value)
{
    m_Rtwmemsecdataparameters = value;
}

const std::string& TrackingMode::GetIssubsystemvirtual() const
{
    return m_Issubsystemvirtual;
}

void TrackingMode::SetIssubsystemvirtual(const std::string& value)
{
    m_Issubsystemvirtual = value;
}

const std::string& TrackingMode::GetVariant() const
{
    return m_Variant;
}

void TrackingMode::SetVariant(const std::string& value)
{
    m_Variant = value;
}

const std::string& TrackingMode::GetVariantchoicesspecifier() const
{
    return m_Variantchoicesspecifier;
}

void TrackingMode::SetVariantchoicesspecifier(const std::string& value)
{
    m_Variantchoicesspecifier = value;
}

const std::string& TrackingMode::GetVariantchoicesenumeration() const
{
    return m_Variantchoicesenumeration;
}

void TrackingMode::SetVariantchoicesenumeration(const std::string& value)
{
    m_Variantchoicesenumeration = value;
}

const std::string& TrackingMode::GetVariantcontrolvariable() const
{
    return m_Variantcontrolvariable;
}

void TrackingMode::SetVariantcontrolvariable(const std::string& value)
{
    m_Variantcontrolvariable = value;
}

const std::string& TrackingMode::GetVariantchoices() const
{
    return m_Variantchoices;
}

void TrackingMode::SetVariantchoices(const std::string& value)
{
    m_Variantchoices = value;
}

const std::string& TrackingMode::GetVariantcontrolmode() const
{
    return m_Variantcontrolmode;
}

void TrackingMode::SetVariantcontrolmode(const std::string& value)
{
    m_Variantcontrolmode = value;
}

const std::string& TrackingMode::GetVariantcontrol() const
{
    return m_Variantcontrol;
}

void TrackingMode::SetVariantcontrol(const std::string& value)
{
    m_Variantcontrol = value;
}

const std::string& TrackingMode::GetLabelmodeactivechoice() const
{
    return m_Labelmodeactivechoice;
}

void TrackingMode::SetLabelmodeactivechoice(const std::string& value)
{
    m_Labelmodeactivechoice = value;
}

const std::string& TrackingMode::GetVariantactivationtime() const
{
    return m_Variantactivationtime;
}

void TrackingMode::SetVariantactivationtime(const std::string& value)
{
    m_Variantactivationtime = value;
}

const std::string& TrackingMode::GetAllowzerovariantcontrols() const
{
    return m_Allowzerovariantcontrols;
}

void TrackingMode::SetAllowzerovariantcontrols(const std::string& value)
{
    m_Allowzerovariantcontrols = value;
}

const std::string& TrackingMode::GetPropagatevariantconditions() const
{
    return m_Propagatevariantconditions;
}

void TrackingMode::SetPropagatevariantconditions(const std::string& value)
{
    m_Propagatevariantconditions = value;
}

const std::string& TrackingMode::GetAllowflexibleinterface() const
{
    return m_Allowflexibleinterface;
}

void TrackingMode::SetAllowflexibleinterface(const std::string& value)
{
    m_Allowflexibleinterface = value;
}

const std::string& TrackingMode::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
    return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void TrackingMode::SetTreatasgroupedwhenpropagatingvariantconditions(const std::string& value)
{
    m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& TrackingMode::GetReferencedsubsystem() const
{
    return m_Referencedsubsystem;
}

void TrackingMode::SetReferencedsubsystem(const std::string& value)
{
    m_Referencedsubsystem = value;
}

const std::string& TrackingMode::GetLatency() const
{
    return m_Latency;
}

void TrackingMode::SetLatency(const std::string& value)
{
    m_Latency = value;
}

const std::string& TrackingMode::GetAutoframesizecalculation() const
{
    return m_Autoframesizecalculation;
}

void TrackingMode::SetAutoframesizecalculation(const std::string& value)
{
    m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
