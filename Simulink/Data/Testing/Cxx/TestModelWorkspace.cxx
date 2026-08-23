#include "DataECH.h"
#include "Doctest.h"
#include "Logger.h"
#include "ModelWorkspace.h"

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

class MockParameterObject : public IParameterObjectBase
{
public:
    explicit MockParameterObject(const std::string& name) { SetName(name); }
    IParameterObjectBase* New() override
    {
        return new MockParameterObject(GetName());
    }
    DataType GetDataType() const override { return DataType::SLXIO_TYPE_ARRAY; }
};

TEST_CASE("Assign and Get Variable")
{
    ModelWorkspace ws;
    auto param = std::make_shared<MockParameterObject>("x");

    HError err = ws.AssignVariable("x", param);
    CHECK(err == E_OK);

    auto retrieved = ws.GetVariable("x");
    REQUIRE(retrieved != nullptr);
    CHECK(retrieved->GetName() == "x");

    CHECK(ws.AssignVariable("x", nullptr) != E_OK);
    CHECK(ws.AssignVariable("", param) == E_PARAM_VAR_NAME_EMPTY);
}

TEST_CASE("Clear Variable")
{
    ModelWorkspace ws;
    auto param = std::make_shared<MockParameterObject>("y");
    ws.AssignVariable("y", param);

    CHECK(ws.GetVariableCount() == 1);

    HError err = ws.ClearVariable("y");
    CHECK(err == E_OK);
    CHECK(ws.GetVariableCount() == 0);
    CHECK(ws.GetVariable("y") == nullptr);
}

TEST_CASE("Clear All Variables")
{
    ModelWorkspace ws;
    ws.AssignVariable("a", std::make_shared<MockParameterObject>("a"));
    ws.AssignVariable("b", std::make_shared<MockParameterObject>("b"));

    CHECK(ws.GetVariableCount() == 2);

    HError err = ws.ClearAll();
    CHECK(err == E_OK);
    CHECK(ws.GetVariableCount() == 0);
}

TEST_CASE("FileName and MatlabCode defaults")
{
    ModelWorkspace ws;
    CHECK(ws.GetFileName().empty());
    CHECK(ws.GetMatlabCode().empty());
}

TEST_CASE("GetDataSource default not nullptr")
{
    ModelWorkspace ws;
    CHECK(ws.GetDataSourceType() == nullptr);
}

TEST_CASE("ModelWorkspace Logging interface test")
{
    ModelWorkspace ws;
    Logger* log = new Logger();
    CHECK(ws.SetLogger(log) == E_OK);
    CHECK(ws.GetLogger() != nullptr);
    delete log;
}

SLXIO_ABI_NAMESPACE_END
