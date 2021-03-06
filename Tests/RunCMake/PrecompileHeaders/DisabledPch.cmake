cmake_minimum_required(VERSION 3.15)
project(DisabledPch C)

add_library(foo foo.c)
target_include_directories(foo PUBLIC include)
target_precompile_headers(foo PUBLIC
  foo.h
  <stdio.h>
  \"string.h\"
)

add_executable(foobar foobar.c)
target_link_libraries(foobar foo)
set_target_properties(foobar PROPERTIES DISABLE_PRECOMPILE_HEADERS ON)
