#include "doctest.h"
#include "ModelWorkspace.h"
#include "SimulinkParameter.h"

namespace slxio
{

    TEST_CASE("Workspace assign and get variable test")
    {
        ModelWorkspace ws;
        auto param = std::make_shared<SimulinkParameter>("x");

        ErrorCode err = ws.AssignVariable("x", param);
        CHECK(err == ErrorCode::Ok);

        auto retrieved = ws.GetVariable("x");
        REQUIRE(retrieved != nullptr);
        CHECK(retrieved->GetValue() == "x");

        CHECK(ws.AssignVariable("x", nullptr) != ErrorCode::Ok);
        CHECK(ws.AssignVariable("", param) == ErrorCode::InvalidParameterName);
    }

    TEST_CASE("Workspace clear variable test")
    {
        ModelWorkspace ws;
        auto param = std::make_shared<SimulinkParameter>("y");
        ws.AssignVariable("y", param);

        CHECK(ws.GetVariableCount() == 1);

        ErrorCode err = ws.ClearVariable("y");
        CHECK(err == ErrorCode::Ok);
        CHECK(ws.GetVariableCount() == 0);
        CHECK(ws.GetVariable("y") == nullptr);
    }

    TEST_CASE("Workspace clear all variables test")
    {
        ModelWorkspace ws;

        ws.AssignVariable("a", std::make_shared<SimulinkParameter>("a"));
        ws.AssignVariable("b", std::make_shared<SimulinkParameter>("b"));

        CHECK(ws.GetVariableCount() == 2);

        ErrorCode err = ws.ClearAll();
        CHECK(err == ErrorCode::Ok);
        CHECK(ws.GetVariableCount() == 0);
    }

    TEST_CASE("Workspace fileName and matlab code defaults test")
    {
        ModelWorkspace ws;
        CHECK(ws.GetFileName().empty());
        CHECK(ws.GetMatlabCode().empty());
    }

    TEST_CASE("Workspace get data source default not nullptr")
    {
        ModelWorkspace ws;
        CHECK(ws.GetDataSourceType() == nullptr);
    }

}; // namespace slxio
