#include "Doctest.h"
#include "SimulinkConfigSet.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("ConstructorTest")
{
  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");
  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  CHECK(strcmp(configCst->getName().c_str(), "MyObject") == 0);
  CHECK(configCst->getID() == 42);
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
  ErrorCode ec = object.add(param);
  CHECK(ec == ErrorCode::SLX_OK);

  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  ErrorCode status = configCst->setParameter("Solver", "ode45");
  CHECK(status == ErrorCode::SLX_OK);
  std::cout << configCst->toString() << std::endl;
  CHECK(strcmp(configCst->getParameter("Solver"), "ode45") == 0);
  delete configCst;
}

TEST_CASE("AddAndGetParameterTest")
{
  auto param = std::make_shared<SimulinkParameter>();
  param->setName("Solver");
  param->setValue("Discrete");

  SimulinkObject object(42, "1.0", "MyObject", "SimulinkConfigSet");

  ErrorCode ec = object.add(param);
  CHECK(ec == ErrorCode::SLX_OK);
  std::cout << object.toString() << std::endl;

  SimulinkConfigSet* configCst = new SimulinkConfigSet(object);
  ErrorCode status = configCst->setParameter("Solver", "Discrete");
  CHECK(status == ErrorCode::SLX_OK);
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
SLXIO_NAMESPACE_END