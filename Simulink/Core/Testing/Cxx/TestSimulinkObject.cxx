#include "Doctest.h"
#include "SimulinkObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkObjectTestFixture {
public:
protected:
  SimulinkObject obj;
};

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "AddNullParameterTest") {

  ErrorCode status = obj.add(nullptr);
  CHECK(status == ErrorCode::SLX_ENULLPTR);
}

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "AddSimulinkParameterTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto param = std::make_shared<SimulinkParameter>("DefaultTransition");

  ErrorCode status = obj.add(param);
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "AddArrayTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode status = obj.add(subArray);
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "ContainsObjectTest") {

  SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");

  auto subObject = std::make_shared<SimulinkObject>(
      1, "DataTransfer", "Simulink.GlobalDataTransfer");

  ErrorCode status = obj.add(subObject);
  CHECK(status == ErrorCode::SLX_OK);

  CHECK(obj.contains(1));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END