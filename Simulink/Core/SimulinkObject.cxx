#include "SimulinkObject.h"
#include "Logger.h"
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkObject::SimulinkObject() {}

SimulinkObject::SimulinkObject(Index id, std::string name,
                               std::string className)
    : objectId(id), propName(name), className(className) {}

SimulinkObject::SimulinkObject(Index id, std::string version, std::string name,
                               std::string className)
    : objectId(id), objectVersion(version), propName(name),
      className(className) {}

SimulinkObject::SimulinkObject(std::string version, std::string className)
    : objectVersion(version), className(className) {}

SimulinkObject::SimulinkObject(const SimulinkObject &other) {

  this->className = other.className;
  this->objectId = other.objectId;
  this->propName = other.propName;
}

SimulinkElementType SimulinkObject::getType() const {
  return SimulinkElementType::Object;
}

Index SimulinkObject::getID() const { return objectId; }

std::string SimulinkObject::toString() const {

  std::ostringstream oss;

  oss << "SimulinkObject {\n";
  oss << "  ID: " << objectId << "\n";
  oss << "  Version: " << objectVersion << "\n";
  oss << "  Name: " << propName << "\n";
  oss << "  Class: " << className << "\n";

  oss << "  Objects:\n";
  for (const auto &obj : objects) {
    if (obj) {
      oss << "    - " << obj->toString() << "\n";
    }
  }

  oss << "  Arrays:\n";
  for (const auto &arr : arrays) {
    if (arr) {
      oss << "    - " << arr->toString() << "\n";
    }
  }

  oss << "  Parameters:\n";
  for (const auto &param : parameters) {
    if (param) {
      oss << "    - " << param->toString() << "\n";
    }
  }

  oss << "}";

  return oss.str();
}

ErrorCode SimulinkObject::remove(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    // slog_warn("Cannot remove a null Simulink element.");
    // return ErrorCode::SLX_ERR_NULL_PTR;
  }

  // if (element->getType() != SimulinkElementType::Array &&
  //     element->getType() != SimulinkElementType::Object) {
  //   // slog_error(
  //   //     "Cannot remove a Simulink element of a different type than Array "
  //   //     "or Object to a SimulinkObject");
  //   return SimulinkErrorType::SLX_ERR_TYPE_MISMATCH;
  // }
  return ErrorCode::Ok;
}

ErrorCode SimulinkObject::add(std::shared_ptr<SimulinkElementBase> element) {

  if (element == nullptr) {
    // slog_warn("SimulinkObject::Cannot add a null Simulink element.");
    // return ErrorCode::SLX_ERR_NULL_PTR;
  }

  // if (element->getType() != SimulinkElementType::Array &&
  //     element->getType() != SimulinkElementType::Object &&
  //     element->getType() != SimulinkElementType::Parameter) {
  //   // slog_error("Cannot add a Simulink element of a different type than
  //   Array
  //   // "
  //   //           "or Object or a Parameter to a SimulinkObject");
  //   return SimulinkErrorType::SLX_ERR_TYPE_MISMATCH;
  // }

  // if (element->getType() == SimulinkElementType::Parameter) {
  //   std::shared_ptr<SimulinkParameter> paramPtr =
  //       std::dynamic_pointer_cast<SimulinkParameter>(element);
  //   if (!paramPtr) {
  //     // slog_error("SimulinkObject: Failed to cast SimulinkElementBase to "
  //     //           "SimulinkParameter");
  //     return SimulinkErrorType::SLX_ERR_TYPE_MISMATCH;
  //   }
  //   this->parameters.push_back(paramPtr);
  // }

  if (element->getType() == SimulinkElementType::Object) {

    std::shared_ptr<SimulinkObject> objPtr =
        std::dynamic_pointer_cast<SimulinkObject>(element);

    this->objects.push_back(objPtr);
  }

  if (element->getType() == SimulinkElementType::Array) {

    std::shared_ptr<SimulinkArray> arrayPtr =
        std::dynamic_pointer_cast<SimulinkArray>(element);
    this->arrays.push_back(arrayPtr);
  }
  return ErrorCode::Ok;
}

bool SimulinkObject::contains(Index id) const {

  if (objectId == id) {
    return 1;
  }

  if (!objects.empty()) {
    for (const auto &obj : objects) {
      if (obj) {
        if (obj->contains(id)) {
          return 1;
        }
      }
    }
  }

  if (!arrays.empty()) {
    for (const auto &arr : arrays) {
      if (arr) {
        if (arr->contains(id)) {
          return 1;
        }
      }
    }
  }
  return 0;
}

std::shared_ptr<SimulinkParameter>
SimulinkObject::getParameter(std::string name) {

  for (const auto &param : parameters) {
    if (param && param->getName() == name) {
      return param;
    }
  }

  for (const auto &subElement : objects) {
    if (subElement) {

      auto result = subElement->getParameter(name);
      if (result) {
        return result;
      }
    }
  }

  for (const auto &array : arrays) {
    if (array) {
      auto arrayParam = array->getParameter(name);
      if (arrayParam) {
        return arrayParam;
      }
    }
  }

  // slog_warn("SimulinkObject:: Parameter '%s' not found.", name.c_str());
  return nullptr;
}

std::string SimulinkObject::getName() { return propName; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END