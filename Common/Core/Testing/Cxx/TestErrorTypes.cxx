#include "Doctest.h"
#include "ErrorTypes.h"

TEST_CASE("Error code macro ouput unique values")
{
    CHECK(E_OK == SLXIO_ERROR_CODE(E_INFO, 0x00, 0x00, 0x00));
    CHECK(E_MSG_TOO_LARGE != E_PATH_TOO_LONG);
    CHECK(E_GET_CWD_FAIL != E_EOF);
}

TEST_CASE("Error Code Print")
{
    PrintError(E_OK);
    PrintError(E_FOPEN_FAIL);
}