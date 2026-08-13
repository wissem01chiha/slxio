// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SEQUENCEVIEWER_H
#define SEQUENCEVIEWER_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT SequenceViewer : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  SequenceViewer();

  /** Default Destructor */
  ~SequenceViewer();

  const std::string& GetVariablesteptimeprecision() const;
  void SetVariablesteptimeprecision(const std::string& value);

  const std::string& GetHistory() const;
  void SetHistory(const std::string& value);

private:

  std::string m_Variablesteptimeprecision;

  std::string m_History;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // SEQUENCEVIEWER_H
