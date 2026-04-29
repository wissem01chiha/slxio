// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef Logger_h
#define Logger_h

#include "ABINamespaceMacro.h"
#include "APIExportMacro.h"
#include "PlatformTypes.h"
#include <vector>
#include <string>

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

  /**
   * This type describes the type of the message.
   * either a standard logging message or trace message
   */
  enum MessageType : UInt8
  {
    LOG = 0x00,
    TRACE = 0x01
  };

  /**
   * File logging access modes.
   */
  enum LogFileModeType
  {
    TRUNCATE,
    APPEND,
    READ,
    WRITE
  };

  /**
   * Information about Applications/User  classes/functions
   */
  typedef struct
  {
    UInt32 appId;
    char appDescription[32];
  } ApplicationIdInfoType;

  /**
   * Container data struct about a logging message
   */
  typedef struct
  {
    MessageType type;
    MessageLevelType logLevel;
    ApplicationIdInfoType appId;
    UInt8 argCount;
  } MessageInfoType;

  /**
   * Initialize the Logger with command line arguments,
   * for old style compatibility with third party logging libs.
   */
  static ReturnType Init(int argc, char** argv);

  /**
   * Get the singleton instance of the Logger.
   */
  static Logger& GetInstance();

  /**
   * Main logging routine call with a MessageInfoType metadata struct and
   * a list of message strings. Each entry in logData represents one argument
   * or message fragment (e.g., a plain text message, a numeric value converted
   * to string, or a key/value pair).
   * if no MessageLevelType is specified in logInfo, Logger will use its
   * internal level until explicitly set with SetInternalMessageLogLevelType.
   */
  ReturnType SendMessage(
    const MessageInfoType& logInfo, const std::vector<std::string>& logData);

  /**
   * Print all logging messages to stdio.
   * currently it prints all messages without filtring, this will be enhnaced
   * future version of the librray 
   */
  void Print();
  
  /**
   * Write logging messages to a given file, if the file path 
   * is not valid an error is returned  
   */
  ReturnType WriteToFile(const std::string& path);
  
  /**
   * oveloded of WriteToFile for compatbaily with old style
   */
  ReturnType WriteToFile(const char* path);
  
  /**
   * will write logging information to a random genarted file
   */
  ReturnType WriteToFile();

  /**
   * Set the default internal MessageLevelType level.
   */
  void SetLogLevel(MessageLevelType newLogLevel);

  /**
   * Set the default internal MessageLevelType level.
   */
  MessageLevelType GetLogLevel(void);

  /**
   * Set the default file logging mode.
   */
  void SetLogFileMode(LogFileModeType mode);

  /**
   * Get the default file logging mode
   */
  LogFileModeType GetDefaultLogFileMode();
  
  /**
   * Rest logging level to default one 
   */
  void ResetLogLevelType();

  /**
   * Check if logging is enabled at runtime.
   */
  bool IsEnabled();

  /**
   * Clear all buffered log messages.
   */
  void ClearBuffer();

private:
  struct LogMessage
  {
    MessageInfoType info;
    std::vector<std::string> messages;
  };

  Logger();
  Logger(const Logger&) = delete;
  ~Logger() = default;
  Logger::MessageLevelType InternalVerbosityLevel;
  Logger::MessageLevelType DefaultInternalVerbosityLevel;
  Logger::LogFileModeType FileModeType;
  Logger::LogFileModeType DefaultFileModeType;
  std::vector<LogMessage> LogBuffer;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif /* Logger_h*/
