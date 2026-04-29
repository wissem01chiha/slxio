#include "Doctest.h"
#include "SimulinkObjectParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkObjectParserTestFixture
{
protected:
  SimulinkObjectParserTestFixture()
    : parserPtr(new SimulinkObjectParser())
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

  ~SimulinkObjectParserTestFixture()
  {

    if (parserPtr)
    {
      delete parserPtr;
    }
    if (doc)
    {
      xmlFreeDoc(doc);
    }
  }

  SimulinkObjectParser* parserPtr;
  xmlDocPtr doc;
};

TEST_CASE_FIXTURE(SimulinkObjectParserTestFixture, "ParserSetInputDataTest")
{

  xmlNodePtr nodePtr = getXmlNodePtr("object.xml");
  ReturnType status = parserPtr->setInputData(nodePtr);
  CHECK(status == E_OK);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
