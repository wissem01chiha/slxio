#include "doctest.h"
#include "SimulinkCoverage.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{
    TEST_CASE("Read coverage component test")
    {
        SimulinkConfigSetComponent component("Simulink.Coverage");
        component.SetParam("CovEnable", "on");

        SimulinkCoverage coverage;
        CHECK(ParseCoverageComponent(component, coverage) == ErrorCode::Ok);
        CHECK(coverage.CovEnable);

        component.SetParam("CovEnable", "off");
        CHECK(ParseCoverageComponent(component, coverage) == ErrorCode::Ok);
        CHECK_FALSE(coverage.CovEnable);

        component.SetParam("CovEnable", "invalid");
        CHECK(ParseCoverageComponent(component, coverage) == ErrorCode::ConfigSetParameterInvalid);
        CHECK_FALSE(coverage.CovEnable);

        component.RemoveParam("CovEnable");
        CHECK(ParseCoverageComponent(component, coverage) == ErrorCode::ConfigSetParameterNotFound);
        CHECK_FALSE(coverage.CovEnable);
    }
} // namespace slxio