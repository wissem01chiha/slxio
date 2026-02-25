#include "SimulinkContent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkContent::SimulinkContent()
  : l(Logger::getInstance())
{
}

SimulinkContent& SimulinkContent::operator=(const SimulinkContent& other)
{
  if (this == &other)
  {
    return *this;
  }

  blockdiagram = other.blockdiagram;
  modelDictionary = other.modelDictionary;
  configSetInfo = other.configSetInfo;
  bddefaults = other.bddefaults;
  scheduleEditor = other.scheduleEditor;
  scheduleCore = other.scheduleCore;
  graphicalInterface = other.graphicalInterface;
  coreProperties = other.coreProperties;
  mwcoreProperties = other.mwcoreProperties;
  mwcorePropertiesExtension = other.mwcorePropertiesExtension;

  configSets.clear();
  for (const auto& doc : other.configSets)
  {
    configSets.push_back(doc);
  }
  return *this;
}

ErrorCode SimulinkContent::getBlockdiagramNodePtr(xmlNodePtr& nodePtr) const
{
  if (blockdiagram == nullptr)
  {
    l.log(Logger::V_ERROR,
      "blockdiagram xml document is not loaded in the "
      "SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(blockdiagram);
  if (root == nullptr)
  {
    l.log(Logger::V_ERROR,
      "failed to get root element from blockdiagram XML document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getPropertiesNodePtr(xmlNodePtr& nodePtr) const
{
  if (nodePtr == nullptr)
  {
    l.log(Logger::V_ERROR, "provided nodePtr is a null pointer");
    return ErrorCode::SLX_EINVAR;
  }

  if (coreProperties == nullptr)
  {
    l.log(Logger::V_ERROR,
      "coreProperties xml document is not loaded in SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(coreProperties);
  if (root == NULL)
  {
    l.log(Logger::V_ERROR,
      "failed to get root element from coreProperties XML document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getMwPropertiesNodePtr(xmlNodePtr& nodePtr) const
{
  if (mwcoreProperties == nullptr)
  {
    l.log(Logger::V_ERROR,
      "mwcoreProperties xml document is not loaded in SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(mwcoreProperties);
  if (root == NULL)
  {
    l.log(Logger::V_ERROR,
      "failed to get root element from mwcoreProperties xml "
      "document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getConfigSetInfoNodePtr(xmlNodePtr& nodePtr) const
{
  if (configSetInfo == nullptr)
  {
    l.log(Logger::V_ERROR,
      "configSetInfo xml document is not loaded in SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSetInfo);
  if (root == NULL)
  {
    l.log(Logger::V_ERROR,
      "failed to get root element from configSetInfo xml document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getConfigSetNodePtr(
  Index& idx, xmlNodePtr& nodePtr) const
{
  if (idx > configSets.size())
  {
    return ErrorCode::SLX_EEOF;
  }
  if (configSets[idx] == nullptr)
  {
    l.log(Logger::V_ERROR, "configSet at index %d is a null pointer", idx);
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSets[idx]);
  if (root == NULL)
  {
    l.log(Logger::V_ERROR,
      "failed to get root element from configSet xml document at "
      "index %d",
      idx);
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkContent::getModelDictionaryPtr(xmlNodePtr& nodePtr) const
{
  if (modelDictionary == nullptr)
  {
    l.log(Logger::V_ERROR,
      "modelDictionary XML document is not loaded in "
      "SimulinkContent");
    return ErrorCode::SLX_ENULLPTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(modelDictionary);
  if (root == NULL)
  {
    l.log(Logger::V_ERROR,
      "failed to get root element from modelDictionary xml document");
    return ErrorCode::SLX_ENULLPTR;
  }
  nodePtr = root;
  return ErrorCode::SLX_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
