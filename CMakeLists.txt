set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -g -O0 -fprofile-arcs -ftest-coverage")

include(CTest)

add_executable(myproject main.cpp)

# Добавьте свои тесты здесь

if(CMAKE_COMPILER_IS_GNUCXX)
    target_link_libraries(myproject gcov)
endif()

