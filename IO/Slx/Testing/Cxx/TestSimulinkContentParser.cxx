#include "Doctest.h"
#include "SimulinkContentParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkContentParserTestFixture {
protected:
  SimulinkContentParser *parserPtr;

  SimulinkContentParserTestFixture() {
    parserPtr = new SimulinkContentParser();
  }

  File getTestFileAsset(const char *assetName) {

    char path_slx[512];

    snprintf(path_slx, sizeof(path_slx), "%s/IO/Slx/Testing/Data/%s",
             PROJECT_ROOT_DIR, assetName);

    return File(path_slx);
  }

  ~SimulinkContentParserTestFixture() {
    if (parserPtr) {
      delete parserPtr;
      parserPtr = nullptr;
    }
  }
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserSetInputDataTest") {

  ErrorCode status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == ErrorCode::SLX_OK);
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserParseTest") {

  ErrorCode status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == ErrorCode::SLX_OK);
  status = parserPtr->parse();
  CHECK(status == ErrorCode::SLX_OK);
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture,
                          "ParserGetDataObjectTest") {

  ErrorCode status =
      parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == ErrorCode::SLX_OK);
  status = parserPtr->parse();
  CHECK(status == ErrorCode::SLX_OK);

  std::shared_ptr<SimulinkContent> contentPtr =
      parserPtr->getDataObject();
  CHECK(contentPtr != nullptr);
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END