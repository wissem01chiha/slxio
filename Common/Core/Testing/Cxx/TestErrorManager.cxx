#include "Doctest.h"
#include "ErrorManager.h"
#include "ErrorType.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Singleton Constructor GetInstance Test") {

  CHECK_NOTHROW(ErrorManager::GetInstance());
}

TEST_CASE("SetBufferSize Test") {

  CHECK_NOTHROW(ErrorManager::GetInstance().SetBufferSize(1024));
}

TEST_CASE("SetResult And GetLastResult Test") {
  ErrorManager &manager = ErrorManager::GetInstance();

  manager.SetResult(E_INVALID_ARGUMENT);

  CHECK(manager.GetLastResult() == E_INVALID_ARGUMENT);
}

TEST_CASE("GetLastWarningResult Test") {
  ErrorManager &manager = ErrorManager::GetInstance();

  manager.SetResult(E_DEFAULT_VALUE_USED);

  CHECK(manager.GetLastWarningResult() == E_DEFAULT_VALUE_USED);
}

TEST_CASE("GetLastFatalResult Test") {
  ErrorManager &manager = ErrorManager::GetInstance();

  manager.SetResult(E_INVALID_ARGUMENT);

  CHECK(manager.GetLastFatalResult() == E_INVALID_ARGUMENT);
}

TEST_CASE("GetBuffer Test") {
  ErrorManager &manager = ErrorManager::GetInstance();

  manager.SetResult(E_INVALID_ARGUMENT);

  auto buffer = manager.GetBuffer();

  CHECK_FALSE(buffer.empty());
}

SLXIO_ABI_NAMESPACE_END