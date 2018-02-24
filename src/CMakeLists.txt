file (GLOB srcs *.cpp)

add_library (playground SHARED ${srcs})
target_link_libraries (playground Qt5::Widgets)

add_subdirectory (tools/)
