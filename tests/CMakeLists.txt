include_directories(${PROJECT_SOURCE_DIR}/src)
include(GoogleTest)

add_executable(testa test_a.cc)
target_link_libraries(testa a gtest_main)
gtest_discover_tests(testa)
