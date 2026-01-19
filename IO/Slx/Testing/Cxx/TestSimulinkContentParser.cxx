#include "Doctest.h"
#include "SimulinkContentParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkContentParserTestFixture {
protected:

    SimulinkContentParser *parserPtr;
    File testFile;
    char path_slx[512];

    void SetUp() {
        snprintf(path_slx, sizeof(path_slx), "%s/IO/Slx/Testing/Data/test_model.slx",
                 PROJECT_ROOT_DIR);
        parserPtr = new SimulinkContentParser();
        testFile = File(path_slx);
    }
    void TearDown() {
        if (parserPtr) {
            delete parserPtr;
            parserPtr = nullptr;
        }
    }
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserSetInputDataTest") {
    
    ErrorCode status = parserPtr->setInputData(testFile);
    CHECK(status == ErrorCode::SLX_OK);
};

TEST_CASE_FIXTURE(SimulinkContentParserTestFixture, "ParserParseTest") {

    ErrorCode status = parserPtr->setInputData(testFile);
    CHECK(status == ErrorCode::SLX_OK);
    status = parserPtr->parse();
    CHECK(status == ErrorCode::SLX_OK);
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END