#include "SimulinkObject.h"
#include "slxDoctest.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("AddNullParameterTest") {
  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  HError status = obj.AddElement(nullptr);
  CHECK(status == E_PARAMETER_NULL_PTR);
}

TEST_CASE("AddSimulinkParameterTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto param = std::make_shared<SimulinkParameter>("DefaultTransition");

  HError status = obj.AddElement(param);
  CHECK(status == E_OK);
}

TEST_CASE("AddSubObjectTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto subObject = std::make_shared<SimulinkObject>(
      1, "DataTransfer", "Simulink.GlobalDataTransfer");

  HError status = obj.AddElement(subObject);
  CHECK(status == E_OK);
}

TEST_CASE("GetParameterTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto param = std::make_shared<SimulinkParameter>();
  param->setName("Solver");
  param->setValue("ode45");

  HError status = obj.AddElement(param);
  CHECK(status == E_OK);

  std::shared_ptr<SimulinkParameter> retrievedParam =
      obj.getParameter("Solver");
  CHECK(retrievedParam != nullptr);
  CHECK(std::string(retrievedParam->getValue()) == "ode45");
}

TEST_CASE("AddArrayTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  HError status = obj.AddElement(subArray);
  CHECK(status == E_OK);
}

TEST_CASE("ContainsObjectTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");

  auto subObject = std::make_shared<SimulinkObject>(
      1, "DataTransfer", "Simulink.GlobalDataTransfer");

  HError status = obj.AddElement(subObject);
  CHECK(status == E_OK);

  CHECK(obj.Contains(1));
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
