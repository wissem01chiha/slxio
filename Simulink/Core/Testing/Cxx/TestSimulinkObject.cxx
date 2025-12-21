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
  CHECK(status== ErrorCode::SLX_ERR_NULL_PTR);
}

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "AddSimulinkParameterTest") {

  // SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");
  // auto param = std::make_shared<SimulinkParameter>(
  //     "DefaultTransition", "Ensure deterministic transfer");

  // SimulinkErrorType status = obj.add(param);
  // EXPECT_EQ(status, SimulinkErrorType::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "AddArrayTest") {

  // SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");

  // auto subArray =
  //     std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  // SimulinkErrorType status = obj.add(subArray);
  // ASSERT_EQ(status, SimulinkErrorType::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "ContainsObjectTest") {

  // SimulinkObject obj(1, "DataTransfer", "Simulink.GlobalDataTransfer");

  // auto subObject = std::make_shared<SimulinkObject>(
  //     1, "DataTransfer", "Simulink.GlobalDataTransfer");

  // SimulinkErrorType status = obj.add(subObject);
  // ASSERT_EQ(status, SimulinkErrorType::SLX_OK);

  // ASSERT_EQ(obj.contains(1), 1);
  // ASSERT_NE(obj.contains(1), 0);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END