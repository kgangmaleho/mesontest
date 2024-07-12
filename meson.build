project('mesontest', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++14'])

sdl2lib = dependency('sdl2')
fmtlib = dependency('fmt')

executable('mesontest',
           'mesontest.cpp',
           dependencies : [sdl2lib, fmtlib])
