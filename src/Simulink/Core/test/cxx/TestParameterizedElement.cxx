#include "doctest.h"
#include "ParameterizedElement.h"

namespace slxio
{
    TEST_CASE("Insert a nullptr parameter test")
    {
        auto param = std::make_shared<ParameterizedElement>();
        param->SetParameter("sample parameter", nullptr);
        CHECK(param->GetParameter("sample parameter") == nullptr);
    }

    TEST_CASE("Get paramter names after set test")
    {
        auto param = std::make_shared<ParameterizedElement>();
        param->SetParameter("sample parameter", nullptr);
        std::unordered_set<std::string> Set = param->GetParameterNames();
        auto iter = Set.find("sample parameter");
        CHECK(iter != Set.end());

        param->SetParameter("other parameter", nullptr);
        std::unordered_set<std::string> newSet = param->GetParameterNames();
        CHECK(newSet.size() == 2);
        CHECK(newSet.find("other parameter") != newSet.end());
        CHECK(newSet.find("sample parameter") != newSet.end());
    }

}; // namespace slxio