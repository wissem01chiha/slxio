#include "doctest.h"
#include "SimulinkFile.h"
#include "SimulinkFileInfo.h"
#include "Config.h"

namespace slxio
{
    TEST_CASE("Get simulink file info basic test")
    {
        SimulinkFile file;

        const pugi::xml_parse_result result =
            file.m_coreProperties.load_file("data/coreProperties.xml");

        REQUIRE(result);
        auto root = file.m_coreProperties.child("cp:coreProperties");
        REQUIRE(root);
        REQUIRE(root.child("dc:creator"));
        const std::string creator = root.child("dc:creator").text().as_string();
        const std::string version = root.child("cp:version").text().as_string();

        CHECK_EQ(creator, "chiha");
        CHECK_EQ(version, "R2019a");

        const pugi::xml_parse_result resultmw =
            file.m_mwcoreProperties.load_file("data/mwcoreProperties.xml");
        REQUIRE(resultmw);
        auto rootmw = file.m_mwcoreProperties.child("mwcoreProperties");
        REQUIRE(rootmw);

        const SimulinkFileInfo info = GetInfo(file);
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_version, "R2019a");
        CHECK_EQ(info.m_revision, "1.1");
        CHECK_EQ(info.m_modified, "2025-08-19T23:55:32Z");
        CHECK_EQ(info.m_contentTypeFriendlyName, "Simulink Model");
        CHECK_EQ(info.m_matlabRelease, "R2019a");
        CHECK_EQ(info.m_contentType, "application/vnd.mathworks.simulink.model");
    }

    TEST_CASE("Get simulink graphical interface info test")
    {
        SimulinkFile file;
#if SIMULINK_COMPATIBILTY_2024
        yyjson_read_err err{};
        yyjson_read_flag flg = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS;
        const std::string path =
            (fs::current_path() / "data/2024b/CAP/simulink/graphicalInterface.json").string();
        yyjson_doc* result = yyjson_read_file(path.c_str(), flg, nullptr, &err);
        INFO("json error code: " << static_cast<int>(err.code));
        CHECK(result != nullptr);
        yyjson_doc_free(result);

#else
        const pugi::xml_parse_result result =
            file.m_coreProperties.load_file("data/graphicalInterface.xml");
        REQUIRE(result);
#endif
    }

    TEST_CASE("Load a simulink file from directory basic test")
    {
#if SIMULINK_COMPATIBILTY_2024
        ErrorCode ec24 = ErrorCode::Ok;
        const SimulinkFile file_24 = Import("data/2024b/CAP", ec24);
        CHECK(ec24 == ErrorCode::Ok);
        INFO(make_error_code(ec24).message());
        CHECK(file_24.m_graphicalInterface != nullptr);
#else
        ErrorCode ec = ErrorCode::Ok;
        const SimulinkFile file = Import("data/2019b/CAP", ec);
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
#endif
    }
    TEST_CASE("Get Simulink file info from extracted directory")
    {
        ErrorCode ec = ErrorCode::Ok;
#if SIMULINK_COMPATIBILTY_2019
        const SimulinkFileInfo info = GetSimulinkFileInfo("data/2019b/CAP", ec);
        CHECK_EQ(info.m_version, "R2019b");
        CHECK_EQ(info.m_revision, "1.72");
        CHECK_EQ(info.m_matlabRelease, "R2019b");
        CHECK_EQ(info.m_modified, "2026-11-20T10:13:18Z");
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_contentTypeFriendlyName, "Simulink Model");
        CHECK_EQ(info.m_contentType, "application/vnd.mathworks.simulink.model");
#elif SIMULINK_COMPATIBILTY_2024
        const SimulinkFileInfo info = GetSimulinkFileInfo("data/2024b/CAP", ec);
        CHECK_EQ(info.m_version, "R2024b");
        CHECK_EQ(info.m_revision, "11.0");
        CHECK_EQ(info.m_matlabRelease, "R2024b");
        CHECK_EQ(info.m_modified, "2026-11-20T10:33:14Z");
        CHECK_EQ(info.m_creator, "chiha");
        CHECK_EQ(info.m_category, "model");
        CHECK_EQ(info.m_contentTypeFriendlyName, "Simulink Model");
        CHECK_EQ(info.m_contentType, "application/vnd.mathworks.simulink.model");
#endif
        CHECK(ec == ErrorCode::Ok);
    }

} // namespace slxio