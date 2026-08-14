#include "UserDefinedFunctions.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

UserDefinedFunctions::UserDefinedFunctions() {}

UserDefinedFunctions::~UserDefinedFunctions() {}

const std::string& UserDefinedFunctions::GetShowportlabels() const
{
  return m_Showportlabels;
}

void UserDefinedFunctions::SetShowportlabels(const std::string& value)
{
  m_Showportlabels = value;
}

const std::string& UserDefinedFunctions::GetBlockchoice() const
{
  return m_Blockchoice;
}

void UserDefinedFunctions::SetBlockchoice(const std::string& value)
{
  m_Blockchoice = value;
}

const std::string& UserDefinedFunctions::GetTemplateblock() const
{
  return m_Templateblock;
}

void UserDefinedFunctions::SetTemplateblock(const std::string& value)
{
  m_Templateblock = value;
}

const std::string& UserDefinedFunctions::GetMemberblocks() const
{
  return m_Memberblocks;
}

void UserDefinedFunctions::SetMemberblocks(const std::string& value)
{
  m_Memberblocks = value;
}

const std::string& UserDefinedFunctions::GetPermissions() const
{
  return m_Permissions;
}

void UserDefinedFunctions::SetPermissions(const std::string& value)
{
  m_Permissions = value;
}

const std::string& UserDefinedFunctions::GetErrorfcn() const
{
  return m_Errorfcn;
}

void UserDefinedFunctions::SetErrorfcn(const std::string& value)
{
  m_Errorfcn = value;
}

const std::string& UserDefinedFunctions::GetPermithierarchicalresolution() const
{
  return m_Permithierarchicalresolution;
}

void UserDefinedFunctions::SetPermithierarchicalresolution(
  const std::string& value)
{
  m_Permithierarchicalresolution = value;
}

const std::string& UserDefinedFunctions::GetTreatasatomicunit() const
{
  return m_Treatasatomicunit;
}

void UserDefinedFunctions::SetTreatasatomicunit(const std::string& value)
{
  m_Treatasatomicunit = value;
}

const std::string& UserDefinedFunctions::GetShowsubsystemreinitializeports()
  const
{
  return m_Showsubsystemreinitializeports;
}

void UserDefinedFunctions::SetShowsubsystemreinitializeports(
  const std::string& value)
{
  m_Showsubsystemreinitializeports = value;
}

const std::string& UserDefinedFunctions::GetMinalgloopoccurrences() const
{
  return m_Minalgloopoccurrences;
}

void UserDefinedFunctions::SetMinalgloopoccurrences(const std::string& value)
{
  m_Minalgloopoccurrences = value;
}

const std::string& UserDefinedFunctions::GetScheduleas() const
{
  return m_Scheduleas;
}

void UserDefinedFunctions::SetScheduleas(const std::string& value)
{
  m_Scheduleas = value;
}

const std::string& UserDefinedFunctions::GetPartitionname() const
{
  return m_Partitionname;
}

void UserDefinedFunctions::SetPartitionname(const std::string& value)
{
  m_Partitionname = value;
}

const std::string& UserDefinedFunctions::GetSystemsampletime() const
{
  return m_Systemsampletime;
}

void UserDefinedFunctions::SetSystemsampletime(const std::string& value)
{
  m_Systemsampletime = value;
}

const std::string& UserDefinedFunctions::GetSetexecutiondomain() const
{
  return m_Setexecutiondomain;
}

void UserDefinedFunctions::SetSetexecutiondomain(const std::string& value)
{
  m_Setexecutiondomain = value;
}

const std::string& UserDefinedFunctions::GetExecutiondomaintype() const
{
  return m_Executiondomaintype;
}

void UserDefinedFunctions::SetExecutiondomaintype(const std::string& value)
{
  m_Executiondomaintype = value;
}

const std::string& UserDefinedFunctions::GetRtwsystemcode() const
{
  return m_Rtwsystemcode;
}

void UserDefinedFunctions::SetRtwsystemcode(const std::string& value)
{
  m_Rtwsystemcode = value;
}

const std::string& UserDefinedFunctions::GetRtwfcnnameopts() const
{
  return m_Rtwfcnnameopts;
}

void UserDefinedFunctions::SetRtwfcnnameopts(const std::string& value)
{
  m_Rtwfcnnameopts = value;
}

const std::string& UserDefinedFunctions::GetRtwfcnname() const
{
  return m_Rtwfcnname;
}

void UserDefinedFunctions::SetRtwfcnname(const std::string& value)
{
  m_Rtwfcnname = value;
}

const std::string& UserDefinedFunctions::GetRtwfilenameopts() const
{
  return m_Rtwfilenameopts;
}

void UserDefinedFunctions::SetRtwfilenameopts(const std::string& value)
{
  m_Rtwfilenameopts = value;
}

const std::string& UserDefinedFunctions::GetRtwfilename() const
{
  return m_Rtwfilename;
}

void UserDefinedFunctions::SetRtwfilename(const std::string& value)
{
  m_Rtwfilename = value;
}

const std::string& UserDefinedFunctions::GetFunctioninterfacespec() const
{
  return m_Functioninterfacespec;
}

void UserDefinedFunctions::SetFunctioninterfacespec(const std::string& value)
{
  m_Functioninterfacespec = value;
}

const std::string& UserDefinedFunctions::GetFunctionwithseparatedata() const
{
  return m_Functionwithseparatedata;
}

void UserDefinedFunctions::SetFunctionwithseparatedata(const std::string& value)
{
  m_Functionwithseparatedata = value;
}

const std::string& UserDefinedFunctions::GetRtwmemsecfuncinitterm() const
{
  return m_Rtwmemsecfuncinitterm;
}

