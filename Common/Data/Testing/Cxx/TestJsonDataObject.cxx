#include "Doctest.h"
#include "JsonDataObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("JsonDataObject constructor")
{
    JsonDataObject obj;
    CHECK(obj.Empty());
    CHECK(obj.GetImplDataObject() == nullptr);
}

TEST_CASE("JsonDataObject init with json_object")
{

    json_object* j = json_object_new_string("hello");
    JsonDataObject obj;
    obj.Initialize(j);
    CHECK_FALSE(obj.Empty());
    CHECK(obj.GetImplDataObject() == j);
    CHECK(obj.ToString() == "\"hello\"");
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
