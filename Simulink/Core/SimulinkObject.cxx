#include "SimulinkObject.h"
#include <algorithm>
#include <cstring>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::SimulinkObject()
  : l(Logger::GetInstance())
{
  propName = std::string("");
  className = std::string("");
  version = std::string("");
  id = 0;
}

SimulinkObject::SimulinkObject(
  IdType id, std::string name, std::string className)
  : id(id)
  , propName(name)
  , className(className)
  , l(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(
  IdType id, std::string version, std::string name, std::string className)
  : id(id)
  , version(version)
  , propName(name)
  , className(className)
  , l(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(std::string version, std::string className)
  : version(version)
  , className(className)
  , l(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(const SimulinkObject& other)
  : l(Logger::GetInstance())
{
  this->className = other.className;
  this->id = other.id;
  this->propName = other.propName;
  this->version = other.version;
  this->objects = other.objects;
  this->arrays = other.arrays;
  this->parameters = other.parameters;
}

SimulinkElementType SimulinkObject::GetElementType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Object);
}

IdType SimulinkObject::GetElementId() const
{
  return id;
}

std::string SimulinkObject::ToString() const
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
      oss << "    - " << obj->ToString() << "\n";
    }
  }

  oss << "  Arrays:\n";
  for (const auto& arr : arrays)
  {
    if (arr)
    {
      oss << "    - " << arr->ToString() << "\n";
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

ReturnType SimulinkObject::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
{
  if (element == nullptr)
  {
    //l.log(Logger::V_WARNING, "Cannot remove a null Simulink element.");
    return E_PARAMETER_NULL_PTR;
  }

  if (element->GetElementType().isA(SimulinkElementType::Array) ||
    element->GetElementType().isA(SimulinkElementType::Object))
  {
    //l.log(Logger::V_ERROR,
    //  "Cannot remove a Simulink element of a different "
     // "type than Array or Object from a SimulinkObject");
    return E_OK;
  }

  if (element->GetElementType().isA(SimulinkElementType::Parameter))
  {

    std::shared_ptr<SimulinkParameter> paramPtr =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (!paramPtr)
    {
      //l.log(Logger::V_ERROR,
       // "SimulinkObject: Failed to cast SimulinkElementBase to "
        //"SimulinkParameter");
      return E_OK;
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

  if (element->GetElementType().isA(SimulinkElementType::Object))
  {

    std::shared_ptr<SimulinkObject> objPtr =
      std::dynamic_pointer_cast<SimulinkObject>(element);

    for (const auto& obj : objects)
    {
      if (element->GetElementId() == obj->GetElementId())
      {
        objects.erase(
          std::remove(objects.begin(), objects.end(), obj), objects.end());
      }
    }
  }

  if (element->GetElementType().isA(SimulinkElementType::Array))
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

  return E_OK;
}

ReturnType SimulinkObject::AddElement(std::shared_ptr<SimulinkElementBase> element)
{

  if (element == nullptr)
  {
    //l.log(
      //Logger::V_ERROR, "SimulinkObject:: Cannot add a null Simulink element.");
    return E_PARAMETER_NULL_PTR;
  }

  if (!(element->GetElementType().isA(SimulinkElementType::Array) ||
        element->GetElementType().isA(SimulinkElementType::Object) ||
        element->GetElementType().isA(SimulinkElementType::Parameter)))
  {
    //l.log(Logger::V_ERROR,
     // "SimulinkObject: cannot add a Simulink element of a different type than "
     // "Array "
     // "or "
     // "Object or a Parameter to a SimulinkObject");
    return E_OK;
  }

  if (element->GetElementType().isA(SimulinkElementType::Parameter))
  {
    std::shared_ptr<SimulinkParameter> paramPtr =
      std::dynamic_pointer_cast<SimulinkParameter>(element);
    if (!paramPtr)
    {
      //l.log(Logger::V_ERROR,
       // "SimulinkObject: failed to cast SimulinkElementBase to "
       // "SimulinkParameter");
      return E_OK;
    }
    parameters.push_back(paramPtr);
  }

  if (element->GetElementType().isA(SimulinkElementType::Object))
  {

    std::shared_ptr<SimulinkObject> objPtr =
      std::dynamic_pointer_cast<SimulinkObject>(element);

    objects.push_back(objPtr);
  }

  if (element->GetElementType().isA(SimulinkElementType::Array))
  {

    std::shared_ptr<SimulinkArray> arrayPtr =
      std::dynamic_pointer_cast<SimulinkArray>(element);
    arrays.push_back(arrayPtr);
  }
  return E_OK;
}

bool SimulinkObject::Contains(const IdType& id) const
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
        if (obj->Contains(id))
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
        if (arr->Contains(id))
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
  //l.log(Logger::V_WARNING, "SimulinkObject:: Parameter ", name, " not found.");
  return std::make_shared<SimulinkParameter>();
}

std::string SimulinkObject::getName()
{
  return propName;
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
