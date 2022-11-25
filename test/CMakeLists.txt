cmake_minimum_required(VERSION 3.16)

set(SOURCES
    sample-test.cpp
)

add_executable(
    unit_tests
    ${SOURCES})

target_link_libraries(unit_tests 
  PRIVATE
    gtest_main
    core
    )

include(GoogleTest)
gtest_discover_tests(unit_tests
  PROPERTIES
    LABELS "unit"
  DISCOVERY_TIMEOUT  # how long to wait (in seconds) before crashing
    240
  )