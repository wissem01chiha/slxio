// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef ILOGGER_H
#define ILOGGER_H

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "CorePCH.h"
#include "PlatformTypes.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * 
 */
class SLXIO_APIEXPORT ILogMessage {
public:
  virtual ~ILogMessage() = default;
};


/**
 * 
 */
class SLXIO_APIEXPORT ILogger
{
public:
  enum LogLevelType : UInt8
  {
    LOG_OFF = 0x00,
    LOG_FATAL = 0x01,
    LOG_ERROR = 0x02,
    LOG_WARN = 0x03,
    LOG_INFO = 0x04,
    LOG_DEBUG = 0x05,
    LOG_VERBOSE = 0x06
  };

  virtual ~ILogger() = default;

  virtual void Log(ILogMessage msg) = 0;
  virtual void SetLogLevel(LogLevelType level) = 0;
  virtual LogLevelType GetLogLevel() const = 0;
};

SLXIO_ABI_NAMESPACE_END
};



// class Logger : public ILogger
// {
// public:
  // explicit Logger(std::unique_ptr<IOutputStrategy> strategy)
    // : output(std::move(strategy))
  // {
  // }

  // void Log(LogMessage msg) override { output->Write(msg); }

// private:
  // std::unique_ptr<IOutputStrategy> output;
// };

#endif // ILOGGER_H