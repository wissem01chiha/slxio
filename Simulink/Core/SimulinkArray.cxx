#include "SimulinkArray.h"
#include <algorithm>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArray::SimulinkArray()
  : l(Logger::getInstance())
{
}

SimulinkArray::SimulinkArray(
  std::string type, std::string name, std::string dimension)
  : type(type)
  , name(name)
  , dimension(dimension)
  , l(Logger::getInstance())
{
}

SimulinkArray::SimulinkArray(const SimulinkArray& other)
  : l(Logger::getInstance())
{

  this->id = other.id;
  this->name = other.name;
  this->dimension = other.dimension;
  this->parameters = other.parameters;
  this->objects = other.objects;
  this->subArrays = other.subArrays;
  this->type = other.type;
}

SimulinkElementType SimulinkArray::getType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Array);
}

std::string SimulinkArray::toString() const
{
  std::ostringstream oss;

  oss << "SimulinkArray {\n";
  oss << "  ID: " << id << "\n";
  oss << "  Type: " << type << "\n";
  oss << "  Name: " << name << "\n";
  oss << "  Dimension: " << dimension << "\n";

  oss << "  Object IDs:\n";
  for (const auto& id : objects)
  {
    oss << "    - " << id << "\n";
  }

  oss << "  SubArrays:\n";
  for (const auto& subArray : subArrays)
  {
    if (subArray)
    {
      oss << "    - " << subArray->toString() << "\n";
    }
  }

  oss << "  Parameters:\n";
  for (const auto& param : parameters)
  {
    if (param)
    {
      oss << "    - " << param->toString() << "\n";
    }
  }

  oss << "}";

  return oss.str();
}

ErrorCode SimulinkArray::add(std::shared_ptr<SimulinkElementBase> elment)
{
  if (elment == nullptr)
  {
    l.log(
      Logger::V_WARNING, "SimulinkArray::Cannot add a null Simulink element.");
    return ErrorCode::SLX_ENOENT;
  }

  if (elment->getType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> subArrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(elment);

    for (const auto& arraysPtr : subArrays)
    {
      if (subArrayPtr->getName() == arraysPtr->getName())
      {
        l.log(Logger::V_WARNING,
          "SimulinkArray::subArray already exsists in the Base "
          "array");
      }
    }
    subArrays.push_back(subArrayPtr);
  }
  else if (elment->getType().isA(SimulinkElementType::Object))
  {

    for (const auto& objId : objects)
    {
      if (elment->getID() == objId)
      {
        l.log(Logger::V_WARNING,
          "SimulinkArray::subObject already exsists in the base "
          "array");
        return ErrorCode::E_OK;
      }
    }

    objects.push_back(elment->getID());
  }
  else if (elment->getType().isA(SimulinkElementType::Parameter))
  {

    std::shared_ptr<SimulinkParameter> param =
      std::dynamic_pointer_cast<SimulinkParameter>(elment);
    parameters.push_back(param);
    return ErrorCode::E_OK;
  }
  else
  {
    l.log(Logger::V_ERROR,
      "Cannot add a Simulink element of a different type "
      "than Array or Object to a SimulinkObject");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  return ErrorCode::E_OK;
}

ErrorCode SimulinkArray::remove(std::shared_ptr<SimulinkElementBase> elment)
{
  if (elment == nullptr)
  {
    l.log(Logger::V_WARNING,
      "SimulinkArray::Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (elment->getType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> arrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(elment);

    for (const auto& arr : subArrays)
    {

      if (arr->getName() == arrayPtr->getName())
      {
        subArrays.erase(std::remove(subArrays.begin(), subArrays.end(), arr),
          subArrays.end());
      }
      arr->remove(elment);
    }
  }
  else if (elment->getType().isA(SimulinkElementType::Object))
  {

    for (const auto& objId : objects)
    {
      if (elment->getID() == objId)
      {
        objects.erase(
          std::remove(objects.begin(), objects.end(), objId), objects.end());
      }
    }
  }
  else
  {
    l.log(Logger::V_WARNING,
      "SimulinkArray::Cannot remove a Simulink element of a "
      "different type "
      "than Array or Object to a SimulinkObject");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  return ErrorCode::E_OK;
}

Index SimulinkArray::getID() const
{
  l.log(Logger::V_INFO,
    "SimulinkArray do not have an ID by default use contains(uint32 "
    "id) to "
    "check for sub objects by their Id");
  return id;
}

bool SimulinkArray::contains(const Index& id) const
{
  for (Index objID : objects)
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
      if (arr->contains(id))
      {
        return true;
      }
    }
  }

  return false;
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

  l.log(Logger::V_WARNING, "SimulinkArray:: Parameter", name.c_str(),
    " not found.");
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
