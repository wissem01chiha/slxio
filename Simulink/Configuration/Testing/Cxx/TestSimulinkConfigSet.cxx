#include "Doctest.h"
#include "SimulinkConfigSet.h"

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkConfigSet Constructor Test")
{
    auto config = SimulinkConfigSet();
    std::string name = config.GetName();
    CHECK(name == "");
    CHECK(!config.IsActive());
}

TEST_CASE("SimulinkConfigSet Activate/Desactivate Test")
{
    auto config = SimulinkConfigSet();
    CHECK(config.Activate() == E_OK);
    CHECK(config.IsActive());
    CHECK(config.Deactivate() == E_OK);
}

SLXIO_ABI_NAMESPACE_END
