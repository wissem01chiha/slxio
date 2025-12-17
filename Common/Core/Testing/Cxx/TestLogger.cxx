#include "Doctest.h"
#include "slxLogger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("slxLogger Constructor Test") {

  slxLogger &slxLogger = slxLogger::getInstance();
  CHECK(&slxLogger != nullptr);
}

TEST_CASE("slxLogger Verbosity Test") {

  slxLogger &slxLogger = slxLogger::getInstance();

  slxLogger.setInternalVerbosity(slxLogger::V_ERROR);
  slxLogger.Log("default internal Error message.");

  slxLogger.Log(slxLogger::VERBOSITY_2, "verbosity 2 message.");
  slxLogger.Log(slxLogger::VERBOSITY_4, "verbosity 4 message.");
}

TEST_CASE("slxLogger Enabled Test ") {

  slxLogger &slxLogger = slxLogger::getInstance();
  CHECK(slxLogger.IsEnabled());
}

TEST_CASE("slxLogger file logging Test") {

  slxLogger &slxLogger = slxLogger::getInstance();
  slxLogger.setInternalFileMode(File::Mode::Append);

  const size_t size = 1024;
  char buffer[size];
  CHECK(getcwd(buffer, size) != nullptr);
  CHECK(strlen(buffer) + strlen("test.txt") < size);
  strcat(buffer, "/test.txt");

  slxLogger.logToFile(slxLogger::Verbosity::VERBOSITY_1, buffer, 1,
                   "slxLogger file logging Test :: Hello Message");

  std::ifstream f(buffer);
  CHECK(f.good());
}

TEST_CASE("slxLogger random file logging Test") {

  slxLogger &slxLogger = slxLogger::getInstance();
  slxLogger.setInternalFileMode(File::Mode::Append);
  slxLogger::ErrorCode status_t =
      slxLogger.logToFile(slxLogger::Verbosity::VERBOSITY_1,
                       "slxLogger file logging Test :: Hello Message");
  CHECK(status_t == slxLogger::ErrorCode::Ok);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END