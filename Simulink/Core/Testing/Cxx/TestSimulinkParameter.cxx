#include "Doctest.h"
#include "SimulinkParameter.h"

class SimulinkParameterTestFixture {
public:
protected:
};

TEST_CASE_FIXTURE(SimulinkParameterTestFixture, "ConstructTest") {

  // SimulinkParameter *ParameterPtr = new SimulinkParameter("NAME", "10");
  // ASSERT_EQ(ParameterPtr->getName(), "NAME");
  // ASSERT_EQ(ParameterPtr->getValue(), "10");
  // delete ParameterPtr;
}

TEST_CASE_FIXTURE(SimulinkParameterTestFixture, "StaticCastValueTest") {

  // SimulinkParameter *ParameterPtr =
  //     new SimulinkParameter("NAME", "10.025", "double");
  // float64 val = ParameterPtr->static_cast_value<float64>();
  // EXPECT_DOUBLE_EQ(val, 10.025);
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