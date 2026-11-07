#include "Doctest.h"
#include "ErrorCode.h"
#include "ErrorCategory.h"

namespace slxio
{

    TEST_CASE("Error codes use the category and messages")
    {
        const std::error_code error = make_error_code(ErrorCode::InvalidArgument);

        CHECK(error.value() == static_cast<int>(ErrorCode::InvalidArgument));
        CHECK(error.category().name() == std::string("slxio"));
        CHECK(error.message() == "Invalid argument");
        CHECK(make_error_code(ErrorCode::Ok).message() == "Success");
        CHECK(ErrCategory().message(-1) == "Unknown error");
    }

}  // namespace slxio