#include "Doctest.h"
#include "Options.h"
#include "XmlNodeDataObject.h"

std::string GetDataFilePath(const std::string& filename)
{
    return std::string(PROJECT_SOURCE_DIR) + "/Common/DataModel/Testing/Data/" +
           filename;
}

using namespace slxio;
SLXIO_ABI_NAMESPACE_BEGIN

TEST_CASE("XmlNodeDataObject constructor")
{
    XmlNodeDataObject obj;
    CHECK(obj.Empty());
    CHECK(obj.GetImplDataObject() == nullptr);
}

TEST_CASE("XmlNodeDataObject init with xmlChar")
{
    xmlDocPtr doc = xmlParseFile(GetDataFilePath("sample.xml").c_str());
    xmlNodePtr root = xmlDocGetRootElement(doc);

    XmlNodeDataObject obj;
    obj.Initialize(doc);

    CHECK_FALSE(obj.Empty());
    CHECK(obj.GetImplDataObject() == doc);
}

SLXIO_ABI_NAMESPACE_END
