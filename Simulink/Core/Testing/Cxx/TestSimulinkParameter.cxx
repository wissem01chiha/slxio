#include "Doctest.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  CHECK(ParameterPtr->setName("NAME") == ErrorCode::Ok);
  CHECK(std::strcmp(ParameterPtr->getName(), "NAME") == 0);
  CHECK(ParameterPtr->getValueAsString() == "10");
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10.0");
  AssertTypeEqual((Float)10.0, ParameterPtr->getValueAsDouble());
  CHECK(ParameterPtr->getValueAsDouble() == (Float)10.0);
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  AssertTypeEqual((uint8)10, ParameterPtr->getValueAsUInt8());
  CHECK(ParameterPtr->getValueAsUInt8() == (uint8)10);
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr =
      new SimulinkParameter("[10.025, 10.2, 4.5]");
  const std::vector<Float> vec = {10.025, 10.2, 4.5};
  const std::vector<Float> arr = ParameterPtr->getValueAsArray();
  AssertTypeEqual(vec, arr);

  CHECK(arr[0] == doctest::Approx(10.025).epsilon(FloatEps));
  CHECK(arr[1] == doctest::Approx(10.2).epsilon(FloatEps));
  CHECK(arr[2] == doctest::Approx(4.5).epsilon(FloatEps));
  delete ParameterPtr;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END