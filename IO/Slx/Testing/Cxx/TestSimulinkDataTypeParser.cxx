#include "Doctest.h"
#include "SimulinkDataTypeParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Test Parser Set Empty String Input Data")
{

  SimulinkDataTypeParser* sdtpPtr = new SimulinkDataTypeParser();
  CHECK(sdtpPtr->setInputData(std::string("")) == ErrorCode::SLX_EINVAR);
  delete sdtpPtr;
}

TEST_CASE("Test Parser Set Null String Input Data")
{

  SimulinkDataTypeParser* sdtpPtr = new SimulinkDataTypeParser();
  CHECK(sdtpPtr->setInputData((const char*)nullptr) == ErrorCode::SLX_EINVAR);
  delete sdtpPtr;
}

TEST_CASE("Test Parser Parse Double String Input")
{

  SimulinkDataTypeParser* sdtpPtr = new SimulinkDataTypeParser();
  CHECK(sdtpPtr->setInputData(std::string("double")) == ErrorCode::E_OK);
  CHECK(sdtpPtr->parse() == ErrorCode::E_OK);
  CHECK(*sdtpPtr->getOutputData().get() == SimulinkDataType::Double);
  delete sdtpPtr;
}

TEST_CASE("Test Parser Parse Valid Double Char String Input")
{

  SimulinkDataTypeParser* sdtpPtr = new SimulinkDataTypeParser();
  CHECK(sdtpPtr->setInputData("double") == ErrorCode::E_OK);
  CHECK(sdtpPtr->parse() == ErrorCode::E_OK);
  CHECK(*sdtpPtr->getOutputData().get() == SimulinkDataType::Double);
  delete sdtpPtr;
}

TEST_CASE("Test Parser Parse Invalid Double String Input")
{

  SimulinkDataTypeParser* sdtpPtr = new SimulinkDataTypeParser();
  CHECK(sdtpPtr->setInputData(std::string("Double")) == ErrorCode::E_OK);
  CHECK(sdtpPtr->parse() == ErrorCode::SLX_EINVAR);
  CHECK(*sdtpPtr->getOutputData().get() == SimulinkDataType::Auto);
  delete sdtpPtr;
}

TEST_CASE("Test Parser Parse Valid Uint32 String Input")
{

  SimulinkDataTypeParser* sdtpPtr = new SimulinkDataTypeParser();
  CHECK(sdtpPtr->setInputData(std::string("uint32")) == ErrorCode::E_OK);
  CHECK(sdtpPtr->parse() == ErrorCode::E_OK);
  CHECK(*sdtpPtr->getOutputData().get() == SimulinkDataType::UInt32);
  delete sdtpPtr;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END