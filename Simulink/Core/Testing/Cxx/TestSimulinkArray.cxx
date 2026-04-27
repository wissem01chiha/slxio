#include "Doctest.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("CopyConstructorTest")
{
  std::shared_ptr<SimulinkArray> original = std::make_shared<SimulinkArray>();
  auto param = std::make_shared<SimulinkParameter>("5");

  ErrorCode status = original->add(param);

  CHECK_MESSAGE(status == ErrorCode::E_OK,
    "Fail to add Parameter to Simulink Array - ErrorCode: ", status);

  SimulinkArray copy(*original);

  CHECK(copy.getType() == original->getType());
  CHECK(copy.toString() == original->toString());
  CHECK(copy.getID() == original->getID());
}

TEST_CASE("AddArrayTest")
{

  std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  auto subArray =
    std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode status = array->add(subArray);
  CHECK(status == ErrorCode::E_OK);
}

TEST_CASE("RemoveArrayTest")
{

  std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  auto subArray =
    std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode AddStatus = array->add(subArray);
  CHECK(AddStatus == ErrorCode::E_OK);

  ErrorCode RemoveStatus = array->remove(subArray);
  CHECK(RemoveStatus == ErrorCode::E_OK);
}

TEST_CASE("RemoveNullptrArrayTest")
{
  std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  ErrorCode status = array->remove(nullptr);
  CHECK(status == ErrorCode::SLX_ENULLPTR);
}

TEST_CASE("RemoveNotElementArrayTest")
{

  std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  auto subArray =
    std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  ErrorCode status = array->remove(subArray);
  CHECK(status == ErrorCode::E_OK);
}

TEST_CASE("ContainsArrayTest")
{
  std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  auto subObject = std::make_shared<SimulinkObject>(
    1, "DataTransfer", "Simulink.GlobalDataTransfer");

  ErrorCode status = array->add(subObject);
  CHECK(status == ErrorCode::E_OK);
  CHECK(array->contains(1));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END