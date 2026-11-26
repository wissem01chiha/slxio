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

#if SIMULINK_COMPATIBILTY_2024

    TEST_CASE("Get simulink graphical interface info test")
    {
        SimulinkFile file;
        yyjson_read_err err{};
        yyjson_read_flag flg = YYJSON_READ_ALLOW_COMMENTS | YYJSON_READ_ALLOW_TRAILING_COMMAS;
        const std::string path =
            (fs::current_path() / "data/2024b/CAP/simulink/graphicalInterface.json").string();
        yyjson_doc* result = yyjson_read_file(path.c_str(), flg, nullptr, &err);
        INFO("json error code: " << static_cast<int>(err.code));
        CHECK(result != nullptr);

        file.m_graphicalInterface = result;
        const SimulinkFileInfo info = GetInfo(file);
        const GraphicalInterfaceInfo& graphicalInfo = info.m_graphicalInterfaceInfo;
        CHECK(graphicalInfo.m_preCompExecutionDomainType == "Unset");
        yyjson_doc_free(result);
    }
#else
    TEST_CASE("Get simulink graphical interface info test")
    {
        SimulinkFile file;
        const pugi::xml_parse_result result =
            file.m_graphicalInterface.load_file("data/graphicalInterface.xml");
        REQUIRE(result);

        const SimulinkFileInfo info = GetInfo(file);

        const GraphicalInterfaceInfo& graphicalInfo = info.m_graphicalInterfaceInfo;

        CHECK(graphicalInfo.m_numRootInports == "0");
        CHECK(graphicalInfo.m_numRootOutports == "0");
        CHECK(graphicalInfo.m_parameterArgumentNames.empty());
        CHECK(graphicalInfo.m_numModelReferences == "0");
        CHECK(graphicalInfo.m_numTestPointedSignals == "0");
        CHECK(graphicalInfo.m_numProvidedFunctions == "0");
        CHECK(graphicalInfo.m_numRequiredFunctions == "0");
        CHECK(graphicalInfo.m_numResetEvents == "0");
        CHECK(graphicalInfo.m_hasInitializeEvent == "0");
        CHECK(graphicalInfo.m_hasTerminateEvent == "0");
        CHECK(graphicalInfo.m_preCompExecutionDomainType == "Unset");
        CHECK(graphicalInfo.m_isExportFunctionModel == "0");
        CHECK(graphicalInfo.m_isArchitectureModel == "0");
        CHECK(graphicalInfo.m_numParameterArguments == "0");
        CHECK(graphicalInfo.m_numExternalFileReferences == "0");
        CHECK(graphicalInfo.m_orderedModelArguments == "1");
    }
#endif

} // namespace slxio