#define CATCH_CONFIG_MAIN
#include "catch.hpp" // file catch.hpp bạn đặt trong tests/
#include "../src/shipping.h"
#include <cmath>

TEST_CASE("R1: weight <= 0 throws", "[R1]")
{
    REQUIRE_THROWS_AS(cuocphivanchuyen(0.0, 5.0), std::invalid_argument);
}

TEST_CASE("R2: distance < 0 throws", "[R2]")
{
    REQUIRE_THROWS_AS(cuocphivanchuyen(4.0, -1.0), std::invalid_argument);
}

TEST_CASE("R3: W=5 D=9 => 10000", "[R3]")
{
    REQUIRE(cuocphivanchuyen(5.0, 9.0) == 10000.0);
}

TEST_CASE("R4: W=5 D=10 => 15000", "[R4]")
{
    REQUIRE(cuocphivanchuyen(5.0, 10.0) == 20000.0);
}

TEST_CASE("R5: W=6 D=9 => 12000", "[R5]")
{
    REQUIRE(cuocphivanchuyen(6.0, 9.0) == 12000.0);
}

TEST_CASE("R6: W=6 D=10 => 17000", "[R6]")
{
    REQUIRE(cuocphivanchuyen(6.0, 10.0) == 22000.0);
}
