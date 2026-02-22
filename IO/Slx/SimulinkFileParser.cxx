#include "SimulinkFileParser.h"
#include "Logger.h"
#include "SimulinkContentParser.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkFileParser::SimulinkFileParser() {
  ptr_ = std::make_shared<SimulinkFile>();
  dataObject = File();
}

ErrorCode SimulinkFileParser::setInputData(const File fs) {
  dataObject = fs;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkFileParser::parse() {

  SimulinkContentParser contentParser;
  ErrorCode status = contentParser.setInputData(dataObject);
  if (status != ErrorCode::SLX_OK) {
    buffer_.push_back(status);
    return status;
  }
  status = contentParser.parse();
  if (status != ErrorCode::SLX_OK) {
    buffer_.push_back(status);
    return status;
  }
  std::shared_ptr<SimulinkContent> content_ = contentParser.getOutputData();
  ptr_->content = *(content_.get());

  xmlNodePtr propertiesNodePtr = new xmlNode();
  ErrorCode propertieStatus = content_->getPropertiesNodePtr(propertiesNodePtr);
  if (propertieStatus != ErrorCode::SLX_OK) {
    buffer_.push_back(propertieStatus);
    return propertieStatus;
  }

  for (xmlNodePtr cur = propertiesNodePtr->children; cur != nullptr;
       cur = cur->next) {
    std::string nodeName = (const char *)cur->name;
    xmlChar *content = xmlNodeGetContent(cur);
    std::string nodeContent = (const char *)content;
    if (nodeName == "category") {
      ptr_->category = nodeContent;
    } else if (nodeName == "creator") {
      ptr_->creator = nodeContent;
    } else if (nodeName == "lastModifiedBy") {
      ptr_->lastModifiedBy = nodeContent;
    } else if (nodeName == "revision") {
      ptr_->revision = nodeContent;
    } else if (nodeName == "version") {
      ptr_->matlabVersion = nodeContent;
    }
  }

  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkFile> SimulinkFileParser::getOutputData() const {
  return ptr_;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
