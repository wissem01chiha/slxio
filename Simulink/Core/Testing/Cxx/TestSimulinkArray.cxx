#include "Doctest.h"
#include "SimulinkArray.h"
#include "SimulinkECH.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("Test default constructor")
{
    std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();
    CHECK(array != nullptr);

    ISimulinkElement* newArray = array->New();
    CHECK(newArray != nullptr);
    delete newArray;
}

TEST_CASE("Test AcceptInsert Into other array")
{

    auto array = std::make_shared<SimulinkArray>();

    array->SetName("ParentArray");
    std::shared_ptr<SimulinkArray> subArray = std::make_shared<SimulinkArray>();
    CHECK(array != nullptr);
    CHECK(subArray != nullptr);

    HError status = subArray->AcceptInsert(*array);

    CHECK(status == E_OK);

    CHECK(array->Insert(subArray) == E_OK);

    std::weak_ptr<ISimulinkElement> parent = subArray->GetParent();
    /**
     * The correct way to access a pointer if the resource is still
     * valid is by calling lock, which returns a shared_ptr to the
     * resource if it's valid, or an empty/null shared_ptr if the
     * resource is not valid
     */
    CHECK(parent.lock() != nullptr);
}

TEST_CASE("Test AcceptInsert Into other object")
{
    std::shared_ptr<SimulinkObject> object = std::make_shared<SimulinkObject>();
    std::shared_ptr<SimulinkArray> array = std::make_shared<SimulinkArray>();

    CHECK(object != nullptr);
    CHECK(array != nullptr);

    HError status = array->AcceptInsert(*object);

    CHECK(status == E_OK);

    CHECK(object->Insert(array) == E_OK);

    std::weak_ptr<ISimulinkElement> parent = array->GetParent();
    CHECK(parent.lock() != nullptr);
}

TEST_CASE("Test Insert a nullptr ")
{
    SimulinkArray* array = new SimulinkArray();
    CHECK(array != nullptr);

    HError status = array->Insert(nullptr);
    CHECK(status == E_CHILD_NULLPTR_RECEIVED);

    delete array;
}

TEST_CASE("Test Array Set Parameter Name ")
{
    SimulinkArray* array = new SimulinkArray();

    array->SetName("TestArray");

    CHECK(array->GetName() == "TestArray");

    delete array;
}

TEST_CASE("Test Array Immutable Set/Get Parameter ")
{

    auto array = std::make_shared<SimulinkArray>();

    // create aSimulinkParameter object
    auto param = std::make_shared<SimulinkParameter>();
    CHECK_NOTHROW(param->SetName(std::string("TestParam")));

    param->SetSimulinkDataType(SimulinkDataType::Boolean);

    CHECK_NOTHROW(array->AddParam(std::string("TestParam"), param));

    auto p = array->GetParam(std::string("TestParam"));
    CHECK(p != nullptr);
}

SLXIO_ABI_NAMESPACE_END
