#include "SimulinkModel.h"

class SimulinkModelTestFixture : public ::testing::Test {
protected:
  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);
  }

  void TearDown() override { slog_destroy(); }
};
