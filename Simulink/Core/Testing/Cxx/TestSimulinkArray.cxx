#include "SimulinkArray.h"

class SimulinkArrayTestFixture {
protected:
  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);
  }

  void TearDown() override { slog_destroy(); }
};

TEST_F(SimulinkArrayTestFixture, CopyConstructorTest) {

  SimulinkArray *original = new SimulinkArray();
  auto param = std::make_shared<SimulinkParameter>("gain", "5");

  SimulinkErrorType status = original->add(param);
  ASSERT_EQ(status, SimulinkErrorType::SLX_OK)
      << "Fail to add Parameter to Simulink Array slx_error " << c_str(status);

  SimulinkArray copy(*original);

  EXPECT_EQ(copy.getType(), original->getType());
  EXPECT_EQ(copy.toString(), original->toString());
  EXPECT_EQ(copy.getID(), original->getID());
}

TEST_F(SimulinkArrayTestFixture, AddArrayTest) {

  SimulinkArray *array = new SimulinkArray();
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  SimulinkErrorType status = array->add(subArray);
  ASSERT_EQ(status, SimulinkErrorType::SLX_OK);
}

TEST_F(SimulinkArrayTestFixture, RemoveArrayTest) {

  SimulinkArray *array = new SimulinkArray();
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  SimulinkErrorType AddStatus = array->add(subArray);
  ASSERT_EQ(AddStatus, SimulinkErrorType::SLX_OK);

  SimulinkErrorType RemoveStatus = array->remove(subArray);
  ASSERT_EQ(RemoveStatus, SimulinkErrorType::SLX_OK);
}

TEST_F(SimulinkArrayTestFixture, RemoveNullptrArrayTest) {

  SimulinkArray *array = new SimulinkArray();
  SimulinkErrorType status = array->remove(nullptr);
  ASSERT_EQ(status, SimulinkErrorType::SLX_ERR_NULL_PTR);
}

TEST_F(SimulinkArrayTestFixture, RemoveNotElementArrayTest) {

  SimulinkArray *array = new SimulinkArray();
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  SimulinkErrorType status = array->remove(subArray);
  ASSERT_EQ(status, SimulinkErrorType::SLX_OK);
}

TEST_F(SimulinkArrayTestFixture, ConatinsArrayTest) {

  SimulinkArray *array = new SimulinkArray();
  auto subObject = std::make_shared<SimulinkObject>(
      1, "DataTransfer", "Simulink.GlobalDataTransfer");

  SimulinkErrorType status = array->add(subObject);
  ASSERT_EQ(status, SimulinkErrorType::SLX_OK);

  ASSERT_EQ(array->contains(1), 1);
  ASSERT_NE(array->contains(1), 0);
}