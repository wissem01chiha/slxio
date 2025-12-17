#include "SimulinkArray.h"
#include "Doctest.h"

class SimulinkObjectTestFixture {
public:
protected:
};

TEST_CASE_FIXTURE(SimulinkObjectTestFixture, "AddNullParameterTest") {

  // SimulinkErrorType status = obj.add(nullptr);
  // EXPECT_EQ(status, SimulinkErrorType::SLX_ERR_NULL_PTR);
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