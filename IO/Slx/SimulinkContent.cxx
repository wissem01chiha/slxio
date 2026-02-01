#include "SimulinkContent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkContent::getBlockdiagramNodePtr(xmlNodePtr &nodePtr) const {

  Logger &l = Logger::getInstance();

  if (blockdiagram == nullptr) {
    l.log(Logger::V_ERROR,
          "blockdiagram XML document is not loaded in the SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(blockdiagram);
  if (root== nullptr) {
    l.log(Logger::V_ERROR,
          "failed to get root element from blockdiagram XML document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getPropertiesNodePtr(xmlNodePtr& nodePtr) const {

  Logger &l = Logger::getInstance();

  if(nodePtr == nullptr) {
    l.log(Logger::V_ERROR,
          "provided nodePtr is a null pointer");
    return ErrorCode::SLX_EINVAR;
  }

  if (coreProperties == nullptr) {
    l.log(Logger::V_ERROR,
          "coreProperties XML document is not loaded in SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(coreProperties);
  if (root==NULL) {
    l.log(Logger::V_ERROR,
          "failed to get root element from coreProperties XML document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getMwPropertiesNodePtr(xmlNodePtr& nodePtr) const {

  if (mwcoreProperties ==nullptr) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(mwcoreProperties);
  if (root==NULL) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getConfigSetInfoNodePtr(xmlNodePtr& nodePtr) const {

  if (configSetInfo == nullptr) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSetInfo);
  if (root==NULL) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getConfigSetNodePtr(Index &idx,
                                               xmlNodePtr& nodePtr) const {

  if (idx > configSets.size()) {
    return ErrorCode::SLX_EEOF;
  }
  if (configSets[idx] == nullptr) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSets[idx]);
  if (root==NULL) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getModelDictionary(xmlNodePtr& nodePtr) const {

  if (modelDictionary==nullptr) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(modelDictionary);
  if (root==NULL) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
