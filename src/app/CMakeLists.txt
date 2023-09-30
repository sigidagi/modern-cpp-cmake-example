project(app)

add_executable(${PROJECT_NAME} src/main.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src/models/include)
target_link_libraries(${PROJECT_NAME} PRIVATE models)
