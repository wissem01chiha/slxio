#include "SimulinkArray.h"
#include "Logger.h"
#include <algorithm>
#include <sstream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SimulinkArray::SimulinkArray() {}

SimulinkArray::SimulinkArray(std::string type, std::string name,
                             std::string dimension)
    : arrayType(type), arrayName(name), arrayDimension(dimension) {}

SimulinkArray::SimulinkArray(const SimulinkArray &other) {

  this->arrayId = other.arrayId;
  this->arrayName = other.arrayName;
  this->arrayDimension = other.arrayDimension;
  this->parameters = other.parameters;
}

SimulinkElementType SimulinkArray::getType() const {
  return SimulinkElementType(SimulinkElementType::Type::Array);
}

std::string SimulinkArray::toString() const {
  std::ostringstream oss;

  oss << "SimulinkArray {\n";
  oss << "  ID: " << arrayId << "\n";
  oss << "  Type: " << arrayType << "\n";
  oss << "  Name: " << arrayName << "\n";
  oss << "  Dimension: " << arrayDimension << "\n";

  oss << "  Object IDs:\n";
  for (const auto &id : objects) {
    oss << "    - " << id << "\n";
  }

  oss << "  SubArrays:\n";
  for (const auto &subArray : subArrays) {
    if (subArray) {
      oss << "    - " << subArray->toString() << "\n";
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

ErrorCode SimulinkArray::add(std::shared_ptr<SimulinkElementBase> elment) {

  if (elment == nullptr) {
    // slog_warn("Cannot add a null Simulink element.");
    return ErrorCode::ElementNotFound;
  }

  if (elment->getType() == SimulinkElementType::Array) {

    std::shared_ptr<SimulinkArray> subArrayPtr =
        std::dynamic_pointer_cast<SimulinkArray>(elment);

    for (const auto &arraysPtr : subArrays) {
      if (subArrayPtr->getName() == arraysPtr->getName()) {
        // slog_warn("SimulinkArray::subArray already exsists in the Base
        // array");
      }
    }
    subArrays.push_back(subArrayPtr);

  } else if (elment->getType() == SimulinkElementType::Object) {

    for (const auto &objId : objects) {
      if (elment->getID() == objId) {
        // slog_warn("SimulinkArray::subObject already exsists in the Base
        // array, "
        // "abort");
        return ErrorCode::Ok;
      }
    }

    objects.push_back(elment->getID());

  } else if (elment->getType() == SimulinkElementType::Parameter) {

    std::shared_ptr<SimulinkParameter> param =
        std::dynamic_pointer_cast<SimulinkParameter>(elment);
    parameters.push_back(param);
    return ErrorCode::Ok;
  } else {
    // slog_error("Cannot add a Simulink element of a different type than Array
    // "
    //            "or Object to a SimulinkObject");
    return ErrorCode::InvalidElementType;
  }

  return ErrorCode::Ok;
}

ErrorCode SimulinkArray::remove(std::shared_ptr<SimulinkElementBase> elment) {

  if (elment == nullptr) {
    // slog_warn("Cannot remove a null Simulink element.");
    return ErrorCode::ElementNotFound;
  }

  if (elment->getType() == SimulinkElementType::Array) {

    std::shared_ptr<SimulinkArray> arrayPtr =
        std::dynamic_pointer_cast<SimulinkArray>(elment);

    for (const auto &arr : subArrays) {

      if (arr->getName() == arrayPtr->getName()) {
        subArrays.erase(std::remove(subArrays.begin(), subArrays.end(), arr),
                        subArrays.end());
      }
      arr->remove(elment);
    }

  } else if (elment->getType() == SimulinkElementType::Object) {

    for (const auto &objId : objects) {
      if (elment->getID() == objId) {
        objects.erase(std::remove(objects.begin(), objects.end(), objId),
                      objects.end());
      }
    }

  } else {
    // slog_error(
    //     "Cannot remove a Simulink element of a different type than Array "
    //     "or Object to a SimulinkObject");
    return ErrorCode::InvalidElementType;
  }

  return ErrorCode::Ok;
}

uint32 SimulinkArray::getID() const {
  // slog_warn("SimulinkArray do not have an ID by default use contains(uint32 "
  //  "id) to check for sub objects by their ID");
  return arrayId;
}

bool SimulinkArray::contains(uint32 id) const {

  for (uint32 objID : objects) {
    if (objID == id) {
      return 1;
    }
  }

  for (const auto &arr : subArrays) {
    if (arr) {
      if (arr->contains(id)) {
        return 1;
      }
    }
  }

  return 0;
}

std::shared_ptr<SimulinkParameter>
SimulinkArray::getParameter(std::string name) {

  for (const auto &param : parameters) {
    if (param && param->getName() == name) {
      return param;
    }
  }

  for (const auto &subArray : subArrays) {
    if (subArray) {
      auto result = subArray->getParameter(name);
      if (result) {
        return result;
      }
    }
  }

  // slog_warn("SimulinkArray:: Parameter %s not found.", name.c_str());
  return nullptr;
}

std::string SimulinkArray::getName() { return arrayName; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
