// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef DIRECTLOOKUPTABLEND_H
#define DIRECTLOOKUPTABLEND_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT DirectLookupTableND : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  DirectLookupTableND();

  /** Default Destructor */
  ~DirectLookupTableND();

  const std::string& GetNumberoftabledimensions() const;
  void SetNumberoftabledimensions(const std::string& value);

  const std::string& GetInputsselectthisobjectfromtable() const;
  void SetInputsselectthisobjectfromtable(const std::string& value);

  const std::string& GetTableisinput() const;
  void SetTableisinput(const std::string& value);

  const std::string& GetTable() const;
  void SetTable(const std::string& value);

  const std::string& GetDiagnosticforoutofrangeinput() const;
  void SetDiagnosticforoutofrangeinput(const std::string& value);

  const std::string& GetRemoveprotectioninput() const;
  void SetRemoveprotectioninput(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

  const std::string& GetTablemin() const;
  void SetTablemin(const std::string& value);

  const std::string& GetTablemax() const;
  void SetTablemax(const std::string& value);

  const std::string& GetTabledatatypestr() const;
  void SetTabledatatypestr(const std::string& value);

  const std::string& GetLockscale() const;
  void SetLockscale(const std::string& value);

private:

  std::string m_Numberoftabledimensions;

  std::string m_Inputsselectthisobjectfromtable;

  std::string m_Tableisinput;

  std::string m_Table;

  std::string m_Diagnosticforoutofrangeinput;

  std::string m_Removeprotectioninput;

  std::string m_Sampletime;

  std::string m_Tablemin;

  std::string m_Tablemax;

  std::string m_Tabledatatypestr;

  std::string m_Lockscale;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // DIRECTLOOKUPTABLEND_H
