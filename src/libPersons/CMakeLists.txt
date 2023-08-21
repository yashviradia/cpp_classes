add_library(Persons Person.cpp Twitter.cpp)

target_include_directories(Persons PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})