#include "Doctest.h"
#include "Status.h"

TEST_CASE("Default constructor Test SLX_OK") {
  Status ec(ErrorCode::SLX_OK);
  CHECK(std::string(ec.toString()) == "Success");
}

TEST_CASE("Construct with ErrorCode") {
  Status ec(ErrorCode::SLX_EIOERR);
  CHECK(std::string(ec.toString()) == std::string("I/O error"));
}

TEST_CASE("toString Test") {

  CHECK(std::string(Status::toString(ErrorCode::SLX_OK)) == "Success");
  CHECK(std::string(Status::toString(ErrorCode::SLX_OK)) == std::string("Success"));
}
