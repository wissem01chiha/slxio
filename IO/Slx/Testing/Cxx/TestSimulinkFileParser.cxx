#include "Doctest.h"
#include "SimulinkFileParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkFileTestFixture {
protected:
  SimulinkFile *slxfs;
  SimulinkFile *slxfs_zip;

  char path_slx[512];
  char path_zip[512];

  void SetUp() override {

    snprintf(path_slx, sizeof(path_slx), "%s/test/assets/TestAsset1.slx",
             PROJECT_ROOT);
    snprintf(path_zip, sizeof(path_zip), "%s/test/assets/TestAsset1_.zip",
             PROJECT_ROOT);

    slxfs = new SimulinkFile(path_slx);
    slxfs_zip = new SimulinkFile(path_zip);
  }

  void TearDown() override {
    delete slxfs;
    slog_destroy();
  }
};

TEST_F(SimulinkFileTestFixture, GetExtensionTestValid) {

  const char *ext = slxfs->get_extension();
  ASSERT_STREQ(ext, "slx");
}

TEST_F(SimulinkFileTestFixture, OpenTest) {

  SimulinkErrorType err = slxfs_zip->open();
  ASSERT_EQ(err, SimulinkErrorType::SLX_OK)
      << "Failed to open ZIP archive. slx_error code = " << c_str(err);
}

TEST_F(SimulinkFileTestFixture, CastExtensionTest) {

  SimulinkErrorType err = slxfs->cast_extension();
  ASSERT_EQ(err, SimulinkErrorType::SLX_OK)
      << "Failed to Change SLX to ZIP archive. slx_error code = " << c_str(err);
}

TEST_F(SimulinkFileTestFixture, ExtractTest) {

  SimulinkErrorType err = slxfs->extract();
  ASSERT_EQ(err, SimulinkErrorType::SLX_OK)
      << "Failed to Eextract ZIP archive to location . slx_error code = "
      << c_str(err);
}

TEST_F(SimulinkFileTestFixture, LoadTest) {

  slxfs->open();
  SimulinkErrorType err = slxfs->load();
  ASSERT_EQ(err, SimulinkErrorType::SLX_OK)
      << "Failed to Eextract ZIP archive to location . slx_error code = "
      << c_str(err);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
