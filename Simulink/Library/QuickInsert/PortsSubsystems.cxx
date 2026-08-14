#include "PortsSubsystems.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

PortsSubsystems::PortsSubsystems() {}

PortsSubsystems::~PortsSubsystems() {}

const std::string& PortsSubsystems::GetShowportlabels() const
{
  return m_Showportlabels;
}

void PortsSubsystems::SetShowportlabels(const std::string& value)
{
  m_Showportlabels = value;
}

const std::string& PortsSubsystems::GetBlockchoice() const
{
  return m_Blockchoice;
}

void PortsSubsystems::SetBlockchoice(const std::string& value)
{
  m_Blockchoice = value;
}

const std::string& PortsSubsystems::GetTemplateblock() const
{
  return m_Templateblock;
}

void PortsSubsystems::SetTemplateblock(const std::string& value)
{
  m_Templateblock = value;
}

const std::string& PortsSubsystems::GetMemberblocks() const
{
  return m_Memberblocks;
}

void PortsSubsystems::SetMemberblocks(const std::string& value)
{
  m_Memberblocks = value;
}

const std::string& PortsSubsystems::GetPermissions() const
{
  return m_Permissions;
}

void PortsSubsystems::SetPermissions(const std::string& value)
{
  m_Permissions = value;
}

const std::string& PortsSubsystems::GetErrorfcn() const
{
  return m_Errorfcn;
}

void PortsSubsystems::SetErrorfcn(const std::string& value)
{
  m_Errorfcn = value;
}

const std::string& PortsSubsystems::GetPermithierarchicalresolution() const
{
  return m_Permithierarchicalresolution;
}

void PortsSubsystems::SetPermithierarchicalresolution(const std::string& value)
{
  m_Permithierarchicalresolution = value;
}

const std::string& PortsSubsystems::GetTreatasatomicunit() const
{
  return m_Treatasatomicunit;
}

void PortsSubsystems::SetTreatasatomicunit(const std::string& value)
{
  m_Treatasatomicunit = value;
}

const std::string& PortsSubsystems::GetShowsubsystemreinitializeports() const
{
  return m_Showsubsystemreinitializeports;
}

void PortsSubsystems::SetShowsubsystemreinitializeports(
  const std::string& value)
{
  m_Showsubsystemreinitializeports = value;
}

const std::string& PortsSubsystems::GetMinalgloopoccurrences() const
{
  return m_Minalgloopoccurrences;
}

void PortsSubsystems::SetMinalgloopoccurrences(const std::string& value)
{
  m_Minalgloopoccurrences = value;
}

const std::string& PortsSubsystems::GetScheduleas() const
{
  return m_Scheduleas;
}

void PortsSubsystems::SetScheduleas(const std::string& value)
{
  m_Scheduleas = value;
}

const std::string& PortsSubsystems::GetPartitionname() const
{
  return m_Partitionname;
}

void PortsSubsystems::SetPartitionname(const std::string& value)
{
  m_Partitionname = value;
}

const std::string& PortsSubsystems::GetSystemsampletime() const
{
  return m_Systemsampletime;
}

void PortsSubsystems::SetSystemsampletime(const std::string& value)
{
  m_Systemsampletime = value;
}

const std::string& PortsSubsystems::GetSetexecutiondomain() const
{
  return m_Setexecutiondomain;
}

void PortsSubsystems::SetSetexecutiondomain(const std::string& value)
{
  m_Setexecutiondomain = value;
}

const std::string& PortsSubsystems::GetExecutiondomaintype() const
{
  return m_Executiondomaintype;
}

void PortsSubsystems::SetExecutiondomaintype(const std::string& value)
{
  m_Executiondomaintype = value;
}

const std::string& PortsSubsystems::GetRtwsystemcode() const
{
  return m_Rtwsystemcode;
}

void PortsSubsystems::SetRtwsystemcode(const std::string& value)
{
  m_Rtwsystemcode = value;
}

const std::string& PortsSubsystems::GetRtwfcnnameopts() const
{
  return m_Rtwfcnnameopts;
}

void PortsSubsystems::SetRtwfcnnameopts(const std::string& value)
{
  m_Rtwfcnnameopts = value;
}

const std::string& PortsSubsystems::GetRtwfcnname() const
{
  return m_Rtwfcnname;
}

void PortsSubsystems::SetRtwfcnname(const std::string& value)
{
  m_Rtwfcnname = value;
}

const std::string& PortsSubsystems::GetRtwfilenameopts() const
{
  return m_Rtwfilenameopts;
}

void PortsSubsystems::SetRtwfilenameopts(const std::string& value)
{
  m_Rtwfilenameopts = value;
}

const std::string& PortsSubsystems::GetRtwfilename() const
{
  return m_Rtwfilename;
}

void PortsSubsystems::SetRtwfilename(const std::string& value)
{
  m_Rtwfilename = value;
}

const std::string& PortsSubsystems::GetFunctioninterfacespec() const
{
  return m_Functioninterfacespec;
}

void PortsSubsystems::SetFunctioninterfacespec(const std::string& value)
{
  m_Functioninterfacespec = value;
}

const std::string& PortsSubsystems::GetFunctionwithseparatedata() const
{
  return m_Functionwithseparatedata;
}

void PortsSubsystems::SetFunctionwithseparatedata(const std::string& value)
{
  m_Functionwithseparatedata = value;
}

