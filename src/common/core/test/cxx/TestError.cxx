#include "doctest.h"
#include "Error.h"

namespace slxio
{

    TEST_CASE("Error codes test")
    {
        const std::error_code error = make_error_code(ErrorCode::InvalidArgument);

        CHECK(error.value() == static_cast<int>(ErrorCode::InvalidArgument));
        CHECK(error.category().name() == std::string("slxio"));
        CHECK(error.message() == "invalid argument");
        CHECK(make_error_code(ErrorCode::ParameterNotFound).message() == "parameter not found");
        CHECK(make_error_code(ErrorCode::InvalidParameter).message() ==
              "parameter has an invalid value");
        CHECK(make_error_code(ErrorCode::NotImplemented).message() ==
              "operation is not implemented");
        CHECK(make_error_code(ErrorCode::Ok).message() == "success");
        CHECK(make_error_category().message(-1) == "unknown error");
    }

}; // namespace slxio