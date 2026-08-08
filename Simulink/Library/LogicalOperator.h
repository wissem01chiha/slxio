// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LOGICALOPERATOR_H
#define LOGICALOPERATOR_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT LogicalOperator final
{
public:
  /** Default Constructor */
  LogicalOperator();

  /** Get the OperatorCode */
  Float32 GetOperatorCode() const;

  /** Set the OperatorCode */
  void SetOperatorCode(Float32 value);

  /** Default Destructor */
  ~LogicalOperator();

private:
  Float32 OperatorCode;
};

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio

#endif // LOGICALOPERATOR_H
