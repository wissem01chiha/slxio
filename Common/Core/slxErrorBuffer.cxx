#include "slxErrorBuffer.h"
#include <iostream>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

slxErrorBuffer::slxErrorBuffer() {}

void slxErrorBuffer::push_back(const slxErrorCode &code, const std::string &message) {
}

uint32 slxErrorBuffer::getSize() const { return this->size; }

// void slxErrorBuffer::clear() {
//   while (head != nullptr) {
//     ErrorNode *temp = head;
//     head = head->getNext();
//     delete temp;
//   }
//   tail = nullptr;
//   this->size = 0;
// }

bool slxErrorBuffer::isEmpty() const { return this->size == 0; }

bool slxErrorBuffer::contains(const slxErrorCode &code) const { return false; }

void slxErrorBuffer::print(std::ostream &os) const {
  // ErrorNode *current = head;
  // while (current != nullptr) {
  //   os << current->toString() << std::endl;
  //   current = current->getNext();
  // }
}

void slxErrorBuffer::log() const {
  // ErrorNode *current = head;
  // while (current != nullptr) {
  //   Logger::getInstance().Log(Logger::Verbosity::V_ERROR,
  //                             current->toString().c_str());
  //   current = current->getNext();
  // }
}

slxErrorBuffer::~slxErrorBuffer() { clear(); }

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END