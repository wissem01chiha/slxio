#include "Doctest.h"
#include "SimulinkContentParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkContentParserTestFixture
{
protected:
  SimulinkContentParser* parserPtr;

  SimulinkContentParserTestFixture()
  {
    parserPtr = new SimulinkContentParser();
  }

  File getTestFileAsset(const char* assetName)
  {

    char path_slx[512];

    snprintf(path_slx, sizeof(path_slx), "%s/IO/Slx/Testing/Data/%s",
      PROJECT_ROOT_DIR, assetName);

    return File(path_slx);
  }

  ~SimulinkContentParserTestFixture()
  {
    if (parserPtr)
    {
      delete parserPtr;
      parserPtr = nullptr;
    }
  }
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserSetInputDataTest")
{

  ReturnType status =
    parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == E_OK);
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserParseTest")
{

  ReturnType status =
    parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == E_OK);
  status = parserPtr->parse();
  CHECK(status == E_OK);
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserGetDataObjectTest")
{

  ReturnType status =
    parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  CHECK(status == E_OK);
  status = parserPtr->parse();
  CHECK(status == E_OK);

  std::shared_ptr<SimulinkContent> contentPtr = parserPtr->getOutputData();
  CHECK(contentPtr != nullptr);
};

TEST_CASE_FIXTURE(
  SimulinkContentParserTestFixture, "ParserInvalidInputDataTest")
{

  ReturnType status =
    parserPtr->setInputData(getTestFileAsset("NonExistingFile.slx"));
  CHECK(status == E_WRNG_FUNC_PARAM);
};

TEST_CASE_FIXTURE(
  SimulinkContentParserTestFixture, "ParserDataObjectValidAttributeTest")
{

  parserPtr->setInputData(getTestFileAsset("TestAsset1.slx"));
  parserPtr->parse();
  std::shared_ptr<SimulinkContent> contentPtr = parserPtr->getOutputData();
  CHECK(contentPtr != nullptr);

  xmlNodePtr nodePtrNull = nullptr;
  ReturnType status = contentPtr->getBlockdiagramNodePtr(nodePtrNull);
  CHECK(status == E_OK);
  CHECK(nodePtrNull != nullptr);

  xmlNodePtr nodePtr = new xmlNode();
  CHECK(nodePtr != nullptr);
  status = contentPtr->getBlockdiagramNodePtr(nodePtr);
  CHECK(status == E_OK);
  CHECK(nodePtr != nullptr);

  const xmlChar* name = nodePtr->name;
  CHECK(name != nullptr);
  printf("Blockdiagram root node name: %s\n", name);

  const xmlChar* content = nodePtr->content;
  CHECK(content == nullptr);

  const xmlAttr* properties = nodePtr->properties;
  printf(
    "Blockdiagram root node properties: %s\n", (const char*)properties->name);
  CHECK(properties != nullptr);
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END