#include "Doctest.h"
#include "SimulinkParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkParameterTestFixture {
public:
protected:
};

TEST_CASE_FIXTURE(SimulinkParameterTestFixture, "ConstructTest") {

  SimulinkParameter *ParameterPtr = new SimulinkParameter("10");
  CHECK(ParameterPtr->setName("NAME")== ErrorCode::Ok );
  CHECK(ParameterPtr->getName()== "NAME");
  CHECK(ParameterPtr->getValueAsChar()== "10");
  delete ParameterPtr;
}


TEST_CASE_FIXTURE(SimulinkParameterTestFixture, "SetAndCastValueTest") {

  // SimulinkParameter *ParameterPtr = new SimulinkParameter();
  // SimulinkErrorType status = ParameterPtr->setValue("10.25");
  // ASSERT_EQ(status, SimulinkErrorType::SLX_OK);

  // float64 val = ParameterPtr->static_cast_value<float64>();
  // EXPECT_TRUE(std::isnan(val));
}

TEST_CASE_FIXTURE(SimulinkParameterTestFixture, "StaticCastVectorTest") {

  // SimulinkParameter *ParameterPtr =
  //     new SimulinkParameter("NAME", "[10.025, 10.2, 4.5]", "double");
  // std::vector<float64> val = ParameterPtr->static_cast_vector<float64>();
  // EXPECT_NEAR(val[0], 10.025, 1e-6);
  // EXPECT_NEAR(val[1], 10.2, 1e-6);
  // EXPECT_NEAR(val[2], 4.5, 1e-6);
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END