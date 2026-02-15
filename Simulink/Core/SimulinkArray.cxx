#include "SimulinkArray.h"
#include "Logger.h"
#include <algorithm>

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

  Logger &l = Logger::getInstance();
  if (elment == nullptr) {
    l.log(Logger::V_WARNING,
          "SimulinkArray::Cannot add a null Simulink element.");
    return ErrorCode::SLX_ENOENT;
  }

  if (elment->getType() == SimulinkElementType::Array) {

    std::shared_ptr<SimulinkArray> subArrayPtr =
        std::dynamic_pointer_cast<SimulinkArray>(elment);

    for (const auto &arraysPtr : subArrays) {
      if (subArrayPtr->getName() == arraysPtr->getName()) {
        l.log(Logger::V_WARNING,
              "SimulinkArray::subArray already exsists in the Base array");
      }
    }
    subArrays.push_back(subArrayPtr);

  } else if (elment->getType() == SimulinkElementType::Object) {

    for (const auto &objId : objects) {
      if (elment->getID() == objId) {
        l.log(
            Logger::V_WARNING,
            "SimulinkArray::subObject already exsists in the Base array abort");
        return ErrorCode::SLX_OK;
      }
    }

    objects.push_back(elment->getID());

  } else if (elment->getType() == SimulinkElementType::Parameter) {

    std::shared_ptr<SimulinkParameter> param =
        std::dynamic_pointer_cast<SimulinkParameter>(elment);
    parameters.push_back(param);
    return ErrorCode::SLX_OK;
  } else {
    l.log(Logger::V_ERROR, "Cannot add a Simulink element of a different type "
                           "than Array or Object to a SimulinkObject");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  return ErrorCode::SLX_OK;
}

ErrorCode SimulinkArray::remove(std::shared_ptr<SimulinkElementBase> elment) {

  Logger &l = Logger::getInstance();
  if (elment == nullptr) {
    l.log(Logger::V_WARNING,
          "SimulinkArray::Cannot remove a null Simulink element.");
    return ErrorCode::SLX_ENULLPTR;
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
    l.log(Logger::V_WARNING,
          "SimulinkArray::Cannot remove a Simulink element of a different type "
          "than Array or Object to a SimulinkObject");
    return ErrorCode::SLX_ETYPEMISMATCH;
  }

  return ErrorCode::SLX_OK;
}

Index SimulinkArray::getID() const {

  Logger &l = Logger::getInstance();
  l.log(Logger::V_INFO,
        "SimulinkArray do not have an ID by default use contains(uint32 id) to "
        "check for sub objects by their Id");
  return arrayId;
}

bool SimulinkArray::contains(const Index &id) const {

  for (Index objID : objects) {
    if (objID == id) {
      return true;
    }
  }

  for (const auto &arr : subArrays) {
    if (arr) {
      if (arr->contains(id)) {
        return true;
      }
    }
  }

  return false;
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

  Logger::getInstance().log(Logger::V_WARNING, "SimulinkArray:: Parameter",
                            name.c_str(), " not found.");
  return nullptr;
}

std::string SimulinkArray::getName() { return arrayName; }

std::string SimulinkArray::getDimension() { return arrayDimension; }

std::string SimulinkArray::getArrayType() { return arrayType; }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END
