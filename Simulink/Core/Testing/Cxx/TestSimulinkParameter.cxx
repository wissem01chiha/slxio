#include "Doctest.h"
#include "SimulinkParameter.h"

using namespace slxio;

SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkParameter default construction")
{
    SimulinkParameter param;

    CHECK(param.GetDataType() == DataType::SLXIO_TYPE_SIMULINK_PARAM);
}

TEST_CASE("SimulinkParameter construction with value")
{
    SimulinkParameter param("123");

    CHECK(param.GetValue() == "123");
}

TEST_CASE("SimulinkParameter integer conversion")
{
    SimulinkParameter param("123");

    CHECK(param.GetValueAsInt() == 123);
}

TEST_CASE("SimulinkParameter float conversion")
{
    SimulinkParameter param("3.14");

    CHECK(param.GetValueAsFloat() == doctest::Approx(3.14f));
}

TEST_CASE("SimulinkParameter double conversion")
{
    SimulinkParameter param("3.14159265");

    CHECK(param.GetValueAsDouble() == doctest::Approx(3.14159265));
}

TEST_CASE("SimulinkParameter New creates valid instance")
{
    SimulinkParameter param("test");

    auto* newParam = param.New();

    CHECK(newParam != nullptr);

    delete newParam;
}

TEST_CASE("SimulinkParameter SimulinkDataType setter/getter")
{
    SimulinkParameter param;

    param.SetSimulinkDataType(SimulinkDataType::Double);

    CHECK(param.GetSimulinkDataType() == SimulinkDataType::Double);
}

SLXIO_ABI_NAMESPACE_END