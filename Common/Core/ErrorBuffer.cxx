#include "ErrorBuffer.h"
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

ErrorBuffer::ErrorBuffer() {}

void ErrorBuffer::push_back(const ErrorCode &code, const std::string &message) {
}

uint32 ErrorBuffer::getSize() const { return this->size; }

// void ErrorBuffer::clear() {
//   while (head != nullptr) {
//     ErrorNode *temp = head;
//     head = head->getNext();
//     delete temp;
//   }
//   tail = nullptr;
//   this->size = 0;
// }

bool ErrorBuffer::isEmpty() const { return this->size == 0; }

bool ErrorBuffer::contains(const ErrorCode &code) const { return false; }

void ErrorBuffer::print(std::ostream &os) const {
  // ErrorNode *current = head;
  // while (current != nullptr) {
  //   os << current->toString() << std::endl;
  //   current = current->getNext();
  // }
}

void ErrorBuffer::log() const {
  // ErrorNode *current = head;
  // while (current != nullptr) {
  //   Logger::getInstance().Log(Logger::Verbosity::V_ERROR,
  //                             current->toString().c_str());
  //   current = current->getNext();
  // }
}

ErrorBuffer::~ErrorBuffer() { clear(); }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END