void UserDefinedFunctions::SetRtwmemsecfuncinitterm(const std::string& value)
{
  m_Rtwmemsecfuncinitterm = value;
}

const std::string& UserDefinedFunctions::GetRtwmemsecfuncexecute() const
{
  return m_Rtwmemsecfuncexecute;
}

void UserDefinedFunctions::SetRtwmemsecfuncexecute(const std::string& value)
{
  m_Rtwmemsecfuncexecute = value;
}

const std::string& UserDefinedFunctions::GetRtwmemsecdataconstants() const
{
  return m_Rtwmemsecdataconstants;
}

void UserDefinedFunctions::SetRtwmemsecdataconstants(const std::string& value)
{
  m_Rtwmemsecdataconstants = value;
}

const std::string& UserDefinedFunctions::GetRtwmemsecdatainternal() const
{
  return m_Rtwmemsecdatainternal;
}

void UserDefinedFunctions::SetRtwmemsecdatainternal(const std::string& value)
{
  m_Rtwmemsecdatainternal = value;
}

const std::string& UserDefinedFunctions::GetRtwmemsecdataparameters() const
{
  return m_Rtwmemsecdataparameters;
}

void UserDefinedFunctions::SetRtwmemsecdataparameters(const std::string& value)
{
  m_Rtwmemsecdataparameters = value;
}

const std::string& UserDefinedFunctions::GetIssubsystemvirtual() const
{
  return m_Issubsystemvirtual;
}

void UserDefinedFunctions::SetIssubsystemvirtual(const std::string& value)
{
  m_Issubsystemvirtual = value;
}

const std::string& UserDefinedFunctions::GetVariant() const
{
  return m_Variant;
}

void UserDefinedFunctions::SetVariant(const std::string& value)
{
  m_Variant = value;
}

const std::string& UserDefinedFunctions::GetVariantchoicesspecifier() const
{
  return m_Variantchoicesspecifier;
}

void UserDefinedFunctions::SetVariantchoicesspecifier(const std::string& value)
{
  m_Variantchoicesspecifier = value;
}

const std::string& UserDefinedFunctions::GetVariantchoicesenumeration() const
{
  return m_Variantchoicesenumeration;
}

void UserDefinedFunctions::SetVariantchoicesenumeration(
  const std::string& value)
{
  m_Variantchoicesenumeration = value;
}

const std::string& UserDefinedFunctions::GetVariantcontrolvariable() const
{
  return m_Variantcontrolvariable;
}

void UserDefinedFunctions::SetVariantcontrolvariable(const std::string& value)
{
  m_Variantcontrolvariable = value;
}

const std::string& UserDefinedFunctions::GetVariantchoices() const
{
  return m_Variantchoices;
}

void UserDefinedFunctions::SetVariantchoices(const std::string& value)
{
  m_Variantchoices = value;
}

const std::string& UserDefinedFunctions::GetVariantcontrolmode() const
{
  return m_Variantcontrolmode;
}

void UserDefinedFunctions::SetVariantcontrolmode(const std::string& value)
{
  m_Variantcontrolmode = value;
}

const std::string& UserDefinedFunctions::GetVariantcontrol() const
{
  return m_Variantcontrol;
}

void UserDefinedFunctions::SetVariantcontrol(const std::string& value)
{
  m_Variantcontrol = value;
}

const std::string& UserDefinedFunctions::GetLabelmodeactivechoice() const
{
  return m_Labelmodeactivechoice;
}

void UserDefinedFunctions::SetLabelmodeactivechoice(const std::string& value)
{
  m_Labelmodeactivechoice = value;
}

const std::string& UserDefinedFunctions::GetVariantactivationtime() const
{
  return m_Variantactivationtime;
}

void UserDefinedFunctions::SetVariantactivationtime(const std::string& value)
{
  m_Variantactivationtime = value;
}

const std::string& UserDefinedFunctions::GetAllowzerovariantcontrols() const
{
  return m_Allowzerovariantcontrols;
}

void UserDefinedFunctions::SetAllowzerovariantcontrols(const std::string& value)
{
  m_Allowzerovariantcontrols = value;
}

const std::string& UserDefinedFunctions::GetPropagatevariantconditions() const
{
  return m_Propagatevariantconditions;
}

void UserDefinedFunctions::SetPropagatevariantconditions(
  const std::string& value)
{
  m_Propagatevariantconditions = value;
}

const std::string& UserDefinedFunctions::GetAllowflexibleinterface() const
{
  return m_Allowflexibleinterface;
}

void UserDefinedFunctions::SetAllowflexibleinterface(const std::string& value)
{
  m_Allowflexibleinterface = value;
}

const std::string&
UserDefinedFunctions::GetTreatasgroupedwhenpropagatingvariantconditions() const
{
  return m_Treatasgroupedwhenpropagatingvariantconditions;
}

void UserDefinedFunctions::SetTreatasgroupedwhenpropagatingvariantconditions(
  const std::string& value)
{
  m_Treatasgroupedwhenpropagatingvariantconditions = value;
}

const std::string& UserDefinedFunctions::GetReferencedsubsystem() const
{
  return m_Referencedsubsystem;
}

void UserDefinedFunctions::SetReferencedsubsystem(const std::string& value)
{
  m_Referencedsubsystem = value;
}

const std::string& UserDefinedFunctions::GetLatency() const
{
  return m_Latency;
}

void UserDefinedFunctions::SetLatency(const std::string& value)
{
  m_Latency = value;
}

const std::string& UserDefinedFunctions::GetAutoframesizecalculation() const
{
  return m_Autoframesizecalculation;
}

void UserDefinedFunctions::SetAutoframesizecalculation(const std::string& value)
{
  m_Autoframesizecalculation = value;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
