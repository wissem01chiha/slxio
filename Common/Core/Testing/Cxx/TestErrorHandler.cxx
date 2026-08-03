#include "ErrorCode.h"
#include "ErrorHandler.h"
#include "slxDoctest.h"
#include "slxLibuv.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Set and Get last error")
{
  ErrorHandler eh;
  eh.SetLastError(E_INVALID_ARGUMENT);
  CHECK(eh.GetLastError() == E_INVALID_ARGUMENT);
  CHECK(std::string(eh.GetLastErrorMessage()) == "Invalid argument passed to function");
}

TEST_CASE("Get error message for known SLXIO code")
{
  CHECK(std::string(ErrorHandler::GetErrorMessage(E_FILE_NOT_FOUND)) == "File not found");
  CHECK(std::string(ErrorHandler::GetErrorMessage(E_CONFIG_ALREADY_ACTIVE)) ==
    "Configuration is already active");
}

TEST_CASE("Get error message for unknown SLXIO code")
{
  int unknownCode = 1999;
  std::string msg = ErrorHandler::GetErrorMessage(unknownCode);
  CHECK(msg.find("unknown") != std::string::npos);
}

TEST_CASE("Get error message for libzip code")
{
  int zipCode = 18;
  std::string msg = ErrorHandler::GetErrorMessage(zipCode);
  CHECK(msg.find("Invalid argument") != std::string::npos);
}

TEST_CASE("Get error message for libuv code")
{
  int uvCode = UV_EINVAL;
  std::string msg = ErrorHandler::GetErrorMessage(uvCode);
  CHECK(msg.find("invalid") != std::string::npos);
}

TEST_CASE("Print error message functions")
{
  ErrorHandler eh;
  eh.SetLastError(E_FILE_OPEN_FAIL);
  CHECK(eh.PrintLastErrorMessage() > 0);
  CHECK(eh.PrintfLastErrorMessage("Last error: %s\n") > 0);
}

SLXIO_ABI_NAMESPACE_END
};