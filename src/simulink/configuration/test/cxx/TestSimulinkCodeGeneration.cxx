#include "doctest.h"
#include "SimulinkCodeGeneration.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{

    TEST_CASE("CodeGeneration read component test")
    {
        SimulinkConfigSetComponent component("Simulink.RTWCC");
        component.SetParam("CodeGenFolder", "code");
        component.SetParam("TargetLang", "C");
        component.SetParam("EnableCodeGeneration", "on");
        SimulinkCodeGeneration codeGeneration;

        const auto diagnostics = FromComponent(component, codeGeneration);

        CHECK(diagnostics.empty());
        CHECK(codeGeneration.m_codeGenFolder == "code");
        CHECK(codeGeneration.m_codeGenLanguage == "C");
        CHECK(codeGeneration.m_enableCodeGeneration);

        component.SetParam("EnableCodeGeneration", "off");
        CHECK(FromComponent(component, codeGeneration).empty());
        CHECK_FALSE(codeGeneration.m_enableCodeGeneration);
    }

}; 