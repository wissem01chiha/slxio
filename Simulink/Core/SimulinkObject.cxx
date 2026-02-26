#include "SimulinkObject.h"
#include <algorithm>
#include <cstring>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::SimulinkObject()
  : l(Logger::getInstance())
{
  propName = std::string("");
  className = std::string("");
  version = std::string("");
  id = 0;
}

SimulinkObject::SimulinkObject(
  Index id, std::string name, std::string className)
  : id(id)
  , propName(name)
  , className(className)
  , l(Logger::getInstance())
{
}

SimulinkObject::SimulinkObject(
  Index id, std::string version, std::string name, std::string className)
  : id(id)
  , version(version)
  , propName(name)
  , className(className)
  , l(Logger::getInstance())
{
}

SimulinkObject::SimulinkObject(std::string version, std::string className)
  : version(version)
  , className(className)
  , l(Logger::getInstance())
{
}

SimulinkObject::SimulinkObject(const SimulinkObject& other)
  : l(Logger::getInstance())
{
  this->className = other.className;
  this->id = other.id;
  this->propName = other.propName;
  this->version = other.version;
  this->objects = other.objects;
  this->arrays = other.arrays;
  this->parameters = other.parameters;
}

SimulinkElementType SimulinkObject::getType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Object);
}

Index SimulinkObject::getID() const
{
  return id;
}

std::string SimulinkObject::toString() const
{

  std::ostringstream oss;

  oss << "SimulinkObject {\n";
  oss << "  ID: " << id << "\n";
  oss << "  Version: " << version << "\n";
  oss << "  Name: " << propName << "\n";
  oss << "  Class: " << className << "\n";

  oss << "  Objects:\n";
  for (const auto& obj : objects)
  {
    if (obj)
    {
      oss << "    - " << obj->toString() << "\n";
    }
  }

  oss << "  Arrays:\n";
  for (const auto& arr : arrays)
  {
    if (arr)
    {
      oss << "    - " << arr->toString() << "\n";
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

ErrorCode SimulinkObject::remove(std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    l.log(Logger::V_WARNING, "Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (element->getType().isA(SimulinkElementType::Array) ||
    element->getType().isA(SimulinkElementType::Object))
  {
    l.log(Logger::V_ERROR,
      "Cannot remove a Simulink element of a different "
      "type than Array or Object from a SimulinkObject");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  if (element->getType().isA(SimulinkElementType::Parameter))
  {

    std::shared_ptr<SimulinkParameter> paramPtr =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (!paramPtr)
    {
      l.log(Logger::V_ERROR,
        "SimulinkObject: Failed to cast SimulinkElementBase to "
        "SimulinkParameter");
      return ErrorCode::SLX_ETYPEMISMATCH;
    }

    for (const auto& param : parameters)
    {

      if (strcmp(param->getName(), paramPtr->getName()) == 0)
      {
        parameters.erase(
          std::remove(parameters.begin(), parameters.end(), param),
          parameters.end());
      }
    }
  }

  if (element->getType().isA(SimulinkElementType::Object))
  {

    std::shared_ptr<SimulinkObject> objPtr =
      std::dynamic_pointer_cast<SimulinkObject>(element);

    for (const auto& obj : objects)
    {
      if (element->getID() == obj->getID())
      {
        objects.erase(
          std::remove(objects.begin(), objects.end(), obj), objects.end());
      }
    }
  }

  if (element->getType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> arrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(element);

    for (const auto& arr : arrays)
    {

      if (arr->getName() == arrayPtr->getName())
      {
        arrays.erase(
          std::remove(arrays.begin(), arrays.end(), arr), arrays.end());
      }
    }
  }

  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkObject::add(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    l.log(
      Logger::V_ERROR, "SimulinkObject:: Cannot add a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
  }

  if (!(element->getType().isA(SimulinkElementType::Array) ||
        element->getType().isA(SimulinkElementType::Object) ||
        element->getType().isA(SimulinkElementType::Parameter)))
  {
    l.log(Logger::V_ERROR,
      "SimulinkObject: cannot add a Simulink element of a different type than "
      "Array "
      "or "
      "Object or a Parameter to a SimulinkObject");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  if (element->getType().isA(SimulinkElementType::Parameter))
  {
    std::shared_ptr<SimulinkParameter> paramPtr =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (!paramPtr)
    {
      l.log(Logger::V_ERROR,
        "SimulinkObject: failed to cast SimulinkElementBase to "
        "SimulinkParameter");
      return ErrorCode::SLX_ECASTFAIL;
    }
    parameters.push_back(paramPtr);
  }

  if (element->getType().isA(SimulinkElementType::Object))
  {

    std::shared_ptr<SimulinkObject> objPtr =
      std::dynamic_pointer_cast<SimulinkObject>(element);

    objects.push_back(objPtr);
  }

  if (element->getType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> arrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(element);
    arrays.push_back(arrayPtr);
  }
  return ErrorCode::SLX_OK;
}

bool SimulinkObject::contains(const Index& id) const
{

  if (id == id)
  {
    return 1;
  }

  if (!objects.empty())
  {
    for (const auto& obj : objects)
    {
      if (obj)
      {
        if (obj->contains(id))
        {
          return 1;
        }
      }
    }
  }

  if (!arrays.empty())
  {
    for (const auto& arr : arrays)
    {
      if (arr)
      {
        if (arr->contains(id))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}

std::shared_ptr<SimulinkParameter> SimulinkObject::getParameter(
  const std::string& name)
{

  for (const auto& param : parameters)
  {
    if (param && param->getName() == name)
    {
      return param;
    }
  }

  for (const auto& subElement : objects)
  {
    if (subElement)
    {

      auto result = subElement->getParameter(name);
      if (result)
      {
        return result;
      }
    }
  }

  for (const auto& array : arrays)
  {
    if (array)
    {
      auto arrayParam = array->getParameter(name);
      if (arrayParam)
      {
        return arrayParam;
      }
    }
  }
  l.log(Logger::V_WARNING, "SimulinkObject:: Parameter ", name, " not found.");
  return std::make_shared<SimulinkParameter>();
}

std::string SimulinkObject::getName()
{
  return propName;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END