file (GLOB srcs *.cpp)
add_library (playground SHARED ${srcs})

include_directories (${CMAKE_SOURCE_DIR}/include)

add_subdirectory (tools/)
