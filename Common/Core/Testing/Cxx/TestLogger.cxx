#include "Doctest.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Logger Constructor Test")
{

  Logger& Logger = Logger::GetInstance();
  CHECK(&Logger != nullptr);
}

TEST_CASE("Logger Verbosity Test")
{

  Logger& Logger = Logger::GetInstance();

  Logger.SetInternalVerbosity(Logger::V_ERROR);
  Logger.log("default internal Error message.");

  Logger.log(Logger::V_INFO, "verbosity 2 message.");
  Logger.log(Logger::V_INFO, "verbosity 4 message.");
}

TEST_CASE("Logger Enabled Test ")
{

  Logger& Logger = Logger::GetInstance();
  CHECK(Logger.IsEnabled());
}

TEST_CASE("Logger file logging Test")
{

  Logger& Logger = Logger::GetInstance();
  Logger.setInternalFileMode(File::Mode::Append);

  const size_t size = 1024;
  char buffer[size];
  CHECK(getcwd(buffer, size) != nullptr);
  CHECK(strlen(buffer) + strlen("test.txt") < size);
  strcat(buffer, "/test.txt");

  Logger.logToFile(Logger::Verbosity::VERBOSITY_1, buffer, 1,
    "Logger file logging Test :: Hello Message");

  std::ifstream f(buffer);
  CHECK(f.good());
}

TEST_CASE("Logger random file logging Test")
{

  Logger& Logger = Logger::GetInstance();
  Logger.setInternalFileMode(File::Mode::Append);
  ReturnType status_t = Logger.logToFile(Logger::Verbosity::VERBOSITY_1,
    "Logger file logging Test :: Hello Message");
  CHECK(status_t == E_OK);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END