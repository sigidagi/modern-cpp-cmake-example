
project(catch2_example)

add_executable(
    ${PROJECT_NAME} 
    employee_unittest.cpp
    )


target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/models/include)
target_link_libraries(${PROJECT_NAME} PRIVATE models Catch2::Catch2WithMain)
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)

include(CTest)
enable_testing()

add_test(NAME ${PROJECT_NAME} COMMAND ${PROJECT_NAME})

