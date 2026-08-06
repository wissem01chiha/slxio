// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ILOGGER_H
#define ILOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "DataType.h"
#include "ILogMessage.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

enum class LogLevelType : UInt8
{
  LOG_OFF = 0x00,
  LOG_FATAL = 0x01,
  LOG_ERROR = 0x02,
  LOG_WARN = 0x03,
  LOG_INFO = 0x04,
  LOG_DEBUG = 0x05,
  LOG_VERBOSE = 0x06
};

/**
 * @brief Defines the interface for logger implementations.
 *
 * ILogger provides a common abstraction for logging backends.
 * Concrete implementations may write log messages to the console,
 * files, databases, network services, or other destinations.
 */
class SLXIO_APIEXPORT ILogger : public Object
{
public:
  virtual ~ILogger() = default;

  /* Some Logger may need an init step */
  virtual void Init(){};

  /** Logs a message. */
  virtual void Log(const ILogMessage& msg) = 0;

  /** Sets the current logging level. */
  virtual void SetLogLevel(LogLevelType level) = 0;

  /** Returns the current logging level. */
  virtual LogLevelType GetLogLevel() const = 0;

  /* Returns Logger default registred type,inherited classes should
  define their custom type and return it via this function, if there they intend to
  override the default type  */
  DataType GetDataType() const override { return DataType::SLXIO_TYPE_GENERIC_LOGGER; };

  /* Append ILogMessage Based Object in a stream way to the ILogger based object */
  ILogger& operator<<(const ILogMessage& msg)
  {
    this->Log(msg);
    return *this;
  }
};

SLXIO_ABI_NAMESPACE_END
};

#endif // ILOGGER_H