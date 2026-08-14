// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef MATRIXCONCATENATE_H
#define MATRIXCONCATENATE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT MatrixConcatenate
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  MatrixConcatenate();

  /** Default Destructor */
  ~MatrixConcatenate();

  const std::string& GetNuminputs() const;
  void SetNuminputs(const std::string& value);

  const std::string& GetMode() const;
  void SetMode(const std::string& value);

  const std::string& GetConcatenatedimension() const;
  void SetConcatenatedimension(const std::string& value);

private:
  std::string m_Numinputs;

  std::string m_Mode;

  std::string m_Concatenatedimension;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // MATRIXCONCATENATE_H
