# SPDX-FileCopyrightText: Copyright (c) Wissem Chiha
# SPDX-License-Identifier: MIT

project('npio',
  'c',
  version        : '0.1.0',
  license        : 'MIT',
  meson_version  : '>=0.64.0',
  default_options : ['warning_level=3']
)

build_shared = get_option('build_shared')
build_tests = get_option('build_tests')

sources = [
  'src/npio.h',
  'src/npio.c'
]

test_sources = [
  'test/test_npio_strerror.c',
  'test/test_np_array_create.c',
  'test/test_npy_fopen.c',
  'test/test_npy_fread.c',
  'test/test_npy_fwrite.c',
  'test/test_npy_read.c'
]

test_data = [
  'bool_2x2.npy',
  'complex64_3x3.npy',
  'float32_4x4.npy',
  'int8_1x2x3.npy',
  'int16_range.npy',
]

incdir = include_directories('src')
zdep = dependency('zlib',
 version : '>=1.2.8',
 required : true,
 fallback : ['zlib', 'zlib_dep']
)

if build_shared
  npio = shared_library(
    meson.project_name(), 
    sources,
    dependencies : zdep,
    install: not meson.is_subproject(),
  )
endif

npio = static_library(
  meson.project_name(),
  sources,
  dependencies : zdep,
  install: not meson.is_subproject(),
)

if build_tests

  fs = import('fs')
  foreach f : test_data
    fs.copyfile(
      meson.current_source_dir() / 'test' / 'data' / f,
      f    
    )
  endforeach

  unity_proj = subproject('unity')   
  unity_dep = unity_proj.get_variable('unity_dep')

  foreach t : test_sources
    testname = t.split('/')[-1].split('.')[0]
    exe = executable(testname, t,
      link_with : npio,
      dependencies : [unity_dep, zdep],
      include_directories : incdir
    )
    test(testname, exe)
  endforeach
endif 

if not meson.is_subproject()
  pkg = import('pkgconfig')
  pkg.generate(
    name: meson.project_name(),
    version: meson.project_version(),
    libraries: [ meson.project_name() ],
    description: 'NUMPY NPY/NPZ File I/O Library'
  )
endif