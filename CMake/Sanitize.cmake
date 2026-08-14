# SPDX-FileCopyrightText: 2025-2026 Wissem Chiha
# SPDX-License-Identifier: Apache-2.0

if(SLXIO_ASAN)
    if (CMAKE_CXX_COMPILER_ID STREQUAL "MSVC")
        # Works only with LLVM/Clang toolset in MSVC
        add_compile_options(/fsanitize=address)
        add_link_options(/fsanitize=address)
    elseif (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
        add_compile_options(-fsanitize=address)
        add_link_options(-fsanitize=address)
    endif()
endif()

if(SLXIO_UBSAN)
    # UBSan works with GCC and Clang
    if (CMAKE_CXX_COMPILER_ID MATCHES "Clang|GNU")
        add_compile_options(-fsanitize=undefined)
        add_link_options(-fsanitize=undefined)
    endif()
endif()

if(NOT WIN32)
    if(SLXIO_MSAN)
        # MSan works only with Clang
        if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
            set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=memory")
            set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=memory")
            set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=memory -stdlib=libc++")
        endif()
    endif()

    if(SLXIO_TSAN)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")
        set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=thread")
        if (CMAKE_CXX_COMPILER_ID MATCHES "Clang")
            set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=thread -stdlib=libc++")
        endif()
    endif()
endif()
