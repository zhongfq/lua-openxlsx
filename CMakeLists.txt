cmake_minimum_required(VERSION 3.15 FATAL_ERROR)
project(lua-openxlsx)

set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")

set(CMAKE_CXX_VISIBILITY_PRESET hidden)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(OpenXLSX/OpenXLSX)
add_subdirectory(lua)

####
set(SRC
    src/lua_openxlsx.h
    src/lua_openxlsx.cpp
    olua/olua.h
    olua/olua.c
)
add_library(luaopenxlsx MODULE ${SRC})
set_target_properties(luaopenxlsx PROPERTIES 
    PREFIX ""
    OUTPUT_NAME openxlsx
)
target_include_directories(luaopenxlsx
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/olua
    ${CMAKE_CURRENT_SOURCE_DIR}/lua
)
if(APPLE)
    target_link_options(luaopenxlsx PUBLIC -bundle -undefined dynamic_lookup)
elseif(WIN32)
    target_link_libraries(luaopenxlsx liblua)
endif()

target_link_libraries(luaopenxlsx OpenXLSX)