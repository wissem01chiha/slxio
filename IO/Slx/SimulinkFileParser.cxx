#include "SimulinkFileParser.h"
#include "Logger.h"
#include "SimulinkContentParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkFileParser::setInputData(const File fs)
{
  dataObject = fs;
  return ErrorCode::E_OK;
}

ErrorCode SimulinkFileParser::parse()
{
  SimulinkContentParser contentParser;
  ErrorCode status = contentParser.setInputData(dataObject);
  if (status != ErrorCode::E_OK)
  {
    return status;
  }
  status = contentParser.parse();
  if (status != ErrorCode::E_OK)
  {
    return status;
  }
  std::shared_ptr<SimulinkContent> content_ = contentParser.getOutputData();
  ptr->content = *(content_.get());

  xmlNodePtr propertiesNodePtr = new xmlNode();
  ErrorCode propertieStatus = content_->getPropertiesNodePtr(propertiesNodePtr);

  if (propertieStatus != ErrorCode::E_OK)
  {
    l.log(Logger::V_ERROR,
      "failed to get properties node pointer from SimulinkContent");
    return propertieStatus;
  }

  for (xmlNodePtr cur = propertiesNodePtr->children; cur != nullptr;
    cur = cur->next)
  {
    std::string nodeName = (const char*)cur->name;
    xmlChar* content = xmlNodeGetContent(cur);
    std::string nodeContent = (const char*)content;
    if (nodeName == "category")
    {
      ptr->category = nodeContent;
    }
    else if (nodeName == "creator")
    {
      ptr->creator = nodeContent;
    }
    else if (nodeName == "lastModifiedBy")
    {
      ptr->lastModifiedBy = nodeContent;
    }
    else if (nodeName == "revision")
    {
      ptr->revision = nodeContent;
    }
    else if (nodeName == "version")
    {
      ptr->matlabVersion = nodeContent;
    }
  }

  return ErrorCode::E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
