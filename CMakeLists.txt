cmake_minimum_required(VERSION 3.25)

project(Rocks)

set(CMAKE_CXX_STANDARD 20)

# set(HEADERS
#         include/enums.hpp
#         include/Game.hpp
#         include/Player.hpp
#         )
include_directories(${CMAKE_SOURCE_DIR}/include)
set(SOURCES
    src/Game.cpp
    src/Player.cpp
    src/Mode.cpp
    src/GameChoice.cpp
        )

# add_library(MyLibExample Player.cpp Player.hpp enums.hpp Game.hpp Game.cpp enums.cpp)

# add_executable(Rockss main.cpp)

# target_compile_options(${PROJECT_NAME} PUBLIC ${FLAGS})

add_library(${MODULE_NAME} STATIC ${SOURCES}) 
add_executable(${PROJECT_NAME} ${SOURCES} main.cpp)
# target_link_libraries(Rockss PRIVATE MyLibExample)