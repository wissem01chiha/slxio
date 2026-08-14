// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef QUEUE_H
#define QUEUE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Queue
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Queue();

  /** Default Destructor */
  ~Queue();

  const std::string& GetOverwriteoldest() const;
  void SetOverwriteoldest(const std::string& value);

  const std::string& GetCapacity() const;
  void SetCapacity(const std::string& value);

  const std::string& GetQueuetype() const;
  void SetQueuetype(const std::string& value);

  const std::string& GetPrioritysource() const;
  void SetPrioritysource(const std::string& value);

  const std::string& GetSortingdirection() const;
  void SetSortingdirection(const std::string& value);

  const std::string& GetEntityarrivalsource() const;
  void SetEntityarrivalsource(const std::string& value);

  const std::string& GetMulticasttag() const;
  void SetMulticasttag(const std::string& value);

  const std::string& GetEntryaction() const;
  void SetEntryaction(const std::string& value);

  const std::string& GetExitaction() const;
  void SetExitaction(const std::string& value);

  const std::string& GetBlockedaction() const;
  void SetBlockedaction(const std::string& value);

  const std::string& GetNumberentitiesdeparted() const;
  void SetNumberentitiesdeparted(const std::string& value);

  const std::string& GetNumentitiesextracted() const;
  void SetNumentitiesextracted(const std::string& value);

  const std::string& GetNumberentitiesinblock() const;
  void SetNumberentitiesinblock(const std::string& value);

  const std::string& GetAveragewait() const;
  void SetAveragewait(const std::string& value);

  const std::string& GetAveragequeuelength() const;
  void SetAveragequeuelength(const std::string& value);

private:
  std::string m_Overwriteoldest;

  std::string m_Capacity;

  std::string m_Queuetype;

  std::string m_Prioritysource;

  std::string m_Sortingdirection;

  std::string m_Entityarrivalsource;

  std::string m_Multicasttag;

  std::string m_Entryaction;

  std::string m_Exitaction;

  std::string m_Blockedaction;

  std::string m_Numberentitiesdeparted;

  std::string m_Numentitiesextracted;

  std::string m_Numberentitiesinblock;

  std::string m_Averagewait;

  std::string m_Averagequeuelength;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // QUEUE_H
