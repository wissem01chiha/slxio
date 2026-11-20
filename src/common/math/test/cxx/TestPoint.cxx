#include "doctest.h"
#include "Point.h"

namespace slxio
{
    TEST_CASE("Point to vector conversion test")
    {
        Point p((uint32_t)1, (uint32_t)2, (uint32_t)4, (uint32_t)5);
        std::vector<uint32_t> v = p.toVector();
        CHECK(!v.empty());
    }
}; // namespace slxio