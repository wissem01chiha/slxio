// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef REPEATINGSEQUENCE_H
#define REPEATINGSEQUENCE_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT RepeatingSequence : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  RepeatingSequence();

  /** Default Destructor */
  ~RepeatingSequence();

  const std::string& GetRepSeqT() const;
  void SetRepSeqT(const std::string& value);

  const std::string& GetRepSeqY() const;
  void SetRepSeqY(const std::string& value);

private:

  std::string m_RepSeqT;

  std::string m_RepSeqY;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // REPEATINGSEQUENCE_H
