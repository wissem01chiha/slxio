#include "Doctest.h"
#include "ErrorHandler.h"
#include "ErrorTypes.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("ErrorHandler Sucess Retrun Code")
{
  CHECK(IsSuccess(E_OK));
}

SLXIO_ABI_NAMESPACE_END