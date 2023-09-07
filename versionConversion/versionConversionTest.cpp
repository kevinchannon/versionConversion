#include "component1.h"
#include "Component2.h"
#include "versionConversion.h"

#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <iostream>

namespace {
  auto comp_1_range(Comp_1 start, Comp_1 end) {
    using namespace Catch::Generators;
    return map([](auto&& x) { return Comp_1{ x }; }, range(static_cast<uint32_t>(start), static_cast<uint32_t>(end) + 1));
  }

  auto test_name_from_version(auto val) {
    std::stringstream test_name;
    test_name << val;

    return test_name.str();
  }
}

TEST_CASE("Version conversions") {
  auto [function_name, convert_fn] = GENERATE(table<const char*, Comp_2(*)(Comp_1)>({
    {"if-else", to_comp_2_version_with_if},
    {"range lookup", to_comp_2_version_with_range_lookup}
    }));

  SECTION(std::format("Convert via {}", function_name)) {
    SECTION("Things that convert to version 0 of comp 2") {
      const auto from_version = GENERATE(comp_1_range(Comp_1::version_1, Comp_1::version_42));

      SECTION(test_name_from_version(from_version)) {
        REQUIRE(convert_fn(from_version) == Comp_2::version_0);
      }
    }

    SECTION("Things that convert to version 1 of comp 2") {
      const auto from_version = GENERATE(comp_1_range(Comp_1::version_43, Comp_1::version_111));

      SECTION(test_name_from_version(from_version)) {
        REQUIRE(convert_fn(from_version) == Comp_2::version_1);
      }
    }

    SECTION("Things that convert to version 2 of comp 2") {
      const auto from_version = GENERATE(comp_1_range(Comp_1::version_112, Comp_1::version_152));

      SECTION(test_name_from_version(from_version)) {
        REQUIRE(convert_fn(from_version) == Comp_2::version_2);
      }
    }

    SECTION("Things that convert to version 3 of comp 2") {
      const auto from_version = GENERATE(comp_1_range(Comp_1::version_153, Comp_1::version_222));

      SECTION(test_name_from_version(from_version)) {
        REQUIRE(convert_fn(from_version) == Comp_2::version_3);
      }
    }

    SECTION("Things that convert to version 4 of comp 2") {
      const auto from_version = GENERATE(comp_1_range(Comp_1::version_223, Comp_1::version_256));

      SECTION(test_name_from_version(from_version)) {
        REQUIRE(convert_fn(from_version) == Comp_2::version_4);
      }
    }
  }
}
