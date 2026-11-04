#include "Doctest.h"
#include "SimulinkLine.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkLineTestFixture
{
protected:
};

TEST_CASE_FIXTURE(SimulinkLineTestFixture, "SimulinkLine Constructor Test")
{
    SimulinkLine line;
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
