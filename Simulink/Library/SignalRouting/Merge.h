// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MERGE_H
#define MERGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Merge
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Merge();

  /** Default Destructor */
  ~Merge();

  const std::string& GetInputs() const;
  void SetInputs(const std::string& value);

  const std::string& GetInitialoutput() const;
  void SetInitialoutput(const std::string& value);

  const std::string& GetAllowunequalinputportwidths() const;
  void SetAllowunequalinputportwidths(const std::string& value);

  const std::string& GetInputportoffsets() const;
  void SetInputportoffsets(const std::string& value);

private:
  std::string m_Inputs;

  std::string m_Initialoutput;

  std::string m_Allowunequalinputportwidths;

  std::string m_Inputportoffsets;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MERGE_H
