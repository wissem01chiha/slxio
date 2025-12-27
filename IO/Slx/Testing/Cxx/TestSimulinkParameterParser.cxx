#include "SimulinkParameterBuilder.h"


using namespace slxio;

class SimulinkParameterBuilderTestFixture : public ::testing::Test {
protected:
  SimulinkParameterBuilder *builderPtr;
  xmlNodePtr xmlNodePtrTest;
  char path_xml[512];

  void SetUp() override {

    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);

    snprintf(path_xml, sizeof(path_xml), "%s/test/assets/parameter.xml",
             PROJECT_ROOT);

    builderPtr = new SimulinkParameterBuilder();

    xmlDocPtr doc;
    doc = xmlReadFile(path_xml, NULL, 0);
    xmlNodePtrTest = xmlDocGetRootElement(doc);

    builderPtr->build(xmlNodePtrTest);
  }
};

TEST_F(SimulinkParameterBuilderTestFixture, GlobalBuildTest) {

  std::shared_ptr<SimulinkParameter> parameter = builderPtr->get();
  ASSERT_EQ(parameter->getName(), "SavedCharacterEncoding");
}

TEST_F(SimulinkParameterBuilderTestFixture, GetParameterValueTest) {

  std::shared_ptr<SimulinkParameter> parameter = builderPtr->get();
  ASSERT_EQ(parameter->getValue(), "windows-1252");
}

TEST_F(SimulinkParameterBuilderTestFixture, GetParameterClassTest) {

  std::shared_ptr<SimulinkParameter> parameter = builderPtr->get();
  ASSERT_EQ(parameter->getClass(), "double");
}
