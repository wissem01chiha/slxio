#include "SimulinkParameter.h"
#include "slxDoctest.h"

namespace slxio {
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  CHECK(ParameterPtr->setName("NAME") == E_OK);
  CHECK(std::strcmp(ParameterPtr->getName(), "NAME") == 0);
  std::string strval;
  CHECK(ParameterPtr->getValueAsString(strval) == E_OK);
  CHECK(strval == "10");
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  CHECK(ParameterPtr->GetType().isA(SimulinkElementType::Parameter));
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10.0");

  Float32 dblVal = 0.0;
  CHECK(ParameterPtr->getValueAsDouble(dblVal) == E_OK);
  CHECK(dblVal == (Float32)10.0);

  Float32 sngVal = 0.0;
  CHECK(ParameterPtr->getValueAsSingle(sngVal) == E_OK);
  CHECK(sngVal == (Float32)10.0f);

  UInt8 u8Val = 0;
  CHECK(ParameterPtr->getValueAsUInt8(u8Val) == E_OK);
  CHECK(u8Val == (UInt8)10);

  UInt16 u16Val = 0;
  CHECK(ParameterPtr->getValueAsUInt16(u16Val) == E_OK);
  CHECK(u16Val == (UInt16)10);

  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr =
      new SimulinkParameter("[10.025, 10.2, 4.5]");

  const std::vector<Float32> expected = {10.025f, 10.2f, 4.5f};

  std::vector<Float32> arr;
  CHECK(ParameterPtr->getValueAsArray(arr) == E_OK);

  CHECK(arr[0] == doctest::Approx(10.025).epsilon(SLXIO_FLOAT_EPS));
  CHECK(arr[1] == doctest::Approx(10.2).epsilon(SLXIO_FLOAT_EPS));
  CHECK(arr[2] == doctest::Approx(4.5).epsilon(SLXIO_FLOAT_EPS));

  delete ParameterPtr;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
