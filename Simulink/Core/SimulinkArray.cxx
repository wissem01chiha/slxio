#include "SimulinkArray.h"
#include "ErrorCode.h"
#include "Logger.h"
#include "SimulinkParameter.h"
#include <algorithm>
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

static const Logger::ApplicationInfoType SimulinkArrayLogApp = { 100,
  "SimulinkArray" };

SimulinkArray::SimulinkArray()
  : logger(Logger::GetInstance())
{
}

SimulinkArray* SimulinkArray::New() const
{
  return new SimulinkArray();
}

SimulinkArray::SimulinkArray(
  std::string type, std::string name, std::string dimension)
  : ArrayType(type)
  , ArrayName(name)
  , ArrayDimension(dimension)
  , logger(Logger::GetInstance())
{
}

SimulinkElementType SimulinkArray::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Array);
}

std::string SimulinkArray::ToString() const
{
  std::ostringstream oss;

  oss << "SimulinkArray {\n";
  oss << "  Id: " << ArrayId << "\n";
  oss << "  Type: " << ArrayType << "\n";
  oss << "  Name: " << ArrayName << "\n";
  oss << "  Dimension: " << ArrayDimension << "\n";

  oss << "  Object Ids:\n";
  for (const auto& ArrayId : ArrayObjectIds)
  {
    oss << "    - " << ArrayId << "\n";
  }

  oss << "  SubArrays:\n";
  for (const auto& subArray : SubArrays)
  {
    if (subArray)
    {
      oss << "    - " << subArray->ToString() << "\n";
    }
  }

  oss << "  Parameters:\n";
  for (const auto& param : ArrayParameters)
  {
    if (param)
    {
      oss << "    - " << param->ToString() << "\n";
    }
  }

  oss << "}";

  return oss.str();
}

HError SimulinkArray::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
  if (element == nullptr)
  {
    logger.SendLogMessage({ Logger::LOG, Logger::LOG_WARN, SimulinkArrayLogApp, 3 },
      { "Cannot add a null Simulink element." });
    return E_PARAMETER_NULL_PTR;
  }
  if (element->GetType().isA(SimulinkElementType::Array))
  {
    std::shared_ptr<SimulinkArray> subArrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(element);

    for (const auto& arraysPtr : SubArrays)
    {
      if (subArrayPtr->GetName() == arraysPtr->GetName())
      {
        logger.SendLogMessage(
          { Logger::LOG, Logger::LOG_WARN, SimulinkArrayLogApp, 3 },
          { "SubArray already exists in the base array" });
        return E_OK;
      }
    }
    SubArrays.push_back(subArrayPtr);
    return E_OK;
  }
  else if (element->GetType().isA(SimulinkElementType::Object))
  {

    for (const auto& objId : ArrayObjectIds)
    {
      if (element->GetId() == objId)
      {
        logger.SendLogMessage(
          { Logger::LOG, Logger::LOG_WARN, SimulinkArrayLogApp, 3 },
          { "Object already exists in the base array" });
        return E_OK;
      }
    }

    ArrayObjectIds.push_back(element->GetId());
    return E_OK;
  }
  else if (element->GetType().isA(SimulinkElementType::Parameter))
  {

    std::shared_ptr<SimulinkParameter> param =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    ArrayParameters.push_back(param);
    return E_OK;
  }
  else
  {
    logger.SendLogMessage({ Logger::LOG, Logger::LOG_ERROR, SimulinkArrayLogApp, 3 },
      { "Cannot add a Simulink element of a different type than Array or "
        "Object to a SimulinkArray" });
  }

  return E_OK;
}

HError SimulinkArray::Erase(const IdType& ArrayId)
{
  for (const auto& objId : ArrayObjectIds)
  {
    if (objId == ArrayId)
    {
      ArrayObjectIds.erase(
        remove(ArrayObjectIds.begin(), ArrayObjectIds.end(), objId),
        ArrayObjectIds.end());
      return E_OK;
    }
  }
  return E_OK;
}

