#include "doctest.h"
#include "SimulinkArray.h"
#include "SimulinkObject.h"
#include "SimulinkParameter.h"

namespace slxio
{
    TEST_CASE("Simulink array default constructor test")
    {
        auto array = std::make_shared<SimulinkArray>();
        CHECK(array != nullptr);
        CHECK(array->GetModel() == nullptr);
        CHECK(array->GetName().empty());
    }

    TEST_CASE("Simulink array set/get test")
    {
        auto array = std::make_shared<SimulinkArray>();
        array->SetName("myArray");
        CHECK(array->GetName() == "myArray");
        array->SetDimension("MyDim");
        CHECK(array->GetDimension() == "MyDim");
    }

}; // namespace slxio