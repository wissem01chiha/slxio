#include "doctest.h"
#include "Error.h"

namespace slxio
{

    TEST_CASE("Error codes test")
    {
        const std::error_code error = make_error_code(error_code::InvalidArgument);

        CHECK(error.value() == static_cast<int>(error_code::InvalidArgument));
        CHECK(error.category().name() == std::string("slxio"));
        CHECK(error.message() == "Invalid argument");
        CHECK(make_error_code(error_code::Ok).message() == "Success");
        CHECK(make_error_category().message(-1) == "Unknown error");
    }

}; // namespace slxio