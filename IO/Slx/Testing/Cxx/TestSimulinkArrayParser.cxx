#include "SimulinkArrayBuilder.h"


class SimulinkArrayBuilderTestFixture : public ::testing::Test {
protected:
  SimulinkArrayBuilder *builderPtr;
  xmlNodePtr xmlNodePtrTest;
  char path_xml[512];

  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);
    snprintf(path_xml, sizeof(path_xml), "%s/test/assets/array.xml",
             PROJECT_ROOT);
    builderPtr = new SimulinkArrayBuilder();
    xmlDocPtr doc;
    doc = xmlReadFile(path_xml, NULL, 0);
    xmlNodePtrTest = xmlDocGetRootElement(doc);
    builderPtr->build(xmlNodePtrTest);
  }

  void TearDown() override { slog_destroy(); }
};

TEST_F(SimulinkArrayBuilderTestFixture, BuildTest) {

  std::shared_ptr<SimulinkArray> obj = builderPtr->get();
  ASSERT_EQ(obj->getType(), SimulinkElementType::Array);
}