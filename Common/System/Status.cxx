#include "Status.h"

Status::Status() : errno_(ErrorCode::SLX_OK), strerror_(std::string("")) {}

const char* Status::toString(ErrorCode type) {
    for (const auto& entry : ErrMap) {
        if (entry.err == type) {
            return entry.strerr;
        }
    }
    return "";
}

const char* Status::toString() const {
    return toString(errno_);
}

void Status::log(ErrorCode err) {
    fprintf(stderr, "[Error %d] %s\n",
            static_cast<int>(err),
            toString(err));
}

ErrorCode Status::toErrorCode(uint32 err) {
  return static_cast<ErrorCode>(err);
}

bool Status::isA(ErrorCode type) const { return errno_ == type; }

bool Status::isA(Status &type) const {
  return errno_ == type.errno_ && strerror_ == type.strerror_;
}

Status::Status(ErrorCode id) : errno_(id) {}

Status::Status(ErrorCode id, const std::string &message)
    : errno_(id), strerror_(message) {}

Status::Status(sint32 err, const std::string &str) {}
