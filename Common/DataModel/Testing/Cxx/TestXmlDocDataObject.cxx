#include "Doctest.h"
#include "XmlDocDataObject.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("XmlDocDataObject constructor")
{
    XmlDocDataObject obj;
    CHECK(obj.Empty());
    CHECK(obj.GetImplDataObject() == nullptr);
}

TEST_CASE("XmlDocDataObject init with xmlDocPtr")
{
    xmlDocPtr doc = xmlNewDoc(BAD_CAST "1.0");
    XmlDocDataObject obj;
    obj.Initialize(doc);

    CHECK_FALSE(obj.Empty());
    CHECK(obj.GetImplDataObject() == doc);
}

TEST_CASE("XmlDocDataObject = operator")
{
    xmlDocPtr doc1 = xmlNewDoc(BAD_CAST "1.0");
    xmlDocPtr doc2 = xmlNewDoc(BAD_CAST "1.0");

    XmlDocDataObject obj1;
    XmlDocDataObject obj2;
    obj1.Initialize(doc1);
    obj2.Initialize(doc2);

    bool result = obj1 == obj2;
    CHECK(result);
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
