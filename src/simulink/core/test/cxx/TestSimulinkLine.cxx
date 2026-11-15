#include "doctest.h"
#include "SimulinkLine.h"

namespace slxio
{

    TEST_CASE("Simulink line constructor test")
    {
        auto line = std::make_shared<SimulinkLine>();
        CHECK(line != nullptr);
        CHECK(!line->IsConnected());
    }

}; // namespace slxio
