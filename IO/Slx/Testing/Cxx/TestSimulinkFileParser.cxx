#include "Doctest.h"
#include "SimulinkFileParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkFileTestFixture {
protected:
  SimulinkFileParser *parserPtr;

  SimulinkFileTestFixture() { parserPtr = new SimulinkFileParser(); }

  File getTestFileAsset(const char *assetName) {

    char path_slx[512];

    snprintf(path_slx, sizeof(path_slx), "%s/IO/Slx/Testing/Data/%s",
             PROJECT_ROOT_DIR, assetName);

    return File(path_slx);
  }

  ~SimulinkFileTestFixture() {
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

  ErrorCode in_status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(in_status == ErrorCode::SLX_OK);
  ErrorCode parseStatus = parserPtr->parse();
  CHECK(parseStatus == ErrorCode::SLX_OK);
};

TEST_CASE_FIXTURE(SimulinkFileTestFixture, "ValidateParsedSimulinkFile") {

  parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  parserPtr->parse();
  auto file = parserPtr->getDataObject();
  std::string outStr = file->toString();
  std::cout << outStr << std::endl;
  CHECK(!outStr.empty());
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
