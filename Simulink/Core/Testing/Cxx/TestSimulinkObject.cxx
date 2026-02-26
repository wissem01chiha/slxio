#include "Doctest.h"
#include "SimulinkObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("AddNullParameterTest")
{
  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  ErrorCode status = obj.add(nullptr);
  CHECK(status == ErrorCode::SLX_ENULLPTR);
}

TEST_CASE("AddSimulinkParameterTest")
{

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto param = std::make_shared<SimulinkParameter>("DefaultTransition");

  ErrorCode status = obj.add(param);
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE("AddSubObjectTest")
{

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto subObject = std::make_shared<SimulinkObject>(
    1, "DataTransfer", "Simulink.GlobalDataTransfer");

  ErrorCode status = obj.add(subObject);
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE("GetParameterTest")
{

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto param = std::make_shared<SimulinkParameter>();
  param->setName("Solver");
  param->setValue("ode45");

  ErrorCode status = obj.add(param);
  CHECK(status == ErrorCode::SLX_OK);

  std::shared_ptr<SimulinkParameter> retrievedParam =
    obj.getParameter("Solver");
  CHECK(retrievedParam != nullptr);
  CHECK(std::string(retrievedParam->getValue()) == "ode45");
}

TEST_CASE("AddArrayTest")
{

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto subArray =
    std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode status = obj.add(subArray);
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE("ContainsObjectTest")
{

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");

  auto subObject = std::make_shared<SimulinkObject>(
    1, "DataTransfer", "Simulink.GlobalDataTransfer");

  ErrorCode status = obj.add(subObject);
  CHECK(status == ErrorCode::SLX_OK);

  CHECK(obj.contains(1));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END