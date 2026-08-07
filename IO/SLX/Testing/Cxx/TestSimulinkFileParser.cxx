#include "SimulinkFileParser.h"
#include "slxDoctest.h"

namespace slxio {
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

  HError status = parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == E_OK);
}

TEST_CASE_FIXTURE(SimulinkFileTestFixture, "ParseValidSimulinkFile") {

  HError in_status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(in_status == E_OK);
  HError parseStatus = parserPtr->parse();
  CHECK(parseStatus == E_OK);
};

TEST_CASE_FIXTURE(SimulinkFileTestFixture, "ValidateParsedSimulinkFile") {

  parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  parserPtr->parse();
  auto file = parserPtr->getOutputData();
  std::string outStr = file->ToString();
  std::cout << outStr << std::endl;
  CHECK(!outStr.empty());
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
