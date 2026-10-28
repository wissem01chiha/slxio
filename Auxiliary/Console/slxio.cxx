// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#include "Version.h"
#include "slxCxxopts.h"

#include <iostream>

void banner()
{
    std::cout <<
        R"(
   _____ __   _  __ ________
  / ___// /  | |/ //  _/ __ \
  \__ \/ /   |   / / // / / /
 ___/ / /___/   |_/ // /_/ /
/____/_____/_/|_/___/\____/
                             )"
              << std::endl;

    // std::cout << "    Version:      " << SLXIO_VERSION_NUMBER <<
    // "\n";
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

int main(int argc, char* argv[])
{
    banner();
    cxxopts::Options options("SLXIO");
    options.add_options()("h,help", "Show help");
    auto result = options.parse(argc, argv);
    if (result.count("help"))
    {
        std::cout << options.help() << std::endl;
        return 0;
    }
    return 0;
}
