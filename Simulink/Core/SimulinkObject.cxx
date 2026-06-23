#include "SimulinkObject.h"
#include "ErrorCode.h"
#include "Logger.h"
#include "SimulinkArray.h"
#include "SimulinkBlock.h"
#include "SimulinkParameter.h"
#include <algorithm>
#include <cstring>
#include <sstream>

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::SimulinkObject()
  : logger(Logger::GetInstance())
{
  propName = std::string("");
  className = std::string("");
  ObjectVersion = std::string("");
  ObjectId = 0;
}

SimulinkObject::SimulinkObject(IdType ObjectId, std::string name, std::string className)
  : ObjectId(ObjectId)
  , propName(name)
  , className(className)
  , logger(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(
  IdType ObjectId, std::string ObjectVersion, std::string name, std::string className)
  : ObjectId(ObjectId)
  , ObjectVersion(ObjectVersion)
  , propName(name)
  , className(className)
  , logger(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(std::string ObjectVersion, std::string className)
  : ObjectVersion(ObjectVersion)
  , className(className)
  , logger(Logger::GetInstance())
{
}

SimulinkElementType SimulinkObject::GetType() const
{
  return SimulinkElementType(SimulinkElementType::Type::Object);
}

IdType SimulinkObject::GetId() const
{
  return ObjectId;
}

std::string SimulinkObject::ToString() const
{

  std::ostringstream oss;

  oss << "SimulinkObject {\n";
  oss << "  ID: " << ObjectId << "\n";
  oss << "  Version: " << ObjectVersion << "\n";
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

SimulinkBlockType SimulinkObject::GetBlockType()
{
  return SimulinkBlockType();
}

// ReturnType SimulinkObject::RemoveElement(std::shared_ptr<SimulinkElementBase> element)
// {
//   if (element == nullptr)
//   {
//     // l.log(Logger::V_WARNING, "Cannot remove a null Simulink element.");
//     return E_PARAMETER_NULL_PTR;
//   }

//   if (element->GetType().isA(SimulinkElementType::Array) ||
//     element->GetType().isA(SimulinkElementType::Object))
//   {
//     // l.log(Logger::V_ERROR,
//     //   "Cannot remove a Simulink element of a different "
//     //  "type than Array or Object from a SimulinkObject");
//     return E_OK;
//   }

//   if (element->GetType().isA(SimulinkElementType::Parameter))
//   {

//     std::shared_ptr<SimulinkParameter> paramPtr =
//       std::dynamic_pointer_cast<SimulinkParameter>(element);
//     if (!paramPtr)
//     {
//       // l.log(Logger::V_ERROR,
//       //  "SimulinkObject: Failed to cast SimulinkElementBase to "
//       //"SimulinkParameter");
//       return E_OK;
//     }

//     for (const auto& param : parameters)
//     {

//       if (strcmp(param->getName(), paramPtr->getName()) == 0)
//       {
//         parameters.erase(
//           std::remove(parameters.begin(), parameters.end(), param), parameters.end());
//       }
//     }
//   }

//   if (element->GetType().isA(SimulinkElementType::Object))
//   {

//     std::shared_ptr<SimulinkObject> objPtr = std::dynamic_pointer_cast<SimulinkObject>(element);

//     for (const auto& obj : objects)
//     {
//       if (element->GetId() == obj->GetId())
//       {
//         objects.erase(std::remove(objects.begin(), objects.end(), obj), objects.end());
//       }
//     }
//   }

//   if (element->GetType().isA(SimulinkElementType::Array))
//   {

//     std::shared_ptr<SimulinkArray> arrayPtr = std::dynamic_pointer_cast<SimulinkArray>(element);

//     for (const auto& arr : arrays)
//     {

//       if (arr->getName() == arrayPtr->getName())
//       {
//         arrays.erase(std::remove(arrays.begin(), arrays.end(), arr), arrays.end());
//       }
//     }
//   }

//   return E_OK;
// }

// ReturnType SimulinkObject::AddElement(std::shared_ptr<SimulinkElementBase> element)
// {

//   if (element == nullptr)
//   {
//     // l.log(
//     // Logger::V_ERROR, "SimulinkObject:: Cannot add a null Simulink element.");
//     return E_PARAMETER_NULL_PTR;
//   }

//   if (!(element->GetType().isA(SimulinkElementType::Array) ||
//         element->GetType().isA(SimulinkElementType::Object) ||
//         element->GetType().isA(SimulinkElementType::Parameter)))
//   {
//     // l.log(Logger::V_ERROR,
//     //  "SimulinkObject: cannot add a Simulink element of a different type than
//     //  " "Array " "or " "Object or a Parameter to a SimulinkObject");
//     return E_OK;
//   }

//   if (element->GetType().isA(SimulinkElementType::Parameter))
//   {
//     std::shared_ptr<SimulinkParameter> paramPtr =
//       std::dynamic_pointer_cast<SimulinkParameter>(element);
//     if (!paramPtr)
//     {
//       // l.log(Logger::V_ERROR,
//       //  "SimulinkObject: failed to cast SimulinkElementBase to "
//       //  "SimulinkParameter");
//       return E_OK;
//     }
//     parameters.push_back(paramPtr);
//   }

//   if (element->GetType().isA(SimulinkElementType::Object))
//   {

//     std::shared_ptr<SimulinkObject> objPtr = std::dynamic_pointer_cast<SimulinkObject>(element);

//     objects.push_back(objPtr);
//   }

//   if (element->GetType().isA(SimulinkElementType::Array))
//   {

//     std::shared_ptr<SimulinkArray> arrayPtr = std::dynamic_pointer_cast<SimulinkArray>(element);
//     arrays.push_back(arrayPtr);
//   }
//   return E_OK;
// }

UInt32 SimulinkObject::Size() const
{
  return UInt32();
}

bool SimulinkObject::Empty() const
{
  return false;
}

void SimulinkObject::Clear() {}

ReturnType SimulinkObject::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

ReturnType SimulinkObject::Erase(const IdType& id)
{
  return ReturnType();
}

ReturnType SimulinkObject::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
  return ReturnType();
}

bool SimulinkObject::Contains(const IdType& ObjectId) const
{

  if (ObjectId == ObjectId)
  {
    return 1;
  }

  if (!objects.empty())
  {
    for (const auto& obj : objects)
    {
      if (obj)
      {
        if (obj->Contains(ObjectId))
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
        if (arr->Contains(ObjectId))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}

std::shared_ptr<SimulinkParameterBase> SimulinkObject::GetParameter(std::string name)
{

  for (const auto& param : parameters)
  {
    if (param && param->GetName() == name)
    {
      return param;
    }
  }

  for (const auto& subElement : objects)
  {
    if (subElement)
    {

      auto result = subElement->GetParameter(name);
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
      auto arrayParam = array->GetParameter(name);
      if (arrayParam)
      {
        return arrayParam;
      }
    }
  }
  // l.log(Logger::V_WARNING, "SimulinkObject:: Parameter ", name, " not
  // found.");
  return std::make_shared<SimulinkParameter>();
}

ReturnType SimulinkObject::SetParameter(
  std::string name, std::shared_ptr<SimulinkParameterBase> parameter)
{
  return ReturnType();
}

ReturnType SimulinkObject::AddParameter(std::shared_ptr<SimulinkParameterBase> parameter)
{
  return ReturnType();
}

std::string SimulinkObject::GetName()
{
  return propName;
}

std::string SimulinkObject::GetDimension()
{
  return std::string();
}

std::shared_ptr<SimulinkBlock> SimulinkObject::GetBlockParent()
{
  return std::shared_ptr<SimulinkBlock>();
}

SLXIO_ABI_NAMESPACE_END
};
