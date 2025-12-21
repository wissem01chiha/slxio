#include "Doctest.h"
#include "SimulinkModel.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkModelTestFixture : public ::testing::Test {
protected:
  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);
  }

  void TearDown() override { slog_destroy(); }
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END