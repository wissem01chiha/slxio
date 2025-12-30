#include "Doctest.h"
#include "SimulinkParameterParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkParameterParserTestFixture {
protected:
  SimulinkParameterParserTestFixture()
      : parserPtr(nullptr), doc(nullptr){
  }

  /// @brief get an input data object for the parser from a data file
  /// @param xmlfilename name of the file from the loacl "Data/" directory
  /// @return xmlNodePtr object
  xmlNodePtr getXmlNodePtr(const char* xmlfilename) {
    /*
    char xmlfilepath[512];
    snprintf(xmlfilepath, sizeof(xmlfilepath), "%s/IO/Slx/Testing/Data/%s",
             PROJECT_ROOT_DIR, xmlfilename);

    doc = xmlReadFile(xmlfilepath, nullptr, 0);
    if (!doc) {
      throw std::runtime_error("failed to read XML file");
    }

    //xmlNodePtr root = xmlDocGetRootElement(doc);
 
    return root;*/
  
  }
  
  ~SimulinkParameterParserTestFixture() {
   
    if (parserPtr) {
      delete parserPtr;
      parserPtr = nullptr;
    }
    if (doc) {
     xmlFreeDoc(doc);
    }
  }
    
  SimulinkParameterParser *parserPtr;
  xmlDocPtr doc;
};


TEST_CASE_FIXTURE(SimulinkParameterParserTestFixture, "ParserSetInputDataTest") {

  //xmlNodePtr nodePtr = getXmlNodePtr("parameter.xml");
  //ErrorCode status = parserPtr->setInputData(nodePtr);
  //CHECK(status == ErrorCode::SLX_OK);
}

TEST_CASE_FIXTURE(SimulinkParameterParserTestFixture,
                  "GetParameterValueTest") {

  //std::shared_ptr<SimulinkParameter> parameter = parserPtr->get();
  //ASSERT_EQ(parameter->getValue(), "windows-1252");
}

TEST_CASE_FIXTURE(SimulinkParameterParserTestFixture,
                  "GetParameterClassTest") {

  //std::shared_ptr<SimulinkParameter> parameter = parserPtr->get();
  //ASSERT_EQ(parameter->getClass(), "double");
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END