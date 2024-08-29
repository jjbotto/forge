cmake_minimum_required(VERSION 3.10)
project(MyGame)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Include SFML headers from local dependencies folder
include_directories(${CMAKE_SOURCE_DIR}/dependencies/include)

# Link SFML libraries from local dependencies folder
link_directories(${CMAKE_SOURCE_DIR}/dependencies/lib)

# Add the executable
add_executable(main src/main.cpp)

# Link SFML libraries
target_link_libraries(main sfml-graphics sfml-window sfml-system)