const std::string& PortsSubsystems::GetRtwmemsecfuncinitterm() const
{
  return m_Rtwmemsecfuncinitterm;
}

void PortsSubsystems::SetRtwmemsecfuncinitterm(const std::string& value)
{
  m_Rtwmemsecfuncinitterm = value;
}

const std::string& PortsSubsystems::GetRtwmemsecfuncexecute() const
{
  return m_Rtwmemsecfuncexecute;
}

void PortsSubsystems::SetRtwmemsecfuncexecute(const std::string& value)
{
  m_Rtwmemsecfuncexecute = value;
}

const std::string& PortsSubsystems::GetRtwmemsecdataconstants() const
{
  return m_Rtwmemsecdataconstants;
}

void PortsSubsystems::SetRtwmemsecdataconstants(const std::string& value)
{
  m_Rtwmemsecdataconstants = value;
}

const std::string& PortsSubsystems::GetRtwmemsecdatainternal() const
{
  return m_Rtwmemsecdatainternal;
}

void PortsSubsystems::SetRtwmemsecdatainternal(const std::string& value)
{
  m_Rtwmemsecdatainternal = value;
}

const std::string& PortsSubsystems::GetRtwmemsecdataparameters() const
{
  return m_Rtwmemsecdataparameters;
}

void PortsSubsystems::SetRtwmemsecdataparameters(const std::string& value)
{
  m_Rtwmemsecdataparameters = value;
}

const std::string& PortsSubsystems::GetIssubsystemvirtual() const
{
  return m_Issubsystemvirtual;
}

void PortsSubsystems::SetIssubsystemvirtual(const std::string& value)
{
  m_Issubsystemvirtual = value;
}

const std::string& PortsSubsystems::GetVariant() const
{
  return m_Variant;
}

void PortsSubsystems::SetVariant(const std::string& value)
{
  m_Variant = value;
}

const std::string& PortsSubsystems::GetVariantchoicesspecifier() const
{
  return m_Variantchoicesspecifier;
}

void PortsSubsystems::SetVariantchoicesspecifier(const std::string& value)
{
  m_Variantchoicesspecifier = value;
}

const std::string& PortsSubsystems::GetVariantchoicesenumeration() const
{
  return m_Variantchoicesenumeration;
}

void PortsSubsystems::SetVariantchoicesenumeration(const std::string& value)
{
  m_Variantchoicesenumeration = value;
}

const std::string& PortsSubsystems::GetVariantcontrolvariable() const
{
  return m_Variantcontrolvariable;
}

void PortsSubsystems::SetVariantcontrolvariable(const std::string& value)
{
  m_Variantcontrolvariable = value;
}

const std::string& PortsSubsystems::GetVariantchoices() const
{
  return m_Variantchoices;
}

void PortsSubsystems::SetVariantchoices(const std::string& value)
{
  m_Variantchoices = value;
}

const std::string& PortsSubsystems::GetVariantcontrolmode() const
{
  return m_Variantcontrolmode;
}

void PortsSubsystems::SetVariantcontrolmode(const std::string& value)
{
  m_Variantcontrolmode = value;
}

const std::string& PortsSubsystems::GetVariantcontrol() const
{
  return m_Variantcontrol;
}

void PortsSubsystems::SetVariantcontrol(const std::string& value)
{
  m_Variantcontrol = value;
}

const std::string& PortsSubsystems::GetLabelmodeactivechoice() const
{
  return m_Labelmodeactivechoice;
}

void PortsSubsystems::SetLabelmodeactivechoice(const std::string& value)
{
  m_Labelmodeactivechoice = value;
}

const std::string& PortsSubsystems::GetVariantactivationtime() const
{
  return m_Variantactivationtime;
}

void PortsSubsystems::SetVariantactivationtime(const std::string& value)
{
  m_Variantactivationtime = value;
}

const std::string& PortsSubsystems::GetAllowzerovariantcontrols() const
{
  return m_Allowzerovariantcontrols;
}

void PortsSubsystems::SetAllowzerovariantcontrols(const std::string& value)
{
  m_Allowzerovariantcontrols = value;
}

const std::string& PortsSubsystems::GetPropagatevariantconditions() const
{
  return m_Propagatevariantconditions;
}

void PortsSubsystems::SetPropagatevariantconditions(const std::string& value)
{
  m_Propagatevariantconditions = value;
}

const std::string& PortsSubsystems::GetAllowflexibleinterface() const
{
  return m_Allowflexibleinterface;
}

void PortsSubsystems::SetAllowflexibleinterface(const std::string& value)
{
  m_Allowflexibleinterface = value;
}

const std::string&
PortsSubsystems::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
  return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void PortsSubsystems::SetTreatasgroupedwhenpropagatingvariantconditions(
  const std::string& value)
{
  m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& PortsSubsystems::GetReferencedsubsystem() const
{
  return m_Referencedsubsystem;
}

void PortsSubsystems::SetReferencedsubsystem(const std::string& value)
{
  m_Referencedsubsystem = value;
}

const std::string& PortsSubsystems::GetLatency() const
{
  return m_Latency;
}

void PortsSubsystems::SetLatency(const std::string& value)
{
  m_Latency = value;
}

const std::string& PortsSubsystems::GetAutoframesizecalculation() const
{
  return m_Autoframesizecalculation;
}

void PortsSubsystems::SetAutoframesizecalculation(const std::string& value)
{
  m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
