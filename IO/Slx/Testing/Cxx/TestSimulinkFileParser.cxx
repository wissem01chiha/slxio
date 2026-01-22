#include "Doctest.h"
#include "SimulinkFileParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkFileTestFixture {
protected:
  SimulinkFileParser *parserPtr;

  SimulinkFileTestFixture(){
    parserPtr = new SimulinkFileParser();
  }

  File getTestFileAsset(const char *assetName) {

    char path_slx[512];

    snprintf(path_slx, sizeof(path_slx), "%s/IO/Slx/Testing/Data/%s",
             PROJECT_ROOT_DIR, assetName);

    return File(path_slx);
  }

  ~SimulinkFileTestFixture(){
    if (parserPtr) {
      delete parserPtr;
      parserPtr = nullptr;
    }
  }
};

TEST_CASE_FIXTURE(SimulinkFileTestFixture, "SetInputDataValid") {

  ErrorCode status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkFileTestFixture, "ParseValidSimulinkFile") {

  ErrorCode status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == ErrorCode::SLX_OK);
  status = parserPtr->parse();
  CHECK(status == ErrorCode::SLX_OK);
};


SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
