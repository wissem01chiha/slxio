// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef CFUNCTION_H
#define CFUNCTION_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT CFunction
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  CFunction();

  /** Default Destructor */
  ~CFunction();

  const std::string& GetOutputcode() const;
  void SetOutputcode(const std::string& value);

  const std::string& GetStartcode() const;
  void SetStartcode(const std::string& value);

  const std::string& GetInitializeconditionscode() const;
  void SetInitializeconditionscode(const std::string& value);

  const std::string& GetTerminatecode() const;
  void SetTerminatecode(const std::string& value);

  const std::string& GetCodegenusessimcustomcode() const;
  void SetCodegenusessimcustomcode(const std::string& value);

  const std::string& GetGeneratecodeasis() const;
  void SetGeneratecodeasis(const std::string& value);

  const std::string& GetCodegenoutputcode() const;
  void SetCodegenoutputcode(const std::string& value);

  const std::string& GetCodegenstartcode() const;
  void SetCodegenstartcode(const std::string& value);

  const std::string& GetCodegeninitializeconditionscode() const;
  void SetCodegeninitializeconditionscode(const std::string& value);

  const std::string& GetCodegenterminatecode() const;
  void SetCodegenterminatecode(const std::string& value);

  const std::string& GetPortspecwidgetparam() const;
  void SetPortspecwidgetparam(const std::string& value);

  const std::string& GetSymbolspec() const;
  void SetSymbolspec(const std::string& value);

  const std::string& GetAdditionaltypes() const;
  void SetAdditionaltypes(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetSimcustomheaderfile() const;
  void SetSimcustomheaderfile(const std::string& value);

  const std::string& GetSimcustomsourcefile() const;
  void SetSimcustomsourcefile(const std::string& value);

  const std::string& GetCustomcodesettinglocation() const;
  void SetCustomcodesettinglocation(const std::string& value);

  const std::string& GetSimcustomlibraries() const;
  void SetSimcustomlibraries(const std::string& value);

  const std::string& GetSimcustomsearchdirectory() const;
  void SetSimcustomsearchdirectory(const std::string& value);

  const std::string& GetCustomheaderfile() const;
  void SetCustomheaderfile(const std::string& value);

  const std::string& GetCustomsourcefile() const;
  void SetCustomsourcefile(const std::string& value);

  const std::string& GetCustomlibraries() const;
  void SetCustomlibraries(const std::string& value);

  const std::string& GetCustomsearchdirectory() const;
  void SetCustomsearchdirectory(const std::string& value);

  const std::string& GetSimcustomdefines() const;
  void SetSimcustomdefines(const std::string& value);

  const std::string& GetSimcustomcompilerflags() const;
  void SetSimcustomcompilerflags(const std::string& value);

  const std::string& GetSimcustomlinkerflags() const;
  void SetSimcustomlinkerflags(const std::string& value);

  const std::string& GetCustomcodeismultiinstantiable() const;
  void SetCustomcodeismultiinstantiable(const std::string& value);

  const std::string& GetCustomdefines() const;
  void SetCustomdefines(const std::string& value);

  const std::string& GetCustomcompilerflags() const;
  void SetCustomcompilerflags(const std::string& value);

  const std::string& GetCustomlinkerflags() const;
  void SetCustomlinkerflags(const std::string& value);

private:
  std::string m_Outputcode;

  std::string m_Startcode;

  std::string m_Initializeconditionscode;

  std::string m_Terminatecode;

  std::string m_Codegenusessimcustomcode;

  std::string m_Generatecodeasis;

  std::string m_Codegenoutputcode;

  std::string m_Codegenstartcode;

  std::string m_Codegeninitializeconditionscode;

  std::string m_Codegenterminatecode;

  std::string m_Portspecwidgetparam;

  std::string m_Symbolspec;

  std::string m_Additionaltypes;

  std::string m_Sampletime;

  std::string m_Simcustomheaderfile;

  std::string m_Simcustomsourcefile;

  std::string m_Customcodesettinglocation;

  std::string m_Simcustomlibraries;

  std::string m_Simcustomsearchdirectory;

  std::string m_Customheaderfile;

  std::string m_Customsourcefile;

  std::string m_Customlibraries;

  std::string m_Customsearchdirectory;

  std::string m_Simcustomdefines;

  std::string m_Simcustomcompilerflags;

  std::string m_Simcustomlinkerflags;

  std::string m_Customcodeismultiinstantiable;

  std::string m_Customdefines;

  std::string m_Customcompilerflags;

  std::string m_Customlinkerflags;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // CFUNCTION_H
