#include "ErrorBuffer.h"
#include <algorithm>
#include "Status.h"
#include "Logger.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorBuffer::ErrorBuffer(size_t maxSize) : maxSize_(maxSize) {}

void ErrorBuffer::push_back(const ErrorCode& code) {
    if (errlist.size() >= maxSize_) {
        errlist.erase(errlist.begin()); 
    }
    errlist.push_back(code);
}

void ErrorBuffer::push_back(const ErrorBuffer &buffer) {
  if(buffer.empty()){
    return;
  }
  if(buffer.size() + this->size() > maxSize_){
    Logger::getInstance().log(Logger::VERBOSITY_0, "Failed to merge error buffer: maximum size exceeded");
    return ;
  }
  for (size_t i=0;i<maxSize_; i++)
  { 
    this->push_back(buffer[i]);
  }
  
}

void ErrorBuffer::clear() { errlist.clear(); }

size_t ErrorBuffer::size() const {
  return errlist.size();
}

bool ErrorBuffer::empty() const {
    return errlist.empty();
}

bool ErrorBuffer::contains(const ErrorCode& code) const {
    return std::find(errlist.begin(), errlist.end(), code) != errlist.end();
}

void ErrorBuffer::print(std::ostream& os) const {
    for (const auto& code : errlist) {
        os << Status::toString(code) << std::endl; 
    }
}

void ErrorBuffer::log() const {
    for (const auto& code : errlist) {
       Status::log(static_cast<int>(code));
    }
}

ErrorCode &ErrorBuffer::operator[](size_t index) {
return errlist[index];
}

const ErrorCode &ErrorBuffer::operator[](size_t index) const {
return errlist[index];
}

ErrorBuffer::~ErrorBuffer() {
    clear();
}

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END