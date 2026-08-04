// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef LOGGER_H
#define LOGGER_H

#include "AbiNamespaceMacro.h"
#include "ApiExportMacro.h"
#include "Config.h"
#include "PlatformTypes.h"
#include "CorePCH.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @class Logger
 * @brief Main logging handler class.
 */
class SLXIO_APIEXPORT Logger final
{
public:
  /** Logging verbosity levels.*/
  enum MessageLevelType : UInt8
  {
    LOG_OFF = 0x00,
    LOG_FATAL = 0x01,
    LOG_ERROR = 0x02,
    LOG_WARN = 0x03,
    LOG_INFO = 0x04,
    LOG_DEBUG = 0x05,
    LOG_VERBOSE = 0x06
  };

  /** Type of the message, either a standard log or a trace.*/
  enum MessageType : UInt8
  {
    LOG = 0x00,
    TRACE = 0x01
  };

  /** File logging access modes.*/
  enum LogFileModeType
  {
    TRUNCATE,
    APPEND,
    READ,
    WRITE
  };

  /** Data structure for external applications that log information using the
   * API.*/
  typedef struct
  {
    UInt32 appId;
    std::string appName;
    std::string appDescription;
  } ApplicationInfoType;

  /** Container for logging message metadata.*/
  typedef struct
  {
    MessageType type;
    MessageLevelType logLevel;
    ApplicationInfoType appId;
    UInt8 argCount;
  } MessageInfoType;

  /** Container for a logging message with its metadata.*/
  typedef struct
  {
    MessageInfoType info;
    std::vector<std::string> messages;
  } LogMessage;

  /** Initialize the logger with command line arguments.*/
  static ReturnType Init(int argc, char** argv);

  /** Get the singleton instance of the logger.*/
  static Logger& GetInstance();

  /** Send a log message with metadata and message fragments.*/
  ReturnType SendLogMessage(
    const MessageInfoType& logInfo, const std::vector<std::string>& logData);

  /** Print all logging messages to standard output.*/
  void Print();

  /**
   * Write logging messages to a file created in the current working directory.
   * To change the logging directory use SetLogDirectoryPath
   */
  ReturnType WriteToFile(const std::string& filename);

  /** Overload of WriteToFile for compatibility with C-style strings.*/
  ReturnType WriteToFile(const char* filename);

  /** Write logging messages to a randomly generated file. */
  ReturnType WriteToFile(void);

  /** Set the internal logging level.*/
  void SetLogLevel(MessageLevelType newLogLevel);

  /** Get the current logging level.*/
  MessageLevelType GetLogLevel(void);

  /** Set the file logging mode. */
  void SetLogFileMode(LogFileModeType mode);

  /** Get the default file logging mode.*/
  LogFileModeType GetDefaultLogFileMode();

  /** Get the current file logging mode.*/
  LogFileModeType GetLogFileMode();

  /** Reset logging level to the default */
  void ResetLogLevelType();

  /** Get log messages from a given application by ID */
  std::vector<LogMessage> GetFiltredLogMessage(UInt32 Id);

  /** Get log messages from a given application by name. */
  std::vector<LogMessage> GetFiltredLogMessage(const char* Name);

  /** Check if logging is enabled. */
  bool IsEnabled();

  /** Clear all buffered log messages. */
  void ClearBuffer();

  /** Get the logging directory path. */
  std::string GetLogDirectoryPath(void);

  /** Set the logging directory path.*/
  void SetLogDirectoryPath(const std::string pathname);

  /** Get the default logging directory path. */
  std::string GetDefaultLogDirectoryPath(void);

private:
#if SLXIO_SLOG
  /** Helper function for slog logging library */
  int ToSlogLevel(Logger::MessageLevelType level);
#endif // SLXIO_SLOG

#if SLXIO_LOGURU
  /** Helper function for loguru logging library */
  int Logger::ToLoguruLevel(Logger::MessageLevelType level);
#endif // SLXIO_LOGURU

  /** Helper function for formatting output logs */
  std::string FormatLogEntry(const LogMessage& entry, const std::string& msg);

  /** Default Constructor */
  Logger();
  Logger(const Logger&) = delete;
  ~Logger() = default;
  Logger::MessageLevelType InternalVerbosityLevel;
  Logger::MessageLevelType DefaultInternalVerbosityLevel = Logger::MessageLevelType::LOG_OFF;
  Logger::LogFileModeType FileModeType;
  Logger::LogFileModeType DefaultFileModeType = Logger::LogFileModeType::WRITE;
  std::vector<LogMessage> LogBuffer;
  std::string LogDirectoryPath;
};

SLXIO_ABI_NAMESPACE_END
};

#endif // LOGGER_H
