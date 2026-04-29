#include "SimulinkContent.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkContent::SimulinkContent()
  : l(Logger::GetInstance())
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

ReturnType SimulinkContent::getBlockdiagramNodePtr(xmlNodePtr& nodePtr) const
{
  if (blockdiagram == nullptr)
  {
    //l.log(Logger::V_ERROR,
      "blockdiagram xml document is not loaded in the "
      "SimulinkContent");
    return E_FUNC_PARAM_NULL_PTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(blockdiagram);
  if (root == nullptr)
  {
    //l.log(Logger::V_ERROR,
      "failed to get root element from blockdiagram XML document");
    return E_FUNC_PARAM_NULL_PTR;
  }
  nodePtr = root;
  return E_OK;
}

ReturnType SimulinkContent::getPropertiesNodePtr(xmlNodePtr& nodePtr) const
{
  if (nodePtr == nullptr)
  {
    //l.log(Logger::V_ERROR, "provided nodePtr is a null pointer");
    return E_WRNG_FUNC_PARAM;
  }

  if (coreProperties == nullptr)
  {
    //l.log(Logger::V_ERROR,
      "coreProperties xml document is not loaded in SimulinkContent");
    return E_FUNC_PARAM_NULL_PTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(coreProperties);
  if (root == NULL)
  {
    //l.log(Logger::V_ERROR,
      "failed to get root element from coreProperties XML document");
    return E_FUNC_PARAM_NULL_PTR;
  }
  nodePtr = root;
  return E_OK;
}

ReturnType SimulinkContent::getMwPropertiesNodePtr(xmlNodePtr& nodePtr) const
{
  if (mwcoreProperties == nullptr)
  {
    //l.log(Logger::V_ERROR,
      "mwcoreProperties xml document is not loaded in SimulinkContent");
    return E_FUNC_PARAM_NULL_PTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(mwcoreProperties);
  if (root == NULL)
  {
    //l.log(Logger::V_ERROR,
      "failed to get root element from mwcoreProperties xml "
      "document");
    return E_FUNC_PARAM_NULL_PTR;
  }
  nodePtr = root;
  return E_OK;
}

ReturnType SimulinkContent::getConfigSetInfoNodePtr(xmlNodePtr& nodePtr) const
{
  if (configSetInfo == nullptr)
  {
    //l.log(Logger::V_ERROR,
      "configSetInfo xml document is not loaded in SimulinkContent");
    return E_FUNC_PARAM_NULL_PTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSetInfo);
  if (root == NULL)
  {
    //l.log(Logger::V_ERROR,
      "failed to get root element from configSetInfo xml document");
    return E_FUNC_PARAM_NULL_PTR;
  }
  nodePtr = root;
  return E_OK;
}

ReturnType SimulinkContent::getConfigSetNodePtr(
  IdType& idx, xmlNodePtr& nodePtr) const
{
  if (idx > configSets.size())
  {
    return E_EOF;
  }
  if (configSets[idx] == nullptr)
  {
    //l.log(Logger::V_ERROR, "configSet at index %d is a null pointer", idx);
    return E_FUNC_PARAM_NULL_PTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(configSets[idx]);
  if (root == NULL)
  {
    //l.log(Logger::V_ERROR,
      "failed to get root element from configSet xml document at "
      "index %d",
      idx);
    return E_FUNC_PARAM_NULL_PTR;
  }
  nodePtr = root;
  return E_OK;
}

ReturnType SimulinkContent::getModelDictionaryPtr(xmlNodePtr& nodePtr) const
{
  if (modelDictionary == nullptr)
  {
    //l.log(Logger::V_ERROR,
      "modelDictionary XML document is not loaded in "
      "SimulinkContent");
    return E_FUNC_PARAM_NULL_PTR;
  }
  xmlNodePtr root = xmlDocGetRootElement(modelDictionary);
  if (root == NULL)
  {
    //l.log(Logger::V_ERROR,
      "failed to get root element from modelDictionary xml document");
    return E_FUNC_PARAM_NULL_PTR;
  }
  nodePtr = root;
  return E_OK;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
