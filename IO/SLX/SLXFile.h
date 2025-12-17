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

#include "File.h"
#include "slxABINamespace.h"
#include <memory>
#include <string>

SLXIO_NAMESPACE_BEGIN
SLXIO_ABI_NAMESPACE_BEGIN

/**
 * @brief SLXFile is an general low level representation of
 * a Simulink .slx file data information, for now we support
 * only one configuration set file (for model attached multiple configs
 * more then 1 xml file is present)
 */
class SLXFile {
public:
  SLXFile(std::string path);
  ~SLXFile() = default;
  File *loadblockDiagram();
  File *loadConfigSet();
  File *loadDataDictionary();

private:
  SLXFile() = delete;
  std::string filepath_;
  std::string filename_;
  uint32_t size_;
  std::string tempdir_;
  std::string version_;
  std::string author;
  std::string lastUpdate_;
  std::unique_ptr<File> blockDiagram;
  std::unique_ptr<File> configSet;
  std::unique_ptr<File> dataDictionary;
};

SLXIO_ABI_NAMESPACE_END
SLXIO_NAMESPACE_END