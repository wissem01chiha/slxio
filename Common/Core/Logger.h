// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef __Logger_h__
#define __Logger_h__

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include <ostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Logger
 * @brief Main Logging handler class
 */
class APIEXPORT Logger final
{
public:
  /**
   * Logging Verbosity Levels
   */
  enum MessageLogLevelType : UInt8
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
   * This type describes the type of the message.
   * either a standard logging message or trace message
   * (flow, begin, end, marker, etc.)
   */
  enum MessageType : UInt8
  {
    LOG = 0x00,
    TRACE = 0x01
  };

  /**
   * File access modes.
   */
  enum LogFileModeType
  {
    LOG_FILE_TRUNCATE,
    LOG_FILE_APPEND,
    LOG_FILE_READ,
    LOG_FILE_WRITE
  };

  /**
   * Information about Applications/User regsirted classes/function
   * genarl external code
   */
  typedef struct
  {
    UInt32 appId;
    char appDescription[32];
  } ApplicationIdInfoType;

  /**
   * Initialize the Logger with command line arguments,
   * for old style compatibility with third party logging libs.
   */
  static void Init(int argc, char** argv);

  /**
   * Main logging routine. Call with a message and a MessageLogLevelType level.
   * If no MessageLogLevelType is specified, Logger will use its internal level
   * until explicitly set with setInternalMessageLogLevelType.
   */
  void Log(MessageLogLevelType level, const char* message);

  /**
   * Log a message using the default MessageLogLevelType level.
   */
  void Log(const char* message);

  /**
   * Get the singleton instance of the Logger.
   */
  static Logger& GetInstance();

  /**
   * Set the default internal MessageLogLevelType level.
   */
  void SetLogLevel(MessageLogLevelType level);

  /**
   * Set the default internal MessageLogLevelType level.
   */
  MessageLogLevelType GetLogLevel(void);

  /**
   * Set the default file logging mode.
   */
  void SetLogFileMode(LogFileModeType mode);

  /**
   * Get the default file logging mode
   */
  LogFileModeType GetDefaultLogFileMode();

  /**
   * Append the given message to the given output stream.
   */
  void Print(const char* message, std::ostream& os);

  /**
   * Log to a file with a specific MessageLogLevelType level.
   */
  UInt32 LogToFile(MessageLogLevelType MessageLogLevelType, const char* path,
    unsigned int linenum, const char* message);

  /**
   * Log to a random file generated in the current working directory.
   */
  UInt32 LogToFile(
    MessageLogLevelType MessageLogLevelType, const char* message);

  /**
   * Convert a numeric value to a MessageLogLevelType level.
   */
  static MessageLogLevelType ToMessageLogLevelType(UInt8 value);

  /**
   * Check if logging is enabled at runtime.
   */
  bool IsEnabled();

private:
  Logger();
  Logger(const Logger&) = delete;
  ~Logger() = default;
  Logger::MessageLogLevelType InternalVerbosityLevel;
  Logger::LogFileModeType FileModeType;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* __Logger_h__*/
