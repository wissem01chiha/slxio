#include "SimulinkObjectBuilder.h"
#include "SlxioTestConfig.h"
#include <gtest/gtest.h>
#include <slog.h>

using namespace slxio;

class SimulinkObjectBuilderTestFixture : public ::testing::Test {
protected:
  SimulinkObjectBuilder *builderPtr;
  xmlNodePtr xmlNodePtrTest;
  char path_xml[512];

  void SetUp() override {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);

    snprintf(path_xml, sizeof(path_xml), "%s/test/assets/object.xml",
             PROJECT_ROOT);

    builderPtr = new SimulinkObjectBuilder();

    xmlDocPtr doc;
    doc = xmlReadFile(path_xml, NULL, 0);
    xmlNodePtrTest = xmlDocGetRootElement(doc);
    builderPtr->build(xmlNodePtrTest);
  }
  void TearDown() override { slog_destroy(); }
};

TEST_F(SimulinkObjectBuilderTestFixture, BuildTest) {

  std::shared_ptr<SimulinkObject> obj = builderPtr->get();
  ASSERT_EQ(obj->getID(), 8);
  ASSERT_EQ(obj->getType(), SimulinkElementType::Object);
}