#include "doctest.h"
#include "SimulinkCodeGeneration.h"
#include "SimulinkConfigSetComponent.h"

namespace slxio
{

    TEST_CASE("Read code generation component test")
    {
        SimulinkConfigSetComponent component("Simulink.RTWCC");
        component.SetParam("CodeGenFolder", "code");
        component.SetParam("TargetLang", "C");
        component.SetParam("EnableCodeGeneration", "on");
        SimulinkCodeGeneration codeGeneration;

        const auto result = ParseCodeGenerationComponent(component, codeGeneration);

        CHECK(result == ErrorCode::Ok);
        CHECK(codeGeneration.m_codeGenFolder == "code");
        CHECK(codeGeneration.m_codeGenLanguage == "C");
        CHECK(codeGeneration.m_enableCodeGeneration);

        component.SetParam("EnableCodeGeneration", "off");
        CHECK(ParseCodeGenerationComponent(component, codeGeneration) == ErrorCode::Ok);
        CHECK_FALSE(codeGeneration.m_enableCodeGeneration);
    }

    TEST_CASE("Code generation parser reject invalid input")
    {
        SimulinkConfigSetComponent component("Simulink.RTWCC");
        component.SetParam("CodeGenFolder", "new-code");
        component.SetParam("TargetLang", "C");
        component.SetParam("EnableCodeGeneration", "invalid");

        SimulinkCodeGeneration codeGeneration;
        codeGeneration.m_codeGenFolder = "old-code";
        codeGeneration.m_codeGenLanguage = "C++";
        codeGeneration.m_enableCodeGeneration = true;

        CHECK(ParseCodeGenerationComponent(component, codeGeneration) ==
              ErrorCode::ConfigSetParameterInvalid);
        CHECK(codeGeneration.m_codeGenFolder == "old-code");
        CHECK(codeGeneration.m_codeGenLanguage == "C++");
        CHECK(codeGeneration.m_enableCodeGeneration);

        component.SetParam("EnableCodeGeneration", "on");
        component.RemoveParam("TargetLang");
        CHECK(ParseCodeGenerationComponent(component, codeGeneration) ==
              ErrorCode::ConfigSetParameterNotFound);
        CHECK(codeGeneration.m_codeGenFolder == "old-code");
        CHECK(codeGeneration.m_codeGenLanguage == "C++");
    }

}; // namespace slxio