#include "Doctest.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Test Constructor ")
{
    auto obj = std::make_shared<SimulinkObject>();
    CHECK(obj != nullptr);
}

TEST_CASE("Test Accept Inserted in other objects")
{
    auto obj = std::make_shared<SimulinkObject>();
    obj->SetName("TestObject");

    std::shared_ptr<SimulinkObject> subObj = std::make_shared<SimulinkObject>();
    CHECK(subObj != nullptr);

    HError status = subObj->AcceptInsert(*obj);
    CHECK(status == E_OK);
    CHECK(obj->Insert(subObj) == E_OK);

    std::weak_ptr<ISimulinkElement> parent = subObj->GetParent();

    CHECK(parent.lock() != nullptr);
}

TEST_CASE("Test Insert an object into an array parent ")
{
    auto obj = std::make_shared<SimulinkObject>();
    std::shared_ptr<SimulinkArray> subArr = std::make_shared<SimulinkArray>();
    // do sudArr insertable into obj , it should not !
    HError status = obj->AcceptInsert(*subArr);
    CHECK(status != E_OK);
    CHECK(status == E_OPERATION_NOT_SUPPORTED);
}

SLXIO_ABI_NAMESPACE_END
