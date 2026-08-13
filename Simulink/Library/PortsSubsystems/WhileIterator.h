// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef WHILEITERATOR_H
#define WHILEITERATOR_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT WhileIterator : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  WhileIterator();

  /** Default Destructor */
  ~WhileIterator();

  const std::string& GetMaxiters() const;
  void SetMaxiters(const std::string& value);

  const std::string& GetWhileblocktype() const;
  void SetWhileblocktype(const std::string& value);

  const std::string& GetResetstates() const;
  void SetResetstates(const std::string& value);

  const std::string& GetShowiterationport() const;
  void SetShowiterationport(const std::string& value);

  const std::string& GetOutputdatatype() const;
  void SetOutputdatatype(const std::string& value);

private:

  std::string m_Maxiters;

  std::string m_Whileblocktype;

  std::string m_Resetstates;

  std::string m_Showiterationport;

  std::string m_Outputdatatype;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // WHILEITERATOR_H
