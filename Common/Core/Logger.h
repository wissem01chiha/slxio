// Copyright 2025-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef LOGGER_H
#define LOGGER_H

#include "ABINamespace.h"
#include "File.h"
#include "Type.h"
#include <ostream>
#include <sstream>
#include <vector>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

#define LOGGER_USE_SLOG

/**
 * @class Logger
 * @brief Main Logging handler class for the librray
 * it can use multiple verbosity levels and log to file, for dipslaying message
 * we can alternate between many third party utils, slxio support many logging
 * libraries, all othe rthem are enbaled/disbaled via preprocessor directives at
 * compile time, eg: USE_LOGURU, SE_SLOG, if none of these are defined, a basic
 * Logger is used that log to stderr and/or to a file. these are use in order to
 * ease the integration of the librray in existing projects, that use already
 * these lib as default logging utilities, note that one and only one logging
 * library can be used at a time. to make modules inetgation easy, each module
 * can use it spec logging librray all of them can share the same API and define
 * their owen flag support logging in ostream logs Logger::LOG << and as fprintf
 * style todo add a check if the developer try to enable multiple loggers at
 * once
 */
class Logger {
public:
  enum Verbosity {
    V_INVALID = -10,
    V_OFF = -9,
    V_ERROR = -2,
    V_WARNING = -1,
    V_INFO = 0,
    VERBOSITY_0 = 0,
    VERBOSITY_1 = 1,
    VERBOSITY_2 = 2,
    VERBOSITY_3 = 3,
    VERBOSITY_4 = 4,
    VERBOSITY_5 = 5,
    VERBOSITY_6 = 6,
    VERBOSITY_7 = 7,
    VERBOSITY_8 = 8,
    VERBOSITY_9 = 9,
    V_TRACE = 9
  };

  /// @brief initialize the Logger with command line arguments, for
  /// old style compatibility third party logging libs
  static void init(int argc, char **argv);

  /// @brief main logging routine, call with a message and a verbosity level,
  /// 2 overrides if not verbosity is specified Logger will internal level
  /// until an explict setting is done with setInternalVerbosity.
  void log(Verbosity level, const char *message);

  /// @brief log a message given the default set verbosity level
  void log(const char *message);

  /// @brief Log a formatted message with a given verbosity level.
  template <typename... Args> void log(Verbosity level, Args &&...args) {
    if (!IsEnabled())
      return;
    std::ostringstream oss;
    (oss << ... << args);
    this->log(level, oss.str().c_str());
  }
  /// @brief get the singleton instance of the Logger
  static Logger &getInstance();

  /// @brief set the verbosity level for stderr output
  /// everything below this level will not be printed to stderr
  void setStderrVerbosity(Verbosity level);

  /// @brief set the default internal verbosity level
  void setInternalVerbosity(Verbosity level);

  /// @brief set the defual file logging mode
  void setInternalFileMode(File::Mode mode);

  /// @brief appen the given message to the given output stream
  void print(const char *message, std::ostream &os);

  /// @brief log to a file with a specific verbosity level
  ErrorCode logToFile(Verbosity verbosity, const char *path,
                      unsigned int linenum, const char *message);

  /// @brief log to a random file generated in the current working directory
  ErrorCode logToFile(Verbosity verbosity, const char *message);

  static Verbosity toVerbosity(uint8 value);

  static Verbosity toVerbosity(const char *text);

  /// @brief check if logging is enabled, at runtime
  bool IsEnabled();

protected:
  ~Logger() = default;

private:
  Logger();
  Logger(const Logger &) = delete;
  Logger &operator=(const Logger &) = delete;
  Logger::Verbosity internalVerbosityLevel;
  File::Mode filemode;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // Logger_H