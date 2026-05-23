#include "SimulinkArray.h"
#include "Logger.h"
#include <algorithm>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArray::SimulinkArray()
  : logger(Logger::GetInstance())
{
}

SimulinkArray::SimulinkArray(
  std::string type, std::string name, std::string dimension)
  : type(type)
  , name(name)
  , dimension(dimension)
  , logger(Logger::GetInstance())
{
}

SimulinkArray::SimulinkArray(const SimulinkArray& other)
  : logger(Logger::GetInstance())
{

  this->id = other.id;
  this->name = other.name;
  this->dimension = other.dimension;
  this->parameters = other.parameters;
  this->objects = other.objects;
  this->subArrays = other.subArrays;
  this->type = other.type;
}

SimulinkElementType SimulinkArray::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Array);
}

std::string SimulinkArray::ToString() const
{
  std::ostringstream oss;

  oss << "SimulinkArray {\n";
  oss << "  Id: " << id << "\n";
  oss << "  Type: " << type << "\n";
  oss << "  Name: " << name << "\n";
  oss << "  Dimension: " << dimension << "\n";

  oss << "  Object Ids:\n";
  for (const auto& id : objects)
  {
    oss << "    - " << id << "\n";
  }

  oss << "  SubArrays:\n";
  for (const auto& subArray : subArrays)
  {
    if (subArray)
    {
      oss << "    - " << subArray->ToString() << "\n";
    }
  }

  oss << "  Parameters:\n";
  for (const auto& param : parameters)
  {
    if (param)
    {
      oss << "    - " << param->ToString() << "\n";
    }
  }

  oss << "}";

  return oss.str();
}

ReturnType SimulinkArray::AddElement(
  std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    // l.log(
    // Logger::V_WARNING, "SimulinkArray::Cannot add a null Simulink element.");
    return E_PARAMETER_NULL_PTR;
  }

  if (element->GetElementType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> subArrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(element);

    for (const auto& arraysPtr : subArrays)
    {
      if (subArrayPtr->getName() == arraysPtr->getName())
      {
        // l.log(Logger::V_WARNING,
        //  "SimulinkArray::subArray already exsists in the Base "
        //  "array");
      }
    }
    subArrays.push_back(subArrayPtr);
  }
  else if (element->GetElementType().isA(SimulinkElementType::Object))
  {

    for (const auto& objId : objects)
    {
      if (element->GetElementId() == objId)
      {
        // l.log(Logger::V_WARNING,
        //  "SimulinkArray::subObject already exsists in the base "
        //  "array");
        return E_OK;
      }
    }

    objects.push_back(element->GetElementId());
  }
  else if (element->GetElementType().isA(SimulinkElementType::Parameter))
  {

    std::shared_ptr<SimulinkParameter> param =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    parameters.push_back(param);
    return E_OK;
  }
  else
  {
    // l.log(Logger::V_ERROR,
    //"Cannot add a Simulink element of a different type "
    // "than Array or Object to a SimulinkObject");
    return E_OK;
  }

  return E_OK;
}

ReturnType SimulinkArray::RemoveElement(
  std::shared_ptr<SimulinkElementBase> elment)
{
  if (elment == nullptr)
  {
    // l.log(Logger::V_WARNING,
    //  "SimulinkArray::Cannot remove a null Simulink element.");
    return E_PARAMETER_NULL_PTR;
  }

  if (elment->GetElementType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> arrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(elment);

    for (const auto& arr : subArrays)
    {

      if (arr->getName() == arrayPtr->getName())
      {
        subArrays.erase(
          remove(subArrays.begin(), subArrays.end(), arr), subArrays.end());
      }
      arr->RemoveElement(elment);
    }
  }
  else if (elment->GetElementType().isA(SimulinkElementType::Object))
  {

    for (const auto& objId : objects)
    {
      if (elment->GetElementId() == objId)
      {
        objects.erase(
          remove(objects.begin(), objects.end(), objId), objects.end());
      }
    }
  }
  else
  {
    // l.log(Logger::V_WARNING,
    //  "SimulinkArray::Cannot remove a Simulink element of a "
    //  "different type "
    //"than Array or Object to a SimulinkObject");
    return E_OK;
  }

  return E_OK;
}

IdType SimulinkArray::GetElementId() const
{
  // l.log(Logger::V_INFO,
  //  "SimulinkArray do not have an ID by default use Contains(uint32 "
  //  "id) to "
  //  "check for sub objects by their Id");
  return id;
}

bool SimulinkArray::Contains(const IdType& id) const
{
  for (IdType objID : objects)
  {
    if (objID == id)
    {
      return true;
    }
  }

  for (const auto& arr : subArrays)
  {
    if (arr)
    {
      if (arr->Contains(id))
      {
        return true;
      }
    }
  }

  return false;
}

Logger& SimulinkArray::GetLogger()
{
  return logger;
}

std::shared_ptr<SimulinkParameter> SimulinkArray::getParameter(std::string name)
{

  for (const auto& param : parameters)
  {
    if (param && param->getName() == name)
    {
      return param;
    }
  }

  for (const auto& subArray : subArrays)
  {
    if (subArray)
    {
      auto result = subArray->getParameter(name);
      if (result)
      {
        return result;
      }
    }
  }

  // l.log(Logger::V_WARNING, "SimulinkArray:: Parameter", name.c_str(),
  //" not found.");
  return nullptr;
}

std::string SimulinkArray::getName()
{
  return name;
}

std::string SimulinkArray::getDimension()
{
  return dimension;
}

std::string SimulinkArray::getArrayType()
{
  return type;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
