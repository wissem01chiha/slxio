#include "Doctest.h"
#include "Status.h"

TEST_CASE("Default constructor Test OK") {
  Status ec;
  CHECK(std::string(ec.toString()) == std::string("OK"));
}

TEST_CASE("Construct with ErrorCode") {
  Status ec(ErrorCode::SLX_ERR_OPEN);
  CHECK(std::string(ec.toString()) == std::string("SLX_ERR_OPEN"));
}

TEST_CASE("toString Test") {

  CHECK(std::string(Status::toString(ErrorCode::SLX_ERR_DECOMPRESS)) ==
        "SLX_ERR_DECOMPRESS");
  CHECK(std::string(Status::toString(ErrorCode::Ok)) == std::string("OK"));
}
