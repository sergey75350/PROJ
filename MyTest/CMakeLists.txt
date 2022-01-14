add_executable(testing pch.cpp myTest.cpp)

enable_testing()
target_link_libraries(testing math gtest_main)


#target_include_directories(testing PUBLIC "D:/BETA/tehn_progr/PROJ/googletest-main/googletest/include")

#target_link_directories(testing PUBLIC "D:/BETA/Tehn_progr/PROJ/googletest-main/build/lib/Debug")
