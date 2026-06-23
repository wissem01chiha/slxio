#include "Doctest.h"
#include "SimulinkConfigSet.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("ConstructorTest")
{
  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");
  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  CHECK(strcmp(configCst->getName().c_str(), "MyObject") == 0);
  CHECK(configCst->GetId() == 42);
  delete configCst;
}

TEST_CASE("IsActiveTest")
{
  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");
  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  CHECK(configCst->isActive() == false);
  delete configCst;
}

TEST_CASE("SetParameterTest")
{
  // initialize SimulinkObject with a parameter, as SimulinkConfigSet do not
  // support adding new parameters, only modify existing ones !!!
  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");
  auto param = std::make_shared<SimulinkParameter>();
  param->setName("Solver");
  param->setValue("Discrete");
  ReturnType ec = object.AddElement(param);
  CHECK(ec == E_OK);

  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  ReturnType status = configCst->setParameter("Solver", "ode45");
  CHECK(status == E_OK);
  std::cout << configCst->ToString() << std::endl;
  CHECK(strcmp(configCst->getParameter("Solver"), "ode45") == 0);
  delete configCst;
}

TEST_CASE("AddAndGetParameterTest")
{
  auto param = std::make_shared<SimulinkParameter>();
  param->setName("Solver");
  param->setValue("Discrete");

  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");

  ReturnType ec = object.AddElement(param);
  CHECK(ec == E_OK);
  std::cout << object.ToString() << std::endl;

  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  ReturnType status = configCst->setParameter("Solver", "Discrete");
  CHECK(status == E_OK);
  CHECK(strcmp(configCst->getParameter("Solver"), "Discrete") == 0);
  delete configCst;
}

TEST_CASE("GetParameterReturnsEmptyIfNotFound")
{
  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");
  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  CHECK(strcmp(configCst->getParameter("NonExistent"), "") == 0);
  delete configCst;
}

SLXIO_ABI_NAMESPACE_END
};
