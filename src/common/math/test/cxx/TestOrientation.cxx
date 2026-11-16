#include "doctest.h"
#include "Orientation.h"

namespace slxio
{
    TEST_CASE("Get orientation direction test"){
        float dir =  GetDirection(Orientation::DOWN);
        CHECK(dir == (float)270);
    }
}; 