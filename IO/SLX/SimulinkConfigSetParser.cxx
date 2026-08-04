#include "SimulinkConfigSetParser.h"
#include "SimulinkObjectParser.h"
#include "SlxParameter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SResult SimulinkConfigSetParser::setInputData(const xmlNodePtr data)
{
  if (!data)
  {
    // l.log(Logger::V_ERROR,
      "SimulinkConfigSetParser::null data node pointer received");
      return E_PARAMETER_NULL_PTR;
  }

  if (xmlStrcmp(data->name, BAD_CAST SlxParameter::SECTION_ConfigSet) != 0)
  {
    // l.log(Logger::V_ERROR,
      "SimulinkConfigSetParser::setInputData failed: expected node "
      "<ConfigSet>, but got <%s>",
      data->name);
      return E_INVALID_ARGUMENT;
  }

  return E_OK;
}

SResult SimulinkConfigSetParser::parse()
{
  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next)
  {

    std::unique_ptr<SimulinkObjectParser> objParserPtr =
      std::make_unique<SimulinkObjectParser>();
    SResult objInputStatus = objParserPtr->setInputData(nodePtr_);
    if (objInputStatus != E_OK)
    {
      // l.log(Logger::V_ERROR,
        "SimulinkConfigSetParser:: failed to set input "
        "data for object parser");
        return objInputStatus;
    }

    auto cfgPtr =
      std::dynamic_pointer_cast<SimulinkConfigSet>(objParserPtr->getOutputData());
    if (!cfgPtr)
    {
      // l.log(Logger::V_ERROR,
        "SimulinkConfigSetParser:: failed to cast parsed "
        "object to SimulinkConfigSet");
        return SLX_ECASTFAIL;
    }
    ptr = cfgPtr;
  }
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
};
