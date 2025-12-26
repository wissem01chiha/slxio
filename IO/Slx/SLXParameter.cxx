#include "SLXParameter.h"
#include "Logger.h"
#include <limits>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

SLXParameter::SLXParameter(const SLXParameter &other) {}

SLXParameter::SLXParameter(std::string name, std::string value)
    : name_(name), value_(value) {}

SLXParameter::SLXParameter(std::string name, std::string value,
                           std::string className)
    : name_(name), value_(value), class_(className) {}

std::string SLXParameter::getClass() const { return this->class_; }

std::string SLXParameter::getName() const { return name_; }

std::string SLXParameter::getValue() const { return value_; }

SLXParameter::ErrorCode SLXParameter::setValue(std::string value) {

  if (value == "") {
    // slog_error(
    //     "Paramter value cannot be empty string for a Simulink Parameter!");
    return SLX_EINVAR;
  }
  this->value_ = value;
  return SLX_OK;
}

std::string SLXParameter::toString() const {
  return name_ + ", " + class_ + ", " + value_;
}

template <typename T> T SLXParameter::static_cast_value() {
  if (sizeof(T) == 0) {
    // slog_fatal("Unsupported type for static_cast_value");
    return T();
  }
}

template <typename T> std::vector<T> SLXParameter::static_cast_vector() {
  if (sizeof(T) == 0) {
    // slog_fatal("Unsupported type for static_cast_vector");
    return T();
  }
}

template <> Float SLXParameter::static_cast_value<Float>() {
  if (class_ == "") {
    // slog_warn("SLXParameter: 'class_' is empty,"
    //           "explicitly initialize the type in the constructor to
    //           'double'");
  }
  if (class_ == "double") {
    try {
      return std::stod(value_);
    } catch (const std::exception &e) {
      //   slog_error("Failed to cast parameter value '", value_,
      //              "' to double: ", e.what());
      return std::numeric_limits<Float>::quiet_NaN();
    }
  } else {
    // slog_error("Unsupported type conversion: expected 'double', got '",
    //            class_, "'");
    return std::numeric_limits<Float>::quiet_NaN();
  }
}

// template <> Float SLXParameter::static_cast_value<Float>() {
//   if (class_ == "") {
//     // slog_warn("SLXParameter: 'class_' is empty,"
//     //           "explicitly initialize the type in the constructor to
//     //           'float'.");
//   }
//   if (class_ == "float") {
//     try {
//       return std::stof(value_);
//     } catch (const std::exception &e) {
//       // slog_error("Failed to cast parameter value '", value_,
//       //            "' to float: ", e.what());
//       return std::numeric_limits<Float>::quiet_NaN();
//     }
//   } else {
//     // slog_error("Unsupported type conversion: expected 'float', got '",
//     //            class_, "'");
//     return std::numeric_limits<Float>::quiet_NaN();
//   }
// }

template <> uint32 SLXParameter::static_cast_value<uint32>() {

  try {
    return static_cast<uint32>(std::stoul(value_));
  } catch (const std::exception &e) {
    // slog_error("Failed to cast parameter value '", value_,
    //            "' to uint32: ", e.what());
    return 0;
  }
}

template <> sint32 SLXParameter::static_cast_value<sint32>() {

  try {
    return static_cast<sint32>(std::stoi(value_));
  } catch (const std::exception &e) {
    // slog_error("Failed to cast parameter value '", value_,
    //            "' to sint32: ", e.what());
    return 0;
  }
}

template <> bool SLXParameter::static_cast_value<bool>() {

  return value_ == "1" || value_ == "true";
}

template <> std::vector<Float> SLXParameter::static_cast_vector<Float>() {

  std::vector<Float> result;
  std::string numstr = value_.substr(1, value_.length() - 2);
  std::vector<std::string> numstrlist = split(numstr, std::string(","));
  for (const auto &numel : numstrlist) {
    result.push_back(stof(numel));
  }
  return result;
}

// template <> std::vector<float64> SLXParameter::static_cast_vector<float64>()
// {

//   std::vector<float64> result;
//   std::string numstr = value_.substr(1, value_.length() - 2);
//   std::vector<std::string> numstrlist = split(numstr, std::string(","));
//   for (const auto &numel : numstrlist) {
//     result.push_back(stod(numel));
//   }
//   return result;
// }

std::vector<std::string> SLXParameter::split(const std::string &line,
                                             const std::string &del) {
  std::vector<std::string> ret;
  size_t i = 0;
  while (i != line.size()) {
    while ((i != line.size()) && (line.substr(i, 1) == del)) {
      ++i;
    }
    size_t j = i;
    while ((j != line.size()) && (line.substr(j, 1) != del)) {
      ++j;
    }
    if (i != j) {
      ret.push_back(line.substr(i, j - i));
      i = j;
    }
  }
  return ret;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END