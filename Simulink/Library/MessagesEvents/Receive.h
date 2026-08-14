// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef RECEIVE_H
#define RECEIVE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "IBlockParameters.h"
#include "IBlockProperties.h"
#include "LibraryECH.h"
#include "PlatformTypes.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

class SLXIO_APIEXPORT Receive
  : public IBlockParameters
  , public IBlockProperties
{
public:
  /** Default Constructor */
  Receive();

  /** Default Destructor */
  ~Receive();

  const std::string& GetUseinternalqueue() const;
  void SetUseinternalqueue(const std::string& value);

  const std::string& GetQueueoverwriting() const;
  void SetQueueoverwriting(const std::string& value);

  const std::string& GetQueuelength() const;
  void SetQueuelength(const std::string& value);

  const std::string& GetQueuetype() const;
  void SetQueuetype(const std::string& value);

  const std::string& GetPriorityorder() const;
  void SetPriorityorder(const std::string& value);

  const std::string& GetShowqueuestatus() const;
  void SetShowqueuestatus(const std::string& value);

  const std::string& GetInitialvalue() const;
  void SetInitialvalue(const std::string& value);

  const std::string& GetValuesourcewhenqueueisempty() const;
  void SetValuesourcewhenqueueisempty(const std::string& value);

  const std::string& GetSampletime() const;
  void SetSampletime(const std::string& value);

private:
  std::string m_Useinternalqueue;

  std::string m_Queueoverwriting;

  std::string m_Queuelength;

  std::string m_Queuetype;

  std::string m_Priorityorder;

  std::string m_Showqueuestatus;

  std::string m_Initialvalue;

  std::string m_Valuesourcewhenqueueisempty;

  std::string m_Sampletime;
};

SLXIO_ABI_NAMESPACE_END
} // namespace slxio

#endif // RECEIVE_H
