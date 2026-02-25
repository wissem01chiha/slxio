#include "Doctest.h"
#include "Platform.h"
#include "Status.h"

TEST_CASE("Default constructor Test SLX_OK")
{
  Status ec(ErrorCode::SLX_OK);
  CHECK(std::string(ec.toString()) == "Success");
}

TEST_CASE("Construct with ErrorCode")
{
  Status ec(ErrorCode::SLX_EIOERR);
  CHECK(std::string(ec.toString()) == "I/O error");
}

TEST_CASE("toString with ErrorCode overload")
{
  CHECK(std::string(Status::toString(ErrorCode::SLX_OK)) == "Success");
  CHECK(std::string(Status::toString(ErrorCode::SLX_EIOERR)) == "I/O error");
}

TEST_CASE("toString with int overload - libuv error")
{

  const char* msg = Status::toString(UV_EINVAL);
  CHECK(std::string(msg) == "invalid argument");
}

TEST_CASE("toString with int overload - custom error")
{

  const char* msg = Status::toString(static_cast<int>(ErrorCode::SLX_EIOERR));
  CHECK(std::string(msg) == "I/O error");
}

TEST_CASE("toString with int overload - unknown error")
{

  const char* msg = Status::toString(99999);
  CHECK(std::string(msg) == "");
}

TEST_CASE("Status::log prints libuv error")
{

  std::ostringstream oss;
  auto old_buf = std::cerr.rdbuf(oss.rdbuf());

  Status::log(UV_EINVAL);

  std::cerr.rdbuf(old_buf);

  std::string output = oss.str();
#ifdef PLATFORM_WINDOWS
  CHECK(output == "[ErrorCode -4071] invalid argument\n");
#else
  CHECK(output == "[ErrorCode -22] invalid argument\n");
#endif
}

TEST_CASE("Status::log prints custom error")
{

  std::ostringstream oss;
  auto old_buf = std::cerr.rdbuf(oss.rdbuf());

  Status::log(static_cast<int>(ErrorCode::SLX_EIOERR));

  std::cerr.rdbuf(old_buf);

  std::string output = oss.str();
  CHECK(output == "[ErrorCode 10] I/O error\n");
}
