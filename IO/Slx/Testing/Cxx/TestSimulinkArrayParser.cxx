#include "Doctest.h"
#include "SimulinkArrayParser.h"
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkArrayParserTestFixture
{
protected:
  SimulinkArrayParserTestFixture()
    : parserPtr(new SimulinkArrayParser())
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

  ~SimulinkArrayParserTestFixture()
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

  SimulinkArrayParser* parserPtr;
  xmlDocPtr doc;
};

TEST_CASE_FIXTURE(SimulinkArrayParserTestFixture, "ParserSetInputDataTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("array.xml");
  ErrorCode status = parserPtr->setInputData(nodePtr);
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkArrayParserTestFixture, "GetArrayNotNullPtrTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("array.xml");
  ErrorCode status = parserPtr->setInputData(nodePtr);
  std::shared_ptr<SimulinkArray> dataObj = parserPtr->getOutputData();

  CHECK(dataObj != nullptr);
}

TEST_CASE_FIXTURE(SimulinkArrayParserTestFixture, "ArrayParserTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("array.xml");
  parserPtr->setInputData(nodePtr);
  ErrorCode status = parserPtr->parse();
  CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkArrayParserTestFixture, "ArrayValidDataTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("array.xml");
  parserPtr->setInputData(nodePtr);
  parserPtr->parse();
  std::shared_ptr<SimulinkArray> array = parserPtr->getOutputData();
  std::cout << array->toString();
  CHECK(strcmp(array->getName().c_str(), "logAsSpecifiedByModelsSSIDs_") == 0);
  CHECK(strcmp(array->getDimension().c_str(), "1*1") == 0);
  CHECK(strcmp(array->getArrayType().c_str(), "Cell") == 0);
}

TEST_CASE_FIXTURE(SimulinkArrayParserTestFixture, "ArrayWithSubObjectTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("arrayobject.xml");
  parserPtr->setInputData(nodePtr);
  ErrorCode status = parserPtr->parse();
  CHECK(status == ErrorCode::SLX_OK);
  std::shared_ptr<SimulinkArray> array = parserPtr->getOutputData();
  std::cout << array->toString();
  CHECK(array->contains(6));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
