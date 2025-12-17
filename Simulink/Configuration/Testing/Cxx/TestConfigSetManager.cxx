#include "SimulinkConfigSetManager.h"
#include "SlxioTestConfig.h"
#include "SyslinkLogger.h"
#include <gtest/gtest.h>

using namespace slxio;

class SimulinkConfigSetManagerTestFixture : public ::testing::Test {
protected:
  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);
  }

  void TearDown() override { slog_destroy(); }
};