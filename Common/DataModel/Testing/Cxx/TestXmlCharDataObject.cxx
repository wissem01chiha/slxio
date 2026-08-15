#include "Doctest.h"
#include "XmlCharDataObject.h"

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("XmlCharDataObject Test")
{
    XmlCharDataObject obj;

    SUBCASE("Empty object returns test")
    {
        CHECK(obj.Empty() == true);
        CHECK(obj.ToString() == "");
    }

    SUBCASE("Initialize test ")
    {
        const char* testStr = "Hello XML";
        xmlChar* xmlStr =
            reinterpret_cast<xmlChar*>(const_cast<char*>(testStr));

        obj.Initialize(xmlStr);

        CHECK(obj.Empty() == false);
        CHECK(obj.ToString() == "Hello XML");
    }

    SUBCASE("Equality operator test")
    {
        const char* str1 = "Data1";
        const char* str2 = "Data1";
        const char* str3 = "Different";

        XmlCharDataObject obj1;
        XmlCharDataObject obj2;
        XmlCharDataObject obj3;

        obj1.Initialize(reinterpret_cast<xmlChar*>(const_cast<char*>(str1)));
        obj2.Initialize(reinterpret_cast<xmlChar*>(const_cast<char*>(str2)));
        obj3.Initialize(reinterpret_cast<xmlChar*>(const_cast<char*>(str3)));

        CHECK(obj1 == obj2);
        CHECK_FALSE(obj1 == obj3);
    }
}

SLXIO_ABI_NAMESPACE_END