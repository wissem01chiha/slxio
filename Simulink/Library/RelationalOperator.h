// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RELATIONALOPERATOR_H
#define RELATIONALOPERATOR_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT RelationalOperator final
{
public:
  /** Default Constructor */
  RelationalOperator();

  /** Get the OperatorCode */
  Float32 GetOperatorCode() const;

  /** Set the OperatorCode */
  void SetOperatorCode(Float32 value);

  /** Default Destructor */
  ~RelationalOperator();

private:
  Float32 OperatorCode;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // RELATIONALOPERATOR_H
