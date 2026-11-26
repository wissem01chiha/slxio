#include "slxio.h"
#include "doctest.h"

namespace slxio
{

    TEST_CASE("Load system return nullptr when input path empty test")
    {
        fs::path path;
        SimulinkModel* model = LoadSystem(path);
        CHECK(model == nullptr);
    }

} // namespace slxio