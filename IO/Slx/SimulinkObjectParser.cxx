#include "SimulinkObjectParser.h"
#include "Logger.h"
#include "SimulinkArrayParser.h"
#include "SimulinkParameterParser.h"
#include "SlxParameter.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObjectParser::SimulinkObjectParser() : dataObject(nullptr) {
  ptr_ = std::make_shared<SimulinkObject>();
}

ErrorCode SimulinkObjectParser::setInputData(const xmlNodePtr data) {

  Logger &l = Logger::getInstance();

  if (data == nullptr) {
    l.log(Logger::V_ERROR, "SimulinkObjectParser:: null node pointer received");
    buffer_.push_back(ErrorCode::SLX_ENULLPTR);
    return ErrorCode::SLX_ENULLPTR;
  }

  dataObject = data;
  return ErrorCode::SLX_OK;
}

std::shared_ptr<SimulinkObject> SimulinkObjectParser::getDataObject() const {
  return ptr_;
}

ErrorCode SimulinkObjectParser::parse() {

  Logger &l = Logger::getInstance();

  Index id = (Index)0;
  std::string name, className;

  for (xmlAttrPtr attr = dataObject->properties; attr; attr = attr->next) {

    std::string attrName = reinterpret_cast<const char *>(attr->name);
    std::string attrValue =
        reinterpret_cast<const char *>(xmlNodeGetContent(attr->children));
    if (attrName == SlxParameter::PARAM_ObjectID) {
      id = static_cast<Index>(std::stoul(attrValue));
    } else if (attrName == SlxParameter::PARAM_ClassName) {
      className = attrValue;
    } else if (attrName == SlxParameter::PARAM_PropName) {
      name = attrValue;
    }
  }
  ptr_ = std::make_shared<SimulinkObject>(id, name, className);

  for (xmlNodePtr nodePtr_ = dataObject->children; nodePtr_ != nullptr;
       nodePtr_ = nodePtr_->next) {

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Parameter) ==
            0) {

      SimulinkParameterParser *paramParserPtr = new SimulinkParameterParser();
      ErrorCode subInputStatus = paramParserPtr->setInputData(nodePtr_);
      if (subInputStatus != ErrorCode::SLX_OK) {
        buffer_.push_back(subInputStatus);
        return subInputStatus;
      }

      ErrorCode paramParseStatus = paramParserPtr->parse();
      if (paramParseStatus != ErrorCode::SLX_OK) {
        l.log(Logger::V_ERROR,
              "SimulinkObjectParser:: fail to build object Parameter");
        buffer_.push_back(paramParseStatus);
        return paramParseStatus;
      }
      ptr_->add(paramParserPtr->getDataObject());
      delete paramParserPtr;
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Object) == 0) {

      SimulinkObjectParser *subObjParserPtr = new SimulinkObjectParser();
      ErrorCode subObjInputStatus = subObjParserPtr->setInputData(nodePtr_);
      if (subObjInputStatus != ErrorCode::SLX_OK) {
        buffer_.push_back(subObjInputStatus);
        return subObjInputStatus;
      }

      ErrorCode subObjStat = subObjParserPtr->parse();
      if (subObjStat != ErrorCode::SLX_OK) {
        l.log(Logger::V_ERROR,
              "SimulinkObjectParser:: fail to build subobject element");
        buffer_.push_back(subObjStat);
        return subObjStat;
      }
      ptr_->add(subObjParserPtr->getDataObject());
    }

    if (nodePtr_->type == XML_ELEMENT_NODE &&
        xmlStrcmp(nodePtr_->name, BAD_CAST SlxParameter::SECTION_Array) == 0) {
      SimulinkArrayParser *subArrParserPtr = new SimulinkArrayParser();
      ErrorCode subArrInputStatus = subArrParserPtr->setInputData(nodePtr_);
      if (subArrInputStatus != ErrorCode::SLX_OK) {
        buffer_.push_back(subArrInputStatus);
        return subArrInputStatus;
      }

      ErrorCode subArrParseStat = subArrParserPtr->parse();
      if (subArrParseStat != ErrorCode::SLX_OK) {
        l.log(Logger::V_ERROR,
              "SimulinkObjectParser:: fail to build subArray element");
        buffer_.push_back(subArrParserPtr->getErrorBuffer());
        return subArrParseStat;
      }
      ptr_->add(subArrParserPtr->getDataObject());
      delete subArrParserPtr;
    }
  }
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
