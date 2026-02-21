#include "Doctest.h"
#include "SimulinkBlockParser.h"
#include "SlxConfig.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

class SimulinkBlockParserTestFixture {
protected:
  SimulinkBlockParserTestFixture() {}

  ~SimulinkBlockParserTestFixture() {};

  SimulinkBlockParser *parserPtr;
  xmlDocPtr doc;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END