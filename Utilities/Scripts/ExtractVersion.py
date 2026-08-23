#!/usr/bin/env python3
#=============================================================================
# Copyright 2025-2026 Wissem Chiha
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or
# implied. See the License for the specific language governing
# permissions and limitations under the License.
#=============================================================================

import os
import re

base_path = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
config_h = os.path.join(base_path, "include", "CLI", "Version.hpp")
data = {"MAJOR": 0, "MINOR": 0, "PATCH": 0}
reg = re.compile(r"^\s*#define\s+CLI11_VERSION_([A-Z]+)\s+([0-9]+).*$")

with open(config_h, "r") as fp:
    for l in fp:
        m = reg.match(l)
        if m:
            data[m.group(1)] = int(m.group(2))

print("{}.{}.{}".format(data["MAJOR"], data["MINOR"], data["PATCH"]))
