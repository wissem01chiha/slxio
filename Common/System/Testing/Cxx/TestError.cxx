#include "Doctest.h"
#include "Error.h"

TEST_CASE("Default constructor Test OK") {
  Error ec;
  CHECK(std::string(ec.toString()) == std::string("OK"));
}

TEST_CASE("Construct with ErrorCode") {
  Error ec(ErrorCode::SLX_ERR_OPEN);
  CHECK(std::string(ec.toString()) == std::string("SLX_ERR_OPEN"));
}

TEST_CASE("toString Test") {

  CHECK(std::string(Error::toString(ErrorCode::SLX_ERR_DECOMPRESS)) ==
        "SLX_ERR_DECOMPRESS");
  CHECK(std::string(Error::toString(ErrorCode::Ok)) ==
        std::string("OK"));
}
