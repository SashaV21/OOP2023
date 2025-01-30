find_package(Catch2 2 REQUIRED)
add_executable(characteristic_testing tests.cpp)
target_link_libraries(characteristic_testing characteristic Catch2::Catch2)
