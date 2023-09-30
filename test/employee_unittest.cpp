#include "employee.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Employee_Constructor") { Employee sample(1, "Joe", "Blow"); }

TEST_CASE("Construictor_failure") {
    try {
        Employee sample(0, "Joe", "Blow");
    } catch (std::invalid_argument &err) {
        REQUIRE("id must be greater than zero." == std::string{err.what()});
    }
}
