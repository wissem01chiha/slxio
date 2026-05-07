#include "Doctest.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("CopyConstructorTest")
{
  // std::shared_ptr<SimulinkArray> original = std::make_shared<SimulinkArray>();
  // auto param = std::make_shared<SimulinkParameter>("5");

  // ReturnType status = original->AddElement(param);

  // CHECK_MESSAGE(status == E_OK,
  //   "Fail to add Parameter to Simulink Array - ReturnType: ", status);

  // SimulinkArray copy(*original);

  // //CHECK(copy.GetElementType() == original->GetElementType());
  // CHECK(copy.ToString() == original->ToString());
  // CHECK(copy.GetElementId() == original->GetElementId());
}

TEST_CASE("AddArrayTest")
{

  // std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  // auto subArray =
  //   std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  // ReturnType status = array->AddElement(subArray);
  // CHECK(status == E_OK);
}

TEST_CASE("RemoveArrayTest")
{

  // std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  // auto subArray =
  //   std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  // ReturnType AddStatus = array->AddElement(subArray);
  // CHECK(AddStatus == E_OK);

  // ReturnType RemoveStatus = array->RemoveElement(subArray);
  // CHECK(RemoveStatus == E_OK);
}

TEST_CASE("RemoveNullptrArrayTest")
{
  // std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  // ReturnType status = array->RemoveElement(nullptr);
  // CHECK(status == E_PARAMETER_NULL_PTR);
}

TEST_CASE("RemoveNotElementArrayTest")
{

  // std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  // auto subArray =
  //   std::make_shared<SimulinkArray>("Cell", "subArray", "{10*50}");

  // ReturnType status = array->RemoveElement(subArray);
  // CHECK(status == E_OK);
}

TEST_CASE("ContainsArrayTest")
{
  // std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
  // auto subObject = std::make_shared<SimulinkObject>(
  //   1, "DataTransfer", "Simulink.GlobalDataTransfer");

  // ReturnType status = array->AddElement(subObject);
  // CHECK(status == E_OK);
  // CHECK(array->Contains(1));
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END