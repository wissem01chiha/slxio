// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MATHOPERATIONS_H
#define MATHOPERATIONS_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT MathOperations
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  MathOperations();

  /** Default Destructor */
  ~MathOperations();

  const std::string& GetShowportlabels() const;
  void SetShowportlabels(const std::string& value);

  const std::string& GetBlockchoice() const;
  void SetBlockchoice(const std::string& value);

  const std::string& GetTemplateblock() const;
  void SetTemplateblock(const std::string& value);

  const std::string& GetMemberblocks() const;
  void SetMemberblocks(const std::string& value);

  const std::string& GetPermissions() const;
  void SetPermissions(const std::string& value);

  const std::string& GetErrorfcn() const;
  void SetErrorfcn(const std::string& value);

  const std::string& GetPermithierarchicalresolution() const;
  void SetPermithierarchicalresolution(const std::string& value);

  const std::string& GetTreatasatomicunit() const;
  void SetTreatasatomicunit(const std::string& value);

  const std::string& GetShowsubsystemreinitializeports() const;
  void SetShowsubsystemreinitializeports(const std::string& value);

  const std::string& GetMinalgloopoccurrences() const;
  void SetMinalgloopoccurrences(const std::string& value);

  const std::string& GetScheduleas() const;
  void SetScheduleas(const std::string& value);

  const std::string& GetPartitionname() const;
  void SetPartitionname(const std::string& value);

  const std::string& GetSystemsampletime() const;
  void SetSystemsampletime(const std::string& value);

  const std::string& GetSetexecutiondomain() const;
  void SetSetexecutiondomain(const std::string& value);

  const std::string& GetExecutiondomaintype() const;
  void SetExecutiondomaintype(const std::string& value);

  const std::string& GetRtwsystemcode() const;
  void SetRtwsystemcode(const std::string& value);

  const std::string& GetRtwfcnnameopts() const;
  void SetRtwfcnnameopts(const std::string& value);

  const std::string& GetRtwfcnname() const;
  void SetRtwfcnname(const std::string& value);

  const std::string& GetRtwfilenameopts() const;
  void SetRtwfilenameopts(const std::string& value);

  const std::string& GetRtwfilename() const;
  void SetRtwfilename(const std::string& value);

  const std::string& GetFunctioninterfacespec() const;
  void SetFunctioninterfacespec(const std::string& value);

  const std::string& GetFunctionwithseparatedata() const;
  void SetFunctionwithseparatedata(const std::string& value);

  const std::string& GetRtwmemsecfuncinitterm() const;
  void SetRtwmemsecfuncinitterm(const std::string& value);

  const std::string& GetRtwmemsecfuncexecute() const;
  void SetRtwmemsecfuncexecute(const std::string& value);

  const std::string& GetRtwmemsecdataconstants() const;
  void SetRtwmemsecdataconstants(const std::string& value);

  const std::string& GetRtwmemsecdatainternal() const;
  void SetRtwmemsecdatainternal(const std::string& value);

  const std::string& GetRtwmemsecdataparameters() const;
  void SetRtwmemsecdataparameters(const std::string& value);

  const std::string& GetIssubsystemvirtual() const;
  void SetIssubsystemvirtual(const std::string& value);

  const std::string& GetVariant() const;
  void SetVariant(const std::string& value);

  const std::string& GetVariantchoicesspecifier() const;
  void SetVariantchoicesspecifier(const std::string& value);

  const std::string& GetVariantchoicesenumeration() const;
  void SetVariantchoicesenumeration(const std::string& value);

  const std::string& GetVariantcontrolvariable() const;
  void SetVariantcontrolvariable(const std::string& value);

  const std::string& GetVariantchoices() const;
  void SetVariantchoices(const std::string& value);

  const std::string& GetVariantcontrolmode() const;
  void SetVariantcontrolmode(const std::string& value);

  const std::string& GetVariantcontrol() const;
  void SetVariantcontrol(const std::string& value);

  const std::string& GetLabelmodeactivechoice() const;
  void SetLabelmodeactivechoice(const std::string& value);

  const std::string& GetVariantactivationtime() const;
  void SetVariantactivationtime(const std::string& value);

  const std::string& GetAllowzerovariantcontrols() const;
  void SetAllowzerovariantcontrols(const std::string& value);

  const std::string& GetPropagatevariantconditions() const;
  void SetPropagatevariantconditions(const std::string& value);

  const std::string& GetAllowflexibleinterface() const;
  void SetAllowflexibleinterface(const std::string& value);

  const std::string& GetTreatasgroupedwhenpropagatingvariantconditions() const;
  void SetTreatasgroupedwhenpropagatingvariantconditions(
    const std::string& value);

  const std::string& GetReferencedsubsystem() const;
  void SetReferencedsubsystem(const std::string& value);

  const std::string& GetLatency() const;
  void SetLatency(const std::string& value);

  const std::string& GetAutoframesizecalculation() const;
  void SetAutoframesizecalculation(const std::string& value);

private:
  std::string m_Showportlabels;

  std::string m_Blockchoice;

  std::string m_Templateblock;

  std::string m_Memberblocks;

  std::string m_Permissions;

  std::string m_Errorfcn;

  std::string m_Permithierarchicalresolution;

  std::string m_Treatasatomicunit;

  std::string m_Showsubsystemreinitializeports;

  std::string m_Minalgloopoccurrences;

  std::string m_Scheduleas;

  std::string m_Partitionname;

  std::string m_Systemsampletime;

  std::string m_Setexecutiondomain;

  std::string m_Executiondomaintype;

  std::string m_Rtwsystemcode;

  std::string m_Rtwfcnnameopts;

  std::string m_Rtwfcnname;

  std::string m_Rtwfilenameopts;

  std::string m_Rtwfilename;

  std::string m_Functioninterfacespec;

  std::string m_Functionwithseparatedata;

  std::string m_Rtwmemsecfuncinitterm;

  std::string m_Rtwmemsecfuncexecute;

  std::string m_Rtwmemsecdataconstants;

  std::string m_Rtwmemsecdatainternal;

  std::string m_Rtwmemsecdataparameters;

  std::string m_Issubsystemvirtual;

  std::string m_Variant;

  std::string m_Variantchoicesspecifier;

  std::string m_Variantchoicesenumeration;

  std::string m_Variantcontrolvariable;

  std::string m_Variantchoices;

  std::string m_Variantcontrolmode;

  std::string m_Variantcontrol;

  std::string m_Labelmodeactivechoice;

  std::string m_Variantactivationtime;

  std::string m_Allowzerovariantcontrols;

  std::string m_Propagatevariantconditions;

  std::string m_Allowflexibleinterface;

  std::string m_Treatasgroupedwhenpropagatingvariantconditions;

  std::string m_Referencedsubsystem;

  std::string m_Latency;

  std::string m_Autoframesizecalculation;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MATHOPERATIONS_H
