#include "Doctest.h"
#include "SimulinkBlockParser.h"

#include <iostream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkBlockParserTestFixture
{
protected:
    SimulinkBlockParserTestFixture()
        : parserPtr(new SimulinkBlockParser()), doc(nullptr)
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

    ~SimulinkBlockParserTestFixture()
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

    SimulinkBlockParser* parserPtr;
    xmlDocPtr doc;
};

TEST_CASE_FIXTURE(SimulinkBlockParserTestFixture, "ParserSetInputDataTest")
{

    xmlNodePtr nodePtr = getXmlNodePtr("block.xml");
    HError status = parserPtr->setInputData(nodePtr);
    CHECK(status == E_OK);
}

TEST_CASE_FIXTURE(SimulinkBlockParserTestFixture, "GetBlockNotNullPtrTest")
{

    xmlNodePtr nodePtr = getXmlNodePtr("block.xml");
    HError status = parserPtr->setInputData(nodePtr);
    std::shared_ptr<SimulinkBlock> dataObj = parserPtr->getOutputData();

    CHECK(dataObj != nullptr);
}

TEST_CASE_FIXTURE(SimulinkBlockParserTestFixture, "BlockParserTest")
{

    xmlNodePtr nodePtr = getXmlNodePtr("block.xml");
    HError status = parserPtr->setInputData(nodePtr);
    CHECK(status == E_OK);

    status = parserPtr->parse();
    CHECK(status == E_OK);

    std::shared_ptr<SimulinkBlock> blockObj = parserPtr->getOutputData();
    CHECK(blockObj->GetId() == 6);
    CHECK(blockObj->getName() == "Driving Cycle");
    std::cout << blockObj->ToString() << std::endl;

    auto blockType = blockObj->getBlockType();
    CHECK(blockType.ToString() == "FromWorkspace");
    CHECK(blockType.isA(SimulinkBlockType::Type::FromWorkspace));
}

TEST_CASE_FIXTURE(SimulinkBlockParserTestFixture,
                  "BlockParamtersValidationTest")
{

    xmlNodePtr nodePtr = getXmlNodePtr("block.xml");
    parserPtr->setInputData(nodePtr);
    parserPtr->parse();

    std::shared_ptr<SimulinkBlock> blockObj = parserPtr->getOutputData();
    std::shared_ptr<SimulinkParameter> parameter =
        blockObj->getParameter("Tag");
    CHECK(parameter != nullptr);
    CHECK(strcmp(parameter->getValue(), "cycle") == 0);

    parameter = blockObj->getParameter("Ports");
    CHECK(parameter != nullptr);
    CHECK(strcmp(parameter->getValue(), "[0, 5]") == 0);

    parameter = blockObj->getParameter("Position");
    CHECK(parameter != nullptr);
    CHECK(strcmp(parameter->getValue(), "[365, 262, 455, 408]") == 0);
}
SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
