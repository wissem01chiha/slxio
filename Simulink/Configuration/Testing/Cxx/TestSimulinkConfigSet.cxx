#include "SimulinkConfigSet.h"

class SimulinkConfigSetFixture {
protected:
  SimulinkConfigSet *config;

  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);

    config = new SimulinkConfigSet();
  }

  void TearDown() override { delete config; }
};

TEST_F(SimulinkConfigSetFixture, ConstructorTest) {

  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");
  SimulinkConfigSet *configCst = new SimulinkConfigSet(object);
  ASSERT_EQ(configCst->getName(), "MyObject");
  ASSERT_EQ(configCst->getID(), 42);
}

TEST_F(SimulinkConfigSetFixture, AddAndGetParameterTest) {

  SimulinkErrorType status = config->addParameter("Solver", "FixedStep");
  ASSERT_EQ(status, SimulinkErrorType::SLX_OK)
      << "Failed to set parameter. slx_error code = " << c_str(status);
  ;
  ASSERT_EQ(config->getParameter("Solver"), "FixedStep");
}

TEST_F(SimulinkConfigSetFixture, GetParameterReturnsEmptyIfNotFound) {

  ASSERT_EQ(config->getParameter("NonExistent"), "");
}