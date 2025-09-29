#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>
#include <string>
#include "../src/strcmp.hpp"


TEST_CASE( "Testing") {
    REQUIRE( strcmp_case_insensitive("", "") == 0 );
    REQUIRE( strcmp_case_insensitive("a", "A") == 0 );
    REQUIRE( strcmp_case_insensitive("ABABAB", "ababab") == 0 );
    REQUIRE( strcmp_case_insensitive("hello", "HelloI") == -1 );
    REQUIRE( strcmp_case_insensitive("HelloI", "hello") == 1 );
    REQUIRE( strcmp_case_insensitive("helLo", "hellA") == 1 );
    REQUIRE( strcmp_case_insensitive("asdasdad", "aSJLDKaklsjdlksajdsl") == -1 );

}
