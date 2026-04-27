#include "Doctest.h"
#include "SimulinkConfigSet.h"
#include "SimulinkConfigSetManager.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("AddConfigurationSetTest")
{
  SimulinkConfigSetManager manager;
  auto configSet = std::make_shared<SimulinkConfigSet>();
  ErrorCode status = manager.add(configSet);
  CHECK(status == ErrorCode::E_OK);
}

TEST_CASE("RemoveConfigurationSetTest")
{
  SimulinkConfigSetManager manager;
  auto configSet = std::make_shared<SimulinkConfigSet>();
  manager.add(configSet);
  ErrorCode status = manager.remove(configSet);
  CHECK(status == ErrorCode::E_OK);
}

TEST_CASE("GetActiveConfigurationSetTest")
{
  SimulinkConfigSetManager manager;
  auto configSet1 = std::make_shared<SimulinkConfigSet>();
  auto configSet2 = std::make_shared<SimulinkConfigSet>();

  manager.add(configSet1);
  manager.add(configSet2);

  configSet1->activate();

  std::shared_ptr<SimulinkConfigSet> activeConfig =
    manager.getActiveConfiguration();
  CHECK(activeConfig == configSet1);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END