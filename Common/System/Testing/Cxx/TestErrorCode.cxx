#include "Doctest.h"
#include "slxErrorCode.h"

TEST_CASE("Default constructor Test OK") {
  slxErrorCode ec;
  CHECK(std::string(ec.toString()) == std::string("OK"));
}

TEST_CASE("Construct with ErrorId") {
  slxErrorCode ec(slxErrorId::SLX_ERR_OPEN);
  CHECK(std::string(ec.toString()) == std::string("SLX_ERR_OPEN"));
}

TEST_CASE("toString Test") {

  CHECK(std::string(slxErrorCode::toString(slxErrorId::SLX_ERR_DECOMPRESS)) ==
        "SLX_ERR_DECOMPRESS");
  CHECK(std::string(slxErrorCode::toString(slxErrorId::Ok)) ==
        std::string("OK"));
}
