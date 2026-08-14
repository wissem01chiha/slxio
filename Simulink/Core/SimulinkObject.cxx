#include "SimulinkObject.h"
#include "Logger.h"
#include "SimulinkArray.h"
#include "SimulinkBlock.h"
#include "SimulinkParameter.h"

namespace slxio
{
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::SimulinkObject()
    : logger(Logger::GetInstance()), PropName(""), ClassName(""),
      ObjectVersion(""), ObjectId(0)
{
}

SimulinkObject* SimulinkObject::New() const { return new SimulinkObject(); }

SimulinkObject::SimulinkObject(SId ObjectId, std::string name,
                               std::string ClassName)
    : ObjectId(ObjectId), PropName(name), ClassName(ClassName),
      logger(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(SId ObjectId, std::string ObjectVersion,
                               std::string name, std::string ClassName)
    : ObjectId(ObjectId), ObjectVersion(ObjectVersion), PropName(name),
      ClassName(ClassName), logger(Logger::GetInstance())
{
}

SimulinkObject::SimulinkObject(std::string ObjectVersion, std::string ClassName)
    : ObjectVersion(ObjectVersion), ClassName(ClassName),
      logger(Logger::GetInstance())
{
}

std::shared_ptr<SimulinkElementBase> SimulinkObject::at(SId index)
{
    return std::shared_ptr<SimulinkElementBase>();
}

SimulinkElementType SimulinkObject::GetType() const
{
    return SimulinkElementType(SimulinkElementType::Type::Object);
}

SId SimulinkObject::GetId() const { return ObjectId; }

std::string SimulinkObject::ToString() const
{

    std::ostringstream oss;

    oss << "SimulinkObject {\n";
    oss << "  ID: " << ObjectId << "\n";
    oss << "  Version: " << ObjectVersion << "\n";
    oss << "  Name: " << PropName << "\n";
    oss << "  Class: " << ClassName << "\n";

    oss << "  Objects:\n";
    for (const auto& obj : SubObjects)
    {
        if (obj)
        {
            oss << "    - " << obj->ToString() << "\n";
        }
    }

    oss << "  Arrays:\n";
    for (const auto& arr : SubArrays)
    {
        if (arr)
        {
            oss << "    - " << arr->ToString() << "\n";
        }
    }

    oss << "  Parameters:\n";
    for (const auto& param : ObjectParameters)
    {
        if (param)
        {
            oss << "    - " << param->ToString() << "\n";
        }
    }

    oss << "}";

    return oss.str();
}

SimulinkBlockType SimulinkObject::GetBlockType() { return SimulinkBlockType(); }

// HError SimulinkObject::RemoveElement(std::shared_ptr<SimulinkElementBase>
// element)
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

//     for (const auto& param : ObjectParameters)
//     {

//       if (strcmp(param->getName(), paramPtr->getName()) == 0)
//       {
//         ObjectParameters.erase(
//           std::remove(ObjectParameters.begin(), ObjectParameters.end(),
//           param), ObjectParameters.end());
//       }
//     }
//   }

//   if (element->GetType().isA(SimulinkElementType::Object))
//   {

//     std::shared_ptr<SimulinkObject> objPtr =
//     std::dynamic_pointer_cast<SimulinkObject>(element);

//     for (const auto& obj : SubObjects)
//     {
//       if (element->GetId() == obj->GetId())
//       {
//         SubObjects.erase(std::remove(SubObjects.begin(), SubObjects.end(),
//         obj), SubObjects.end());
//       }
//     }
//   }

//   if (element->GetType().isA(SimulinkElementType::Array))
//   {

//     std::shared_ptr<SimulinkArray> arrayPtr =
//     std::dynamic_pointer_cast<SimulinkArray>(element);

//     for (const auto& arr : SubArrays)
//     {

//       if (arr->getName() == arrayPtr->getName())
//       {
//         SubArrays.erase(std::remove(SubArrays.begin(), SubArrays.end(), arr),
//         SubArrays.end());
//       }
//     }
//   }

//   return E_OK;
// }

// HError SimulinkObject::AddElement(std::shared_ptr<SimulinkElementBase>
// element)
// {

//   if (element == nullptr)
//   {
//     // l.log(
//     // Logger::V_ERROR, "SimulinkObject:: Cannot add a null Simulink
//     element."); return E_PARAMETER_NULL_PTR;
//   }

//   if (!(element->GetType().isA(SimulinkElementType::Array) ||
//         element->GetType().isA(SimulinkElementType::Object) ||
//         element->GetType().isA(SimulinkElementType::Parameter)))
//   {
//     // l.log(Logger::V_ERROR,
//     //  "SimulinkObject: cannot add a Simulink element of a different type
//     than
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
//     ObjectParameters.push_back(paramPtr);
//   }

//   if (element->GetType().isA(SimulinkElementType::Object))
//   {

//     std::shared_ptr<SimulinkObject> objPtr =
//     std::dynamic_pointer_cast<SimulinkObject>(element);

//     SubObjects.push_back(objPtr);
//   }

//   if (element->GetType().isA(SimulinkElementType::Array))
//   {

//     std::shared_ptr<SimulinkArray> arrayPtr =
//     std::dynamic_pointer_cast<SimulinkArray>(element);
//     SubArrays.push_back(arrayPtr);
//   }
//   return E_OK;
// }

std::shared_ptr<SimulinkElementBase> SimulinkObject::operator[](SId index)
{
    return std::shared_ptr<SimulinkElementBase>();
}

UInt32 SimulinkObject::Size() const { return UInt32(); }

bool SimulinkObject::Empty() const { return false; }

void SimulinkObject::Clear() {}

HError
SimulinkObject::Insert(const std::shared_ptr<SimulinkElementBase>& element)
{
    return HError();
}

HError SimulinkObject::Erase(const SId& id) { return HError(); }

HError
SimulinkObject::Erase(const std::shared_ptr<SimulinkElementBase>& element)
{
    return HError();
}

std::shared_ptr<SimulinkElementBase> SimulinkObject::Find(const SId& id)
{
    return std::shared_ptr<SimulinkElementBase>();
}

bool SimulinkObject::Contains(const SId& ObjectId_) const
{

    if (ObjectId == ObjectId_)
    {
        return 1;
    }

    if (!SubObjects.empty())
    {
        for (const auto& obj : SubObjects)
        {
            if (obj)
            {
                if (obj->Contains(ObjectId_))
                {
                    return 1;
                }
            }
        }
    }

    if (!SubArrays.empty())
    {
        for (const auto& arr : SubArrays)
        {
            if (arr)
            {
                if (arr->Contains(ObjectId_))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

std::shared_ptr<SimulinkParameterBase>
SimulinkObject::GetParameter(std::string name)
{

    for (const auto& param : ObjectParameters)
    {
        if (param && param->GetName() == name)
        {
            return param;
        }
    }

    for (const auto& subElement : SubObjects)
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

    for (const auto& array : SubArrays)
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

HError
SimulinkObject::SetParameter(std::string name,
                             std::shared_ptr<SimulinkParameterBase> parameter)
{
    return HError();
}

HError
SimulinkObject::AddParameter(std::shared_ptr<SimulinkParameterBase> parameter)
{
    return HError();
}

std::string SimulinkObject::GetName() { return PropName; }

std::string SimulinkObject::GetDimension() { return std::string(); }

std::shared_ptr<SimulinkBlock> SimulinkObject::GetBlockParent()
{
    return std::shared_ptr<SimulinkBlock>();
}

SLXIO_ABI_NAMESPACE_END
}; // namespace slxio
