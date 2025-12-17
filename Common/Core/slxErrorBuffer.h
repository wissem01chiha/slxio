// Copyright 2024-2026 Wissem Chiha
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SLXERRORBUFFER_H
#define SLXERRORBUFFER_H

#include "slxABINamespace.h"
#include "slxErrorCode.h"
#include "slxLogger.h"
#include "slxType.h"

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/// for a lined-list like buffer of error , to enable depper profiling
// of error and expcetions or behvaur logs
// an error buffer holds multiple error codes and messages in  a linked list
// strut
// example how to buffer errors
// ErrorBuffer buffer;
// buffer.addError(slxErrorCode::ErrorId ::SLX_ERR_OPEN, "failed to open file");
// buffer.addError(slxErrorCode::ErrorId ::SLX_ERR_INVALID_XML, "invalid xml
// format"); uint32 errorCount = buffer.getSize(); / get the buffre size to
// check if an error exist in the buffer if(buffer.contains(slxErrorCode::ErrorId
// ::SLX_ERR_OPEN)) { ... }
//
// how to use the buffer
// for depth profiling a function chain or mulitpel process
// allocate a buffer with given size ErrorBuffer(size)
class slxErrorBuffer {
public:
  slxErrorBuffer();
  void push_back(const slxErrorCode &code, const std::string &message);
  uint32 getSize() const;
  void clear();
  bool isEmpty() const;
  bool contains(const slxErrorCode &code) const;
  void print(std::ostream &os) const;
  void log() const;
  ~slxErrorBuffer();

private:
 // ErrorNode *head;
 // ErrorNode *tail;
  uint32 size;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END

#endif // SLXERRORBUFFER_H