// SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
// SPDX-License-Identifier: Apache-2.0

#ifndef SPDLOG_H_
#define SPDLOG_H_

#ifdef USE_EXTERNAL_SPDLOG
#include <spdlog/spdlog.h>
#include <spdlog/logger.h>
#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/async.h>
#include <spdlog/spdlog-inl.h>
#else
#include <src/include/spdlog/spdlog.h>
#include <src/include/spdlog/logger.h>
#include <src/include/spdlog/sinks/basic_file_sink.h>
#include <src/include/spdlog/sinks/stdout_color_sinks.h>
#include <src/include/spdlog/async.h>
#endif

#endif // SPDLOG_H_