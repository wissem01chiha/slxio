#include "Doctest.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  CHECK(ParameterPtr->setName("NAME") == ErrorCode::Ok);
  CHECK(std::strcmp(ParameterPtr->getName(), "NAME") == 0);
  std::string strval;
  CHECK(ParameterPtr->getValueAsString(strval) == ErrorCode::Ok);
  CHECK(strval == "10");
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  CHECK(ParameterPtr->getType().isA(SimulinkElementType::Parameter));
  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10.0");

  Float dblVal = 0.0;
  CHECK(ParameterPtr->getValueAsDouble(dblVal) == ErrorCode::Ok);
  CHECK(dblVal == (Float)10.0);

  Float sngVal = 0.0;
  CHECK(ParameterPtr->getValueAsSingle(sngVal) == ErrorCode::Ok);
  CHECK(sngVal == (Float)10.0f);

  uint8 u8Val = 0;
  CHECK(ParameterPtr->getValueAsUInt8(u8Val) == ErrorCode::Ok);
  CHECK(u8Val == (uint8)10);

  uint16 u16Val = 0;
  CHECK(ParameterPtr->getValueAsUInt16(u16Val) == ErrorCode::Ok);
  CHECK(u16Val == (uint16)10);

  delete ParameterPtr;
}

TEST_CASE("SimulinkParameter") {

  SimulinkParameter *ParameterPtr =
      new SimulinkParameter("[10.025, 10.2, 4.5]");

  const std::vector<Float> expected = {10.025f, 10.2f, 4.5f};

  std::vector<Float> arr;
  CHECK(ParameterPtr->getValueAsArray(arr) == ErrorCode::Ok);

  CHECK(arr[0] == doctest::Approx(10.025).epsilon(FloatEps));
  CHECK(arr[1] == doctest::Approx(10.2).epsilon(FloatEps));
  CHECK(arr[2] == doctest::Approx(4.5).epsilon(FloatEps));

  delete ParameterPtr;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END