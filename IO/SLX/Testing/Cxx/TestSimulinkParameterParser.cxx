#include "Doctest.h"
#include "SimulinkParameterParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkParameterParserTestFixture
{
protected:
  SimulinkParameterParserTestFixture()
    : parserPtr(new SimulinkParameterParser())
    , doc(nullptr)
  {
  }

  xmlNodePtr getXmlNodePtr(const char* xmlfilename)
  {

    char xmlfilepath[512];
    snprintf(xmlfilepath, sizeof(xmlfilepath), "%s/IO/Slx/Testing/Data/%s",
      PROJECT_ROOT_DIR, xmlfilename);
    doc = xmlReadFile(xmlfilepath, nullptr, 0);
    if (!doc)
    {
      throw std::runtime_error("failed to read XML file");
    }
    xmlNodePtr root = xmlDocGetRootElement(doc);
    return root;
  }

  ~SimulinkParameterParserTestFixture()
  {

    if (parserPtr)
    {
      delete parserPtr;
      parserPtr = nullptr;
    }
    if (doc)
    {
      xmlFreeDoc(doc);
    }
  }

  SimulinkParameterParser* parserPtr;
  xmlDocPtr doc;
};

TEST_CASE_FIXTURE(SimulinkParameterParserTestFixture, "ParserSetInputDataTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("parameter.xml");
  ReturnType status = parserPtr->setInputData(nodePtr);
  CHECK(status == E_OK);
}

TEST_CASE_FIXTURE(
  SimulinkParameterParserTestFixture, "GetParameterNotNullPtrTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("parameter.xml");
  ReturnType status = parserPtr->setInputData(nodePtr);
  std::shared_ptr<SimulinkParameter> dataObj = parserPtr->getOutputData();

  CHECK(dataObj != nullptr);
}

TEST_CASE_FIXTURE(SimulinkParameterParserTestFixture, "ParameterParserTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("parameter.xml");
  parserPtr->setInputData(nodePtr);
  ReturnType status = parserPtr->parse();
  CHECK(status == E_OK);
}

TEST_CASE_FIXTURE(SimulinkParameterParserTestFixture, "ParameterValidDataTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("parameter.xml");
  parserPtr->setInputData(nodePtr);
  parserPtr->parse();
  std::shared_ptr<SimulinkParameter> parameter = parserPtr->getOutputData();

  CHECK(strcmp(parameter->getValue(), "windows-1252") == 0);
  CHECK(parameter->getDataType() == SimulinkDataType::Double);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END