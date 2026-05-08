#include "Doctest.h"
#include "SimulinkConfigSet.h"
#include "SimulinkConfigSetManager.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("AddConfigurationSetTest")
{
  SimulinkConfigSetManager manager;
  auto configSet = std::make_shared<SimulinkConfigSet>();
  ReturnType status = manager.AddElement(configSet);
  CHECK(status == E_OK);
}

TEST_CASE("RemoveConfigurationSetTest")
{
  SimulinkConfigSetManager manager;
  auto configSet = std::make_shared<SimulinkConfigSet>();
  manager.AddElement(configSet);
  ReturnType status = manager.RemoveElement(configSet);
  CHECK(status == E_OK);
}

TEST_CASE("GetActiveConfigurationSetTest")
{
  SimulinkConfigSetManager manager;
  auto configSet1 = std::make_shared<SimulinkConfigSet>();
  auto configSet2 = std::make_shared<SimulinkConfigSet>();

  manager.AddElement(configSet1);
  manager.AddElement(configSet2);

  configSet1->activate();

  std::shared_ptr<SimulinkConfigSet> activeConfig =
    manager.getActiveConfiguration();
  CHECK(activeConfig == configSet1);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END