HError SimulinkArray::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
  if (element == nullptr)
  {
    logger.SendLogMessage({ Logger::LOG, Logger::LOG_WARN, SimulinkArrayLogApp, 3 },
      { "Cannot remove a null Simulink element." });
    return E_PARAMETER_NULL_PTR;
  }
  if (element->GetType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> arrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(element);

    for (const auto& arr : SubArrays)
    {

      if (arr->GetName() == arrayPtr->GetName())
      {
        SubArrays.erase(
          remove(SubArrays.begin(), SubArrays.end(), arr), SubArrays.end());
        return E_OK;
      }
      arr->Erase(element);
    }
  }
  else if (element->GetType().isA(SimulinkElementType::Object))
  {

    for (const auto& objId : ArrayObjectIds)
    {
      if (element->GetId() == objId)
      {
        ArrayObjectIds.erase(
          remove(ArrayObjectIds.begin(), ArrayObjectIds.end(), objId),
          ArrayObjectIds.end());
        return E_OK;
      }
    }
  }
  else
  {
    logger.SendLogMessage({ Logger::LOG, Logger::LOG_WARN, SimulinkArrayLogApp, 3 },
      { "Cannot remove a Simulink element of a different type "
        "than Array or Object from a SimulinkArray" });
    return E_OK;
  }
  return E_OK;
}

IdType SimulinkArray::GetId() const
{
  logger.SendLogMessage({ Logger::LOG, Logger::LOG_INFO, SimulinkArrayLogApp, 3 },
    { "SimulinkArray do not have an Id by default use Contains(IdType id) to "
      "check for sub objects or sub arrays by their Id" });
  return ArrayId;
}

bool SimulinkArray::Contains(const IdType& ArrayId) const
{
  for (IdType objID : ArrayObjectIds)
  {
    if (objID == ArrayId)
    {
      return true;
    }
  }

  for (const auto& arr : SubArrays)
  {
    if (arr)
    {
      if (arr->Contains(ArrayId))
      {
        return true;
      }
    }
  }

  return false;
}

UInt32 SimulinkArray::Size() const
{
  return ArrayObjectIds.size() + SubArrays.size() + ArrayParameters.size();
}

bool SimulinkArray::Empty() const
{
  return ArrayObjectIds.empty() && SubArrays.empty() && ArrayParameters.empty();
}

void SimulinkArray::Clear()
{
  ArrayObjectIds.clear();
  SubArrays.clear();
  ArrayParameters.clear();
}

std::shared_ptr<SimulinkElementBase> SimulinkArray::Find(const IdType& id)
{
  return std::shared_ptr<SimulinkElementBase>();
}

std::shared_ptr<SimulinkElementBase> SimulinkArray::at(IdType index)
{
  return SubArrays.at(index);
}

std::shared_ptr<SimulinkElementBase> SimulinkArray::operator[](IdType index)
{
  return std::shared_ptr<SimulinkElementBase>();
}

Logger& SimulinkArray::GetLogger()
{
  return logger;
}

std::shared_ptr<SimulinkParameterBase> SimulinkArray::GetParameter(std::string name)
{

  for (const auto& param : ArrayParameters)
  {
    if (param && param->GetName() == name)
    {
      return param;
    }
  }

  for (const auto& SubArray : SubArrays)
  {
    if (SubArray)
    {
      auto result = SubArray->GetParameter(name);
      if (result)
      {
        return result;
      }
    }
  }
  logger.SendLogMessage({ Logger::LOG, Logger::LOG_WARN, SimulinkArrayLogApp, 3 },
    { "Parameter ", ArrayName, " not found." });
  return nullptr;
}

HError SimulinkArray::SetParameter(
  std::string name, std::shared_ptr<SimulinkParameterBase> parameter)
{
  return E_OK;
}

HError SimulinkArray::AddParameter(std::shared_ptr<SimulinkParameterBase> parameter)
{
  return E_OK;
}

std::string SimulinkArray::GetName()
{
  return ArrayName;
}

std::string SimulinkArray::GetDimension()
{
  return ArrayDimension;
}

std::string SimulinkArray::GetArrayType()
{
  return ArrayType;
}

SLXIO_ABI_NAMESPACE_END
};
