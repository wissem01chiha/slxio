#include "Status.h"
#include <iostream>

Status::Status() : errno_(ErrorCode::SLX_OK), strerror_(std::string("")) {}

const char *Status::toString(int err) {
  if (err < 0) {
    return uv_strerror(err);
  }
  return toString((ErrorCode)err);
}

const char *Status::toString(ErrorCode err) {
  switch (err) {
#define XX(name, code, msg)                                                    \
  case ErrorCode::name:                                                        \
    return msg;
    SLX_ERROR_MAP(XX)
#undef XX
  }
  return "";
}

const char *Status::toString() const { return toString(errno_); }

void Status::log(int err) {
  std::cerr << "[ErrorCode " << err << "] " << toString(err) << std::endl;
}

ErrorCode Status::toErrorCode(uint32 err) {
  return static_cast<ErrorCode>(err);
}

bool Status::isA(ErrorCode err) const { return errno_ == err; }

bool Status::isA(Status &err) const {
  return errno_ == err.errno_ && strerror_ == err.strerror_;
}

Status::Status(ErrorCode id) : errno_(id) {}

Status::Status(ErrorCode id, const std::string &message)
    : errno_(id), strerror_(message) {}

Status::Status(sint32 err, const std::string &str) {}
