#include "Doctest.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkArrayTestFixture {
public:
protected:
};

TEST_CASE_FIXTURE(SimulinkArrayTestFixture, "CopyConstructorTest") {

  SimulinkArray *original = new SimulinkArray();
  auto param = std::make_shared<SimulinkParameter>("5");

  ErrorCode status = original->add(param);
  CHECK_MESSAGE(
      status == ErrorCode::Ok,
      "Fail to add Parameter to Simulink Array - ErrorCode: ", status);
  //   SimulinkArray copy(*original);

  //  CHECK(copy.getType()== original->getType());
  //   CHECK(copy.toString()== original->toString());
  //   CHECK(copy.getID()==original->getID());
  delete original;
}

TEST_CASE_FIXTURE(SimulinkArrayTestFixture, "AddArrayTest") {

  SimulinkArray *array = new SimulinkArray();
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode status = array->add(subArray);
  CHECK(status == ErrorCode::Ok);
  delete array;
}

TEST_CASE_FIXTURE(SimulinkArrayTestFixture, "RemoveArrayTest") {

  SimulinkArray *array = new SimulinkArray();
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode AddStatus = array->add(subArray);
  CHECK(AddStatus == ErrorCode::Ok);

  ErrorCode RemoveStatus = array->remove(subArray);
  CHECK(RemoveStatus == ErrorCode::Ok);
  delete array;
}

TEST_CASE_FIXTURE(SimulinkArrayTestFixture, "RemoveNullptrArrayTest") {

  SimulinkArray *array = new SimulinkArray();
  ErrorCode status = array->remove(nullptr);
  CHECK(status == ErrorCode::SLX_ERR_NULL_PTR);
  delete array;
}

TEST_CASE_FIXTURE(SimulinkArrayTestFixture, "RemoveNotElementArrayTest") {

  SimulinkArray *array = new SimulinkArray();
  auto subArray =
      std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode status = array->remove(subArray);
  CHECK(status == ErrorCode::Ok);
  delete array;
}

TEST_CASE_FIXTURE(SimulinkArrayTestFixture, "ConatinsArrayTest") {

  SimulinkArray *array = new SimulinkArray();
  auto subObject = std::make_shared<SimulinkObject>(
      1, "DataTransfer", "Simulink.GlobalDataTransfer");

  ErrorCode status = array->add(subObject);
  CHECK(status == ErrorCode::Ok);
  CHECK(array->contains(1));
  delete array;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END