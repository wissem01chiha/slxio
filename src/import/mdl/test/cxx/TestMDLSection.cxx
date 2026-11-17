#include "doctest.h"
#include "MDLSection.h"

namespace slxio
{

    TEST_CASE("MDLSection default constructor test")
    {
        auto section = std::make_shared<MDLSection>();
        CHECK_NE(section, nullptr);
    }

    TEST_CASE("MDLSection parent and child format test")
    {
        auto child = std::make_shared<MDLSection>("child", 2);
        auto parent = std::make_shared<MDLSection>("parent",
                                                   std::vector<MDLSection::SectionPtr>{child},
                                                   std::unordered_map<std::string, std::string>{},
                                                   1);
        CHECK(child->GetParentSection() == parent.get());
        REQUIRE(parent->GetSubSections("child").size() == 1);
        CHECK(parent->GetSubSections("child").front() == child);
    }
}; // namespace slxio