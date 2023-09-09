#include "component1.h"
#include "Component2.h"
#include "versionConversion.h"

#pragma warning( push )
#pragma warning( disable: 4365) // 'argument': conversion from 'int' to 'WORD', signed/unsigned mismatch
#pragma warning( disable: 4514) // 'operator <<': unreferenced inline function has been removed
#pragma warning( disable: 4583) // Destructor is not implicitly called
#pragma warning( disable: 4623) // Default constructor was implicitly defined as deleted
#pragma warning( disable: 4625) // Copy constructor was implicitly defined as deleted
#pragma warning( disable: 4626) // Assignment operator was implicitly defined as deleted
#pragma warning( disable: 4820) // 'X' bytes padding added after data member 'Y'
#pragma warning( disable: 4868) // Compiler may not enforce left-to-right evaluation order in braced initializer list
#pragma warning( disable: 5026) // Move assignment operator was implicitly defined as deleted
#pragma warning( disable: 5027) // Move constructor was implicitly defined as deleted
#pragma warning( disable: 5039) // Pointer or reference to potentially throwing function passed to 'extern "C"' function under -EHc. Undefined behavior may occur if this function throws an exception.
#pragma warning( disable: 5045) // Compiler will insert Spectre mitigation for memory load if /Qspectre switch specified
#pragma warning( disable: 5204) // class has virtual functions, but its trivial destructor is not virtual;
#pragma warning( disable: 5219) // Implicit conversion from 'uint64_t' to 'double', possible loss of data
#pragma warning( disable: 5262) // Implicit fall-through occurs here
#pragma warning( disable: 5264) // 'const' variable is not used
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include <iostream>
#pragma warning( pop )

namespace {
  auto test_name_from_version(auto val) {
    std::stringstream test_name;
    test_name << val;

    return test_name.str();
  }
}

TEST_CASE("Version conversions") {
  auto [function_name, convert_fn] = GENERATE(table<const char*, Comp_2(*)(Comp_1)>({
    {"if-else", to_comp_2_version_with_if},
    {"if-else (with likely annotated)", to_comp_2_version_with_if_likely_annotated},
    {"range lookup", to_comp_2_version_with_range_lookup},
    {"unordered map lookup", to_comp_2_version_with_unordered_map},
    {"unordered map lookup (with shortcut)", to_comp_2_version_with_unordered_map_and_shortcut},
    {"map lookup", to_comp_2_version_with_map},
    {"map lookup (with shortcut)", to_comp_2_version_with_map_and_shortcut},
    {"switch-case", to_comp_2_version_with_switch_case},
    {"switch-case (with likely annotated)", to_comp_2_version_with_switch_case_annotated}
    }));

  auto [from_start, from_end, to] = GENERATE(table<Comp_1, Comp_1, Comp_2>({
    {Comp_1::version_1,   Comp_1::version_2,   Comp_2::version_1 },
    {Comp_1::version_2,   Comp_1::version_12,  Comp_2::version_2 },
    {Comp_1::version_12,  Comp_1::version_18,  Comp_2::version_3 },
    {Comp_1::version_18,  Comp_1::version_25,  Comp_2::version_4 },
    {Comp_1::version_25,  Comp_1::version_33,  Comp_2::version_5 },
    {Comp_1::version_33,  Comp_1::version_41,  Comp_2::version_6 },
    {Comp_1::version_41,  Comp_1::version_48,  Comp_2::version_7 },
    {Comp_1::version_48,  Comp_1::version_50,  Comp_2::version_8 },
    {Comp_1::version_50,  Comp_1::version_69,  Comp_2::version_9 },
    {Comp_1::version_69,  Comp_1::version_81,  Comp_2::version_10},
    {Comp_1::version_81,  Comp_1::version_90,  Comp_2::version_11},
    {Comp_1::version_90,  Comp_1::version_100, Comp_2::version_12},
    {Comp_1::version_100, Comp_1::version_108, Comp_2::version_13},
    {Comp_1::version_108, Comp_1::version_115, Comp_2::version_14},
    {Comp_1::version_115, Comp_1::version_123, Comp_2::version_15},
    {Comp_1::version_123, Comp_1::version_131, Comp_2::version_16},
    {Comp_1::version_131, Comp_1::version_137, Comp_2::version_17},
    {Comp_1::version_137, Comp_1::version_142, Comp_2::version_18},
    {Comp_1::version_142, Comp_1::version_146, Comp_2::version_19},
    {Comp_1::version_146, Comp_1::version_151, Comp_2::version_20},
    {Comp_1::version_151, Comp_1::version_157, Comp_2::version_21},
    {Comp_1::version_157, Comp_1::version_160, Comp_2::version_22},
    {Comp_1::version_160, Comp_1::version_165, Comp_2::version_23},
    {Comp_1::version_165, Comp_1::version_170, Comp_2::version_24},
    {Comp_1::version_170, Comp_1::version_175, Comp_2::version_25},
    {Comp_1::version_175, Comp_1::version_180, Comp_2::version_26},
    {Comp_1::version_180, Comp_1::version_189, Comp_2::version_27},
    {Comp_1::version_189, Comp_1::version_192, Comp_2::version_28},
    {Comp_1::version_192, Comp_1::version_196, Comp_2::version_29},
    {Comp_1::version_196, Comp_1::version_199, Comp_2::version_30},
    {Comp_1::version_199, Comp_1::version_202, Comp_2::version_31},
    {Comp_1::version_202, Comp_1::version_205, Comp_2::version_32},
    {Comp_1::version_205, Comp_1::version_209, Comp_2::version_33},
    {Comp_1::version_209, Comp_1::version_212, Comp_2::version_34},
    {Comp_1::version_212, Comp_1::version_215, Comp_2::version_35},
    {Comp_1::version_215, Comp_1::version_218, Comp_2::version_36},
    {Comp_1::version_218, Comp_1::version_221, Comp_2::version_37},
    {Comp_1::version_221, Comp_1::version_224, Comp_2::version_38},
    {Comp_1::version_224, Comp_1::version_227, Comp_2::version_39},
    {Comp_1::version_227, Comp_1::version_230, Comp_2::version_40},
    {Comp_1::version_230, Comp_1::version_234, Comp_2::version_41},
    {Comp_1::version_234, Comp_1::version_236, Comp_2::version_42},
    {Comp_1::version_236, Comp_1::version_240, Comp_2::version_43},
    {Comp_1::version_240, Comp_1::version_243, Comp_2::version_44},
    {Comp_1::version_243, Comp_1::version_247, Comp_2::version_45},
    {Comp_1::version_247, Comp_1::version_250, Comp_2::version_46},
    {Comp_1::version_250, Comp_1::version_253, Comp_2::version_47},
    {Comp_1::version_253, Comp_1::count,       Comp_2::version_48},
    }));

  static_assert(static_cast<uint32_t>(Comp_2::count) == 48, "Invalid Comp 2 count. Check test cases cover all Comp 2 values");

  SECTION(std::format("Convert via {}", function_name)) {
    for (auto from_version : std::ranges::iota_view{ static_cast<uint32_t>(from_start), static_cast<uint32_t>(from_end) }) {
      SECTION(test_name_from_version(Comp_1{ from_version })) {
        REQUIRE(convert_fn(Comp_1{ from_version }) == to);
      }
    }
  }
}
