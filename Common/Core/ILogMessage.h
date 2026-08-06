// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ILOGMESSAGE_H
#define ILOGMESSAGE_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "Object.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief Base interface for all log message types.
 * ILogMessage defines the common abstraction for data that can be
 * submitted to a logging system. Concrete implementations may
 * represent text messages, diagnostics, numeric arrays, structured
 * data, or domain-specific logging events.
 * The interface decouples log producers from logger implementations,
 * enabling new message types to be introduced without modifying the
 * logging infrastructure.
 */
class SLXIO_APIEXPORT ILogMessage : public Object
{
public:
  virtual ~ILogMessage() = default;

  /* Serialize the message to a string for logging */
  virtual std::string ToString() const = 0;

  /* Implement specific logic to check whether a message is considered empty */
  virtual bool Empty() const = 0;

  /* Concatenate ILogMessage based object to form a new ILogMessage, Combine *this with
   * rhs */
  virtual ILogMessage operator+(const ILogMessage& rhs) const = 0;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ILOGMESSAGE_H