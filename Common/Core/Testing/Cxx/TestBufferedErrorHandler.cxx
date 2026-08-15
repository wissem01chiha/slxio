#include "Doctest.h"
#include "BufferedErrorHandler.h"
#include "Logger.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("BufferedErrorHandler Test") {
    BufferedErrorHandler handler;

    SUBCASE("SetResult stores and updates last result") {
        HError err1 = 42;
        HError err2 = 99;

        handler.SetResult(err1);
        CHECK(handler.GetLastResult() == err1);

        handler.SetResult(err2);
        CHECK(handler.GetLastResult() == err2);

        auto buf = handler.GetBuffer();
        CHECK(buf.size() == 2);
        CHECK(buf[0] == err1);
        CHECK(buf[1] == err2);
    }

    SUBCASE("Logger injection works") {
        Logger logger;
        handler.SetLogger(&logger);
        handler.SetResult(123);

        CHECK(handler.GetLogger() == &logger);
    }
}


SLXIO_ABI_NAMESPACE_END