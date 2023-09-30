project(models)

include_directories(PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(${PROJECT_NAME} SHARED src/employee.cpp)
