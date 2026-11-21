#include "doctest.h"
#include "SimulinkFile.h"
#include "SimulinkFileInfo.h"
#include "SimulinkFileLoader.h"
#include "Config.h"

namespace slxio
{

#if SIMULINK_COMPATIBILTY_2019
    TEST_CASE("Load a simulink file from directory basic test")
    {
        ErrorCode ec = ErrorCode::Ok;
        const SimulinkFile file = SimulinkFileLoader::Load("data/2019b/CAP", ec);
        CHECK(ec == ErrorCode::Ok);
        REQUIRE(file.m_coreProperties);
        REQUIRE(file.m_mwcoreProperties);
        REQUIRE(file.m_graphicalInterface);

        REQUIRE(file.m_mwcorePropertiesExtension);
        REQUIRE(file.m_configSetInfo);
        REQUIRE(file.m_blockdiagram);
        REQUIRE(file.m_modelDictionary);
        REQUIRE(file.m_bddefaults);
        REQUIRE(file.m_scheduleEditor);
        REQUIRE(file.m_scheduleCore);
        REQUIRE(file.m_mwcorePropertiesExtension);

        const SimulinkFileInfo info = GetInfo(file);
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_version, "R2019b");
        CHECK_EQ(info.m_revision, "1.72");
        CHECK_EQ(info.m_modified, "2026-11-20T10:13:18Z");
        CHECK_EQ(info.m_contentTypeFriendlyName, "Simulink Model");
        CHECK_EQ(info.m_matlabRelease, "R2019b");
        CHECK_EQ(info.m_contentType, "application/vnd.mathworks.simulink.model");
    }

    TEST_CASE("Get Simulink file info from extracted directory")
    {
        ErrorCode ec = ErrorCode::Ok;
        const SimulinkFileInfo info = SimulinkFileLoader::GetSimulinkFileInfo("data/2019b/CAP", ec);
        CHECK_EQ(info.m_version, "R2019b");
        CHECK_EQ(info.m_revision, "1.72");
        CHECK_EQ(info.m_matlabRelease, "R2019b");
        CHECK_EQ(info.m_modified, "2026-11-20T10:13:18Z");
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_contentTypeFriendlyName, "Simulink Model");
        CHECK_EQ(info.m_contentType, "application/vnd.mathworks.simulink.model");
    }
#endif

#if SIMULINK_COMPATIBILTY_2024
    TEST_CASE("Load a simulink file from directory basic test")
    {
        ErrorCode ec24 = ErrorCode::Ok;
        const SimulinkFile file_24 = SimulinkFileLoader::Load("data/2024b/CAP", ec24);
        CHECK(ec24 == ErrorCode::Ok);
        INFO(make_error_code(ec24).message());
        CHECK(file_24.m_graphicalInterface != nullptr);
    }

    TEST_CASE("Get Simulink file info from extracted directory")
    {
        ErrorCode ec = ErrorCode::Ok;
        const SimulinkFileInfo info = SimulinkFileLoader::GetSimulinkFileInfo("data/2024b/CAP", ec);
        CHECK_EQ(info.m_version, "R2024b");
        CHECK_EQ(info.m_revision, "11.0");
        CHECK_EQ(info.m_matlabRelease, "R2024b");
        CHECK_EQ(info.m_modified, "2026-11-20T10:33:14Z");
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_contentTypeFriendlyName, "Simulink Model");
        CHECK_EQ(info.m_contentType, "application/vnd.mathworks.simulink.model");
        CHECK(ec == ErrorCode::Ok);
    }
#endif

} // namespace slxio
