#include "Doctest.h"
#include "SimulinkConfigSetParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkConfigSetParserTestFixture
{
protected:
  SimulinkConfigSetBuilder* builderPtr;
  xmlNodePtr xmlNodePtrTest;
  char path_xml[512];

  void SetUp() override
  {
    slog_init("logfile", SLOG_FLAGS_ALL, 0);
    slog_disable(SLOG_TRACE);

    snprintf(
      path_xml, sizeof(path_xml), "%s/test/assets/configSet.xml", PROJECT_ROOT);
    builderPtr = new SimulinkConfigSetBuilder();
    xmlDocPtr doc;
    doc = xmlReadFile(path_xml, NULL, 0);
    xmlNodePtrTest = xmlDocGetRootElement(doc);
    // builderPtr->build(xmlNodePtrTest);
  }

  void TearDown() override
  {
    delete builderPtr;
    slog_destroy();
  }
};

TEST_F(SimulinkConfigSetBuilderTestFixture, NullPtrHandleTest)
{

  SimulinkErrorType status = builderPtr->build(nullptr);
  ASSERT_EQ(status, SimulinkErrorType::SLX_ERR_NULL_PTR);
}

TEST_F(SimulinkConfigSetBuilderTestFixture, BuildTest)
{

  std::shared_ptr<SimulinkConfigSet> obj = builderPtr->get();
  // ASSERT_EQ(obj->GetElementType(), SimulinkElementType::ConfigSet);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
