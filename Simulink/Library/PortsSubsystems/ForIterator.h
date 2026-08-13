// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef FORITERATOR_H
#define FORITERATOR_H

#include "ABINamespaceMacro.h"
#include "LibraryECH.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT ForIterator : public IBlockParameters, public IBlockProperties
{
public:
  /** Default Constructor */
  ForIterator();

  /** Default Destructor */
  ~ForIterator();

  const std::string& GetResetstates() const;
  void SetResetstates(const std::string& value);

  const std::string& GetIterationsource() const;
  void SetIterationsource(const std::string& value);

  const std::string& GetIterationlimit() const;
  void SetIterationlimit(const std::string& value);

  const std::string& GetExternalincrement() const;
  void SetExternalincrement(const std::string& value);

  const std::string& GetShowiterationport() const;
  void SetShowiterationport(const std::string& value);

  const std::string& GetIndexmode() const;
  void SetIndexmode(const std::string& value);

  const std::string& GetIterationvariabledatatype() const;
  void SetIterationvariabledatatype(const std::string& value);

private:

  std::string m_Resetstates;

  std::string m_Iterationsource;

  std::string m_Iterationlimit;

  std::string m_Externalincrement;

  std::string m_Showiterationport;

  std::string m_Indexmode;

  std::string m_Iterationvariabledatatype;

};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // FORITERATOR_H
