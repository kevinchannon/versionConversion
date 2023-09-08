#pragma once

#include "component1.h"
#include "Component2.h"

#include <unordered_map>
#include <map>
#include <array>
#include <utility>
#include <algorithm>
#include <ranges>

[[nodiscard]] auto to_comp_2_version_with_if(Comp_1 ver) noexcept -> Comp_2 {
  if (ver >= Comp_1::version_253) { return Comp_2::version_48; }
  if (ver >= Comp_1::version_250) { return Comp_2::version_47; }
  if (ver >= Comp_1::version_247) { return Comp_2::version_46; }
  if (ver >= Comp_1::version_243) { return Comp_2::version_45; }
  if (ver >= Comp_1::version_240) { return Comp_2::version_44; }
  if (ver >= Comp_1::version_236) { return Comp_2::version_43; }
  if (ver >= Comp_1::version_234) { return Comp_2::version_42; }
  if (ver >= Comp_1::version_230) { return Comp_2::version_41; }
  if (ver >= Comp_1::version_227) { return Comp_2::version_40; }
  if (ver >= Comp_1::version_224) { return Comp_2::version_39; }
  if (ver >= Comp_1::version_221) { return Comp_2::version_38; }
  if (ver >= Comp_1::version_218) { return Comp_2::version_37; }
  if (ver >= Comp_1::version_215) { return Comp_2::version_36; }
  if (ver >= Comp_1::version_212) { return Comp_2::version_35; }
  if (ver >= Comp_1::version_209) { return Comp_2::version_34; }
  if (ver >= Comp_1::version_205) { return Comp_2::version_33; }
  if (ver >= Comp_1::version_202) { return Comp_2::version_32; }
  if (ver >= Comp_1::version_199) { return Comp_2::version_31; }
  if (ver >= Comp_1::version_196) { return Comp_2::version_30; }
  if (ver >= Comp_1::version_192) { return Comp_2::version_29; }
  if (ver >= Comp_1::version_189) { return Comp_2::version_28; }
  if (ver >= Comp_1::version_180) { return Comp_2::version_27; }
  if (ver >= Comp_1::version_175) { return Comp_2::version_26; }
  if (ver >= Comp_1::version_170) { return Comp_2::version_25; }
  if (ver >= Comp_1::version_165) { return Comp_2::version_24; }
  if (ver >= Comp_1::version_160) { return Comp_2::version_23; }
  if (ver >= Comp_1::version_157) { return Comp_2::version_22; }
  if (ver >= Comp_1::version_151) { return Comp_2::version_21; }
  if (ver >= Comp_1::version_146) { return Comp_2::version_20; }
  if (ver >= Comp_1::version_142) { return Comp_2::version_19; }
  if (ver >= Comp_1::version_137) { return Comp_2::version_18; }
  if (ver >= Comp_1::version_131) { return Comp_2::version_17; }
  if (ver >= Comp_1::version_123) { return Comp_2::version_16; }
  if (ver >= Comp_1::version_115) { return Comp_2::version_15; }
  if (ver >= Comp_1::version_108) { return Comp_2::version_14; }
  if (ver >= Comp_1::version_100) { return Comp_2::version_13; }
  if (ver >= Comp_1::version_90 ) { return Comp_2::version_12; }
  if (ver >= Comp_1::version_81 ) { return Comp_2::version_11; }
  if (ver >= Comp_1::version_69 ) { return Comp_2::version_10; }
  if (ver >= Comp_1::version_50 ) { return Comp_2::version_9;  }
  if (ver >= Comp_1::version_48 ) { return Comp_2::version_8;  }
  if (ver >= Comp_1::version_41 ) { return Comp_2::version_7;  }
  if (ver >= Comp_1::version_33 ) { return Comp_2::version_6;  }
  if (ver >= Comp_1::version_25 ) { return Comp_2::version_5;  }
  if (ver >= Comp_1::version_18 ) { return Comp_2::version_4;  }
  if (ver >= Comp_1::version_12 ) { return Comp_2::version_3;  }
  if (ver >= Comp_1::version_2  ) { return Comp_2::version_2;  }
  if (ver >= Comp_1::version_1  ) { return Comp_2::version_1;  }

  static_assert(static_cast<uint32_t>(Comp_2::count) == 48, "Invalid Comp 2 count. Check conversions above");

  // Return the latest version in the case that we didn't recognise the version, somehow.
  return static_cast<Comp_2>(static_cast<uint32_t>(Comp_2::count) - 1);
}

