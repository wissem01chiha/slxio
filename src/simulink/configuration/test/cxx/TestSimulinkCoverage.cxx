#include "doctest.h"
#include "SimulinkCoverage.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{
    TEST_CASE("Read coverage component test")
    {
        SimulinkConfigSetComponent component("Simulink.Coverage");
        component.SetParam("CovEnable", "true");

        SimulinkCoverage coverage;
        const auto diagnostics = FromComponent(component, coverage);
        CHECK(diagnostics.empty());
    }
} // namespace slxio