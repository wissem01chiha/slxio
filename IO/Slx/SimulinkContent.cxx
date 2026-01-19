#include "SimulinkContent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorCode SimulinkContent::getBlockdiagramNodePtr(xmlNodePtr nodePtr) const {

  if (blockdiagram) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(blockdiagram);
  if (root) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getPropertiesNodePtr(xmlNodePtr nodePtr) const {

  if (coreProperties) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(coreProperties);
  if (root) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getMwPropertiesNodePtr(xmlNodePtr nodePtr) const {

  if (mwcoreProperties) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(mwcoreProperties);
  if (root) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getConfigSetInfoNodePtr(xmlNodePtr nodePtr) const {

  if (configSetInfo) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSetInfo);
  if (root) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getConfigSetNodePtr(Index &idx,
                                               xmlNodePtr nodePtr) const {

  if (idx > configSets.size()) {
    return ErrorCode::SLX_EEOF;
  }
  if (configSets[idx]) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSets[idx]);
  if (root) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getModelDictionary(xmlNodePtr nodePtr) const {

  if (modelDictionary) {
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(modelDictionary);
  if (root) {
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
