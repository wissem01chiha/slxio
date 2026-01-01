#include "SimulinkArrayParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArrayParser ::SimulinkArrayParser() : dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkArray>();
}

ErrorCode SimulinkArrayParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();

  if (data == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkArrayParser:: null node pointer received");
    buffer_.push_back(ErrorCode::SLX_ENULLPTR);
    return ErrorCode::SLX_ENULLPTR;
  }

  if (data->name == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkArrayParser:: invalid xmlNodePtr received");
    buffer_.push_back(ErrorCode::SLX_EINVAR);
    return ErrorCode::SLX_EINVAR;
  }

  dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkArray> SimulinkArrayParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkArrayParser::parse() {

  Logger &l = Logger::getInstance();

  Index id = (Index)0;
  std::string name, dimension, type;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next) {

    std::string attrName = reinterpret_cast<const char *>(attr->name);
    std::string attrValue =
        reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));

    if (attrName == SlxParameter::PARAM_PropName) {
      name = attrValue;
    }

    if (attrName == SlxParameter::PARAM_Type) {
      type = attrValue;
    }

    if (attrName == SlxParameter::PARAM_Dimension) {
      dimension = attrValue;
    }

    this->ptr_ = std::make_shared<SimulinkArray>(type, name, dimension);

    for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
         nodePtr_ = nodePtr_->next) {

      if (nodePtr_->type == XML_ELEMENT_NODE &&
          xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) ==
              0) {
        SimulinkArrayParser *subArrParserPtr = new SimulinkArrayParser();
        ErrorCode subInputStatus = subArrParserPtr->setInputData(nodePtr_);
        if (subInputStatus != ErrorCode::SLX_OK) {
          buffer_.push_back(subInputStatus);
          return subInputStatus;
        }
        ErrorCode subArrParseStatus = subArrParserPtr->parse();
        if (subArrParseStatus != ErrorCode::SLX_OK) {
          l.log(Logger::V_ERROR, "SimulinkArrayParser :: fail to "
                                 "build sub Array element");
          buffer_.push_back(subArrParserPtr->getErrorBuffer());
          return subArrParseStatus;
        }
        ptr_->add(subArrParserPtr->getDataObject());
        delete subArrParserPtr;
      }
    }
  }
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
