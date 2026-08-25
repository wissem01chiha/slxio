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
        char testStr[] = "Hello XML"; // NOSONAR
        auto xmlStr = reinterpret_cast<xmlChar*>(testStr);

        obj.Initialize(xmlStr);

        CHECK(obj.Empty() == false);
        CHECK(obj.ToString() == "Hello XML");
    }

    SUBCASE("Equality operator test")
    {
        char str1[] = "Data1";     // NOSONAR
        char str2[] = "Data1";     // NOSONAR
        char str3[] = "Different"; // NOSONAR

        XmlCharDataObject obj1;
        XmlCharDataObject obj2;
        XmlCharDataObject obj3;

        obj1.Initialize(reinterpret_cast<xmlChar*>(str1));
        obj2.Initialize(reinterpret_cast<xmlChar*>(str2));
        obj3.Initialize(reinterpret_cast<xmlChar*>(str3));

        CHECK(obj1 == obj2);
        CHECK_FALSE(obj1 == obj3);
    }
}

SLXIO_ABI_NAMESPACE_END