constexpr auto lookup = std::array{
    std::pair{Comp_1::version_1, Comp_2::version_1},
    std::pair{Comp_1::version_2, Comp_2::version_2},
    std::pair{Comp_1::version_12, Comp_2::version_3},
    std::pair{Comp_1::version_18, Comp_2::version_4},
    std::pair{Comp_1::version_25, Comp_2::version_5},
    std::pair{Comp_1::version_33, Comp_2::version_6},
    std::pair{Comp_1::version_41, Comp_2::version_7},
    std::pair{Comp_1::version_48, Comp_2::version_8},
    std::pair{Comp_1::version_50, Comp_2::version_9},
    std::pair{Comp_1::version_69, Comp_2::version_10},
    std::pair{Comp_1::version_81, Comp_2::version_11},
    std::pair{Comp_1::version_90, Comp_2::version_12},
    std::pair{Comp_1::version_100, Comp_2::version_13},
    std::pair{Comp_1::version_108, Comp_2::version_14},
    std::pair{Comp_1::version_115, Comp_2::version_15},
    std::pair{Comp_1::version_123, Comp_2::version_16},
    std::pair{Comp_1::version_131, Comp_2::version_17},
    std::pair{Comp_1::version_137, Comp_2::version_18},
    std::pair{Comp_1::version_142, Comp_2::version_19},
    std::pair{Comp_1::version_146, Comp_2::version_20},
    std::pair{Comp_1::version_151, Comp_2::version_21},
    std::pair{Comp_1::version_157, Comp_2::version_22},
    std::pair{Comp_1::version_160, Comp_2::version_23},
    std::pair{Comp_1::version_165, Comp_2::version_24},
    std::pair{Comp_1::version_170, Comp_2::version_25},
    std::pair{Comp_1::version_175, Comp_2::version_26},
    std::pair{Comp_1::version_180, Comp_2::version_27},
    std::pair{Comp_1::version_189, Comp_2::version_28},
    std::pair{Comp_1::version_192, Comp_2::version_29},
    std::pair{Comp_1::version_196, Comp_2::version_30},
    std::pair{Comp_1::version_199, Comp_2::version_31},
    std::pair{Comp_1::version_202, Comp_2::version_32},
    std::pair{Comp_1::version_205, Comp_2::version_33},
    std::pair{Comp_1::version_209, Comp_2::version_34},
    std::pair{Comp_1::version_212, Comp_2::version_35},
    std::pair{Comp_1::version_215, Comp_2::version_36},
    std::pair{Comp_1::version_218, Comp_2::version_37},
    std::pair{Comp_1::version_221, Comp_2::version_38},
    std::pair{Comp_1::version_224, Comp_2::version_39},
    std::pair{Comp_1::version_227, Comp_2::version_40},
    std::pair{Comp_1::version_230, Comp_2::version_41},
    std::pair{Comp_1::version_234, Comp_2::version_42},
    std::pair{Comp_1::version_236, Comp_2::version_43},
    std::pair{Comp_1::version_240, Comp_2::version_44},
    std::pair{Comp_1::version_243, Comp_2::version_45},
    std::pair{Comp_1::version_247, Comp_2::version_46},
    std::pair{Comp_1::version_250, Comp_2::version_47},
    std::pair{Comp_1::version_253, Comp_2::version_48},
};

[[nodiscard]] constexpr auto to_comp_2_version_with_range_lookup(Comp_1 ver) noexcept -> Comp_2 {
  static_assert(static_cast<size_t>(Comp_2::count) == lookup.size(), "Invalid Comp 2 count. Check array above");

  const auto mapping = std::ranges::lower_bound(lookup, ver, std::less_equal<Comp_1>{}, [](auto&& m) {return m.first; });
  return lookup.end() != mapping ? static_cast<Comp_2>(static_cast<uint32_t>(mapping->second) - 1) : static_cast<Comp_2>(static_cast<uint32_t>(Comp_2::count) - 1);
}