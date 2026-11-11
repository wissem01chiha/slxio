#include "doctest.h"
#include "SimulinkModel.h"

namespace slxio
{

        TEST_CASE("Simulink  model default constructor test")
    {
        auto mdl = std::make_shared<SimulinkModel>();
        CHECK(mdl != nullptr);
    }

}; // namespace slxio
