// Copyright 2025-2026 Wissem Chiha
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

#include "Cxxopts.h"
#include "Version.h"
#include <iostream>

void banner() {
  std::cout <<
      R"(
   _____ __   _  __ ________ 
  / ___// /  | |/ //  _/ __ \
  \__ \/ /   |   / / // / / /
 ___/ / /___/   |_/ // /_/ / 
/____/_____/_/|_/___/\____/  
                             )"
            << std::endl;

  //std::cout << "    Version:      " << SLXIO_VERSION_STRING << "\n";
  std::cout << "    Developer:    "
            << "Wissem Chiha"
            << "\n";
  std::cout << "    License:      "
            << "Apache License 2.0"
            << "\n";
  std::cout << "    Homepage:     "
            << "https://github.com/wissem01chiha/slxio"
            << "\n\n";
}

int main(int argc, char *argv[]) {
  banner();
  cxxopts::Options options("SLXIO");
  options.add_options()("h,help", "Show help");
  auto result = options.parse(argc, argv);
  if (result.count("help")) {
    std::cout << options.help() << std::endl;
    return 0;
  }
  return 0;
}