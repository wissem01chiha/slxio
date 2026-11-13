#include "doctest.h"
#include "SimulinkInPort.h"

namespace slxio
{
    TEST_CASE("Simulink inport default constructor")
    {
        SimulinkInPort* port = new SimulinkInPort();
        CHECK(port != nullptr);
        delete port;
    }

}; // namespace slxio
