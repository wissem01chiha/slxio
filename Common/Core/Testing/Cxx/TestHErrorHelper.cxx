#include "Doctest.h"
#include "HErrorHelper.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("ErrorHandler Sucess Retrun Code")
{

    CHECK(IsSuccess(E_OK));
    CHECK(GetProjectIdentifier(E_OK) == SLXIO_PROJECT);
    CHECK(IsWarning(E_DEFAULT_VALUE_USED));
}

SLXIO_ABI_NAMESPACE_END