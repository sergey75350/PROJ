cmake_minimum_required(VERSION 3.21)

project(PROJ)

add_executable(main main.cpp Initializations.cpp)

add_subdirectory(Mat)
add_subdirectory(MyTest)
add_subdirectory(googletest-main)

target_link_libraries(main math)

#target_include_directories(main PUBLIC "D:/TP/boost_1_77_0")
#target_link_directories(main PUBLIC "D:/TP/boost_1_77_0/stage/lib")

