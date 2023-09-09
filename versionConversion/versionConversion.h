#pragma once

#include "component1.h"
#include "Component2.h"

#pragma warning( push )
#pragma warning( disable: 5262) // implicit fall-through occurs here
#pragma warning( disable: 5264) // 'const' variable is not used
#include <unordered_map>
#include <map>
#include <array>
#include <utility>
#include <algorithm>
#include <ranges>
#include <unordered_map>
#include <map>
#include <cassert>
#pragma warning( pop )

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
  if (ver >= Comp_1::version_90) { return Comp_2::version_12; }
  if (ver >= Comp_1::version_81) { return Comp_2::version_11; }
  if (ver >= Comp_1::version_69) { return Comp_2::version_10; }
  if (ver >= Comp_1::version_50) { return Comp_2::version_9; }
  if (ver >= Comp_1::version_48) { return Comp_2::version_8; }
  if (ver >= Comp_1::version_41) { return Comp_2::version_7; }
  if (ver >= Comp_1::version_33) { return Comp_2::version_6; }
  if (ver >= Comp_1::version_25) { return Comp_2::version_5; }
  if (ver >= Comp_1::version_18) { return Comp_2::version_4; }
  if (ver >= Comp_1::version_12) { return Comp_2::version_3; }
  if (ver >= Comp_1::version_2) { return Comp_2::version_2; }
  if (ver >= Comp_1::version_1) { return Comp_2::version_1; }

  static_assert(Comp_1::latest == Comp_1::version_256, "Unexpected component 1 latest verison. Check cases above");
  static_assert(Comp_2::latest == Comp_2::version_48, "Unexpected component 2 latest verison. Check cases above");

  // Return the latest version in the case that we didn't recognise the version, somehow.
  return Comp_2::latest;
}

[[nodiscard]] auto to_comp_2_version_with_if_likely_annotated(Comp_1 ver) noexcept -> Comp_2 {
  [[likely]] if (ver >= Comp_1::version_253) { return Comp_2::version_48; }
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
  if (ver >= Comp_1::version_90) { return Comp_2::version_12; }
  if (ver >= Comp_1::version_81) { return Comp_2::version_11; }
  if (ver >= Comp_1::version_69) { return Comp_2::version_10; }
  if (ver >= Comp_1::version_50) { return Comp_2::version_9; }
  if (ver >= Comp_1::version_48) { return Comp_2::version_8; }
  if (ver >= Comp_1::version_41) { return Comp_2::version_7; }
  if (ver >= Comp_1::version_33) { return Comp_2::version_6; }
  if (ver >= Comp_1::version_25) { return Comp_2::version_5; }
  if (ver >= Comp_1::version_18) { return Comp_2::version_4; }
  if (ver >= Comp_1::version_12) { return Comp_2::version_3; }
  if (ver >= Comp_1::version_2) { return Comp_2::version_2; }
  if (ver >= Comp_1::version_1) { return Comp_2::version_1; }

  static_assert(Comp_1::latest == Comp_1::version_256, "Unexpected component 1 latest verison. Check cases above");
  static_assert(Comp_2::latest == Comp_2::version_48, "Unexpected component 2 latest verison. Check cases above");

  // Return the latest version in the case that we didn't recognise the version, somehow.
  return Comp_2::latest;
}

constexpr auto arr_lookup = std::array{
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
  static_assert(static_cast<size_t>(Comp_2::count) == arr_lookup.size(), "Invalid Comp 2 count. Check array above");

  const auto mapping = std::ranges::lower_bound(arr_lookup, ver, std::less_equal<Comp_1>{}, [](auto&& m) {return m.first; });
  return arr_lookup.end() != mapping ? static_cast<Comp_2>(static_cast<uint32_t>(mapping->second) - 1) : Comp_2::latest;
}

static const auto uo_map_lookup = std::unordered_map<Comp_1, Comp_2>{
  {Comp_1::version_1,  Comp_2::version_1},
  {Comp_1::version_2,  Comp_2::version_2},
  {Comp_1::version_3,  Comp_2::version_2},
  {Comp_1::version_4,  Comp_2::version_2},
  {Comp_1::version_5,  Comp_2::version_2},
  {Comp_1::version_6,  Comp_2::version_2},
  {Comp_1::version_7,  Comp_2::version_2},
  {Comp_1::version_8,  Comp_2::version_2},
  {Comp_1::version_9,  Comp_2::version_2},
  {Comp_1::version_10, Comp_2::version_2},
  {Comp_1::version_11, Comp_2::version_2},
  {Comp_1::version_12, Comp_2::version_3},
  {Comp_1::version_13, Comp_2::version_3},
  {Comp_1::version_14, Comp_2::version_3},
  {Comp_1::version_15, Comp_2::version_3},
  {Comp_1::version_16, Comp_2::version_3},
  {Comp_1::version_17, Comp_2::version_3},
  {Comp_1::version_18, Comp_2::version_4},
  {Comp_1::version_19, Comp_2::version_4},
  {Comp_1::version_20, Comp_2::version_4},
  {Comp_1::version_21, Comp_2::version_4},
  {Comp_1::version_22, Comp_2::version_4},
  {Comp_1::version_23, Comp_2::version_4},
  {Comp_1::version_24, Comp_2::version_4},
  {Comp_1::version_25, Comp_2::version_5},
  {Comp_1::version_26, Comp_2::version_5},
  {Comp_1::version_27, Comp_2::version_5},
  {Comp_1::version_28, Comp_2::version_5},
  {Comp_1::version_29, Comp_2::version_5},
  {Comp_1::version_30, Comp_2::version_5},
  {Comp_1::version_31, Comp_2::version_5},
  {Comp_1::version_32, Comp_2::version_5},
  {Comp_1::version_33, Comp_2::version_6},
  {Comp_1::version_34, Comp_2::version_6},
  {Comp_1::version_35, Comp_2::version_6},
  {Comp_1::version_36, Comp_2::version_6},
  {Comp_1::version_37, Comp_2::version_6},
  {Comp_1::version_38, Comp_2::version_6},
  {Comp_1::version_39, Comp_2::version_6},
  {Comp_1::version_40, Comp_2::version_6},
  {Comp_1::version_41, Comp_2::version_7},
  {Comp_1::version_42, Comp_2::version_7},
  {Comp_1::version_43, Comp_2::version_7},
  {Comp_1::version_44, Comp_2::version_7},
  {Comp_1::version_45, Comp_2::version_7},
  {Comp_1::version_46, Comp_2::version_7},
  {Comp_1::version_47, Comp_2::version_7},
  {Comp_1::version_48, Comp_2::version_8},
  {Comp_1::version_49, Comp_2::version_8},
  {Comp_1::version_50, Comp_2::version_9},
  {Comp_1::version_51, Comp_2::version_9},
  {Comp_1::version_52, Comp_2::version_9},
  {Comp_1::version_53, Comp_2::version_9},
  {Comp_1::version_54, Comp_2::version_9},
  {Comp_1::version_55, Comp_2::version_9},
  {Comp_1::version_56, Comp_2::version_9},
  {Comp_1::version_57, Comp_2::version_9},
  {Comp_1::version_58, Comp_2::version_9},
  {Comp_1::version_59, Comp_2::version_9},
  {Comp_1::version_60, Comp_2::version_9},
  {Comp_1::version_61, Comp_2::version_9},
  {Comp_1::version_62, Comp_2::version_9},
  {Comp_1::version_63, Comp_2::version_9},
  {Comp_1::version_64, Comp_2::version_9},
  {Comp_1::version_65, Comp_2::version_9},
  {Comp_1::version_66, Comp_2::version_9},
  {Comp_1::version_67, Comp_2::version_9},
  {Comp_1::version_68, Comp_2::version_9},
  {Comp_1::version_69, Comp_2::version_10},
  {Comp_1::version_70, Comp_2::version_10},
  {Comp_1::version_71, Comp_2::version_10},
  {Comp_1::version_72, Comp_2::version_10},
  {Comp_1::version_73, Comp_2::version_10},
  {Comp_1::version_74, Comp_2::version_10},
  {Comp_1::version_75, Comp_2::version_10},
  {Comp_1::version_76, Comp_2::version_10},
  {Comp_1::version_77, Comp_2::version_10},
  {Comp_1::version_78, Comp_2::version_10},
  {Comp_1::version_79, Comp_2::version_10},
  {Comp_1::version_80, Comp_2::version_10},
  {Comp_1::version_81, Comp_2::version_11},
  {Comp_1::version_82, Comp_2::version_11},
  {Comp_1::version_83, Comp_2::version_11},
  {Comp_1::version_84, Comp_2::version_11},
  {Comp_1::version_85, Comp_2::version_11},
  {Comp_1::version_86, Comp_2::version_11},
  {Comp_1::version_87, Comp_2::version_11},
  {Comp_1::version_88, Comp_2::version_11},
  {Comp_1::version_89, Comp_2::version_11},
  {Comp_1::version_90, Comp_2::version_12},
  {Comp_1::version_91, Comp_2::version_12},
  {Comp_1::version_92, Comp_2::version_12},
  {Comp_1::version_93, Comp_2::version_12},
  {Comp_1::version_94, Comp_2::version_12},
  {Comp_1::version_95, Comp_2::version_12},
  {Comp_1::version_96, Comp_2::version_12},
  {Comp_1::version_97, Comp_2::version_12},
  {Comp_1::version_98, Comp_2::version_12},
  {Comp_1::version_99, Comp_2::version_12},
  {Comp_1::version_100, Comp_2::version_13},
  {Comp_1::version_101, Comp_2::version_13},
  {Comp_1::version_102, Comp_2::version_13},
  {Comp_1::version_103, Comp_2::version_13},
  {Comp_1::version_104, Comp_2::version_13},
  {Comp_1::version_105, Comp_2::version_13},
  {Comp_1::version_106, Comp_2::version_13},
  {Comp_1::version_107, Comp_2::version_13},
  {Comp_1::version_108, Comp_2::version_14},
  {Comp_1::version_109, Comp_2::version_14},
  {Comp_1::version_110, Comp_2::version_14},
  {Comp_1::version_111, Comp_2::version_14},
  {Comp_1::version_112, Comp_2::version_14},
  {Comp_1::version_113, Comp_2::version_14},
  {Comp_1::version_114, Comp_2::version_14},
  {Comp_1::version_115, Comp_2::version_15},
  {Comp_1::version_116, Comp_2::version_15},
  {Comp_1::version_117, Comp_2::version_15},
  {Comp_1::version_118, Comp_2::version_15},
  {Comp_1::version_119, Comp_2::version_15},
  {Comp_1::version_120, Comp_2::version_15},
  {Comp_1::version_121, Comp_2::version_15},
  {Comp_1::version_122, Comp_2::version_15},
  {Comp_1::version_123, Comp_2::version_16},
  {Comp_1::version_124, Comp_2::version_16},
  {Comp_1::version_125, Comp_2::version_16},
  {Comp_1::version_126, Comp_2::version_16},
  {Comp_1::version_127, Comp_2::version_16},
  {Comp_1::version_128, Comp_2::version_16},
  {Comp_1::version_129, Comp_2::version_16},
  {Comp_1::version_130, Comp_2::version_16},
  {Comp_1::version_131, Comp_2::version_17},
  {Comp_1::version_132, Comp_2::version_17},
  {Comp_1::version_133, Comp_2::version_17},
  {Comp_1::version_134, Comp_2::version_17},
  {Comp_1::version_135, Comp_2::version_17},
  {Comp_1::version_136, Comp_2::version_17},
  {Comp_1::version_137, Comp_2::version_18},
  {Comp_1::version_138, Comp_2::version_18},
  {Comp_1::version_139, Comp_2::version_18},
  {Comp_1::version_140, Comp_2::version_18},
  {Comp_1::version_141, Comp_2::version_18},
  {Comp_1::version_142, Comp_2::version_19},
  {Comp_1::version_143, Comp_2::version_19},
  {Comp_1::version_144, Comp_2::version_19},
  {Comp_1::version_145, Comp_2::version_19},
  {Comp_1::version_146, Comp_2::version_20},
  {Comp_1::version_147, Comp_2::version_20},
  {Comp_1::version_148, Comp_2::version_20},
  {Comp_1::version_149, Comp_2::version_20},
  {Comp_1::version_150, Comp_2::version_20},
  {Comp_1::version_151, Comp_2::version_21},
  {Comp_1::version_152, Comp_2::version_21},
  {Comp_1::version_153, Comp_2::version_21},
  {Comp_1::version_154, Comp_2::version_21},
  {Comp_1::version_155, Comp_2::version_21},
  {Comp_1::version_156, Comp_2::version_21},
  {Comp_1::version_157, Comp_2::version_22},
  {Comp_1::version_158, Comp_2::version_22},
  {Comp_1::version_159, Comp_2::version_22},
  {Comp_1::version_160, Comp_2::version_23},
  {Comp_1::version_161, Comp_2::version_23},
  {Comp_1::version_162, Comp_2::version_23},
  {Comp_1::version_163, Comp_2::version_23},
  {Comp_1::version_164, Comp_2::version_23},
  {Comp_1::version_165, Comp_2::version_24},
  {Comp_1::version_166, Comp_2::version_24},
  {Comp_1::version_167, Comp_2::version_24},
  {Comp_1::version_168, Comp_2::version_24},
  {Comp_1::version_169, Comp_2::version_24},
  {Comp_1::version_170, Comp_2::version_25},
  {Comp_1::version_171, Comp_2::version_25},
  {Comp_1::version_172, Comp_2::version_25},
  {Comp_1::version_173, Comp_2::version_25},
  {Comp_1::version_174, Comp_2::version_25},
  {Comp_1::version_175, Comp_2::version_26},
  {Comp_1::version_176, Comp_2::version_26},
  {Comp_1::version_177, Comp_2::version_26},
  {Comp_1::version_178, Comp_2::version_26},
  {Comp_1::version_179, Comp_2::version_26},
  {Comp_1::version_180, Comp_2::version_27},
  {Comp_1::version_181, Comp_2::version_27},
  {Comp_1::version_182, Comp_2::version_27},
  {Comp_1::version_183, Comp_2::version_27},
  {Comp_1::version_184, Comp_2::version_27},
  {Comp_1::version_185, Comp_2::version_27},
  {Comp_1::version_186, Comp_2::version_27},
  {Comp_1::version_187, Comp_2::version_27},
  {Comp_1::version_188, Comp_2::version_27},
  {Comp_1::version_189, Comp_2::version_28},
  {Comp_1::version_190, Comp_2::version_28},
  {Comp_1::version_191, Comp_2::version_28},
  {Comp_1::version_192, Comp_2::version_29},
  {Comp_1::version_193, Comp_2::version_29},
  {Comp_1::version_194, Comp_2::version_29},
  {Comp_1::version_195, Comp_2::version_29},
  {Comp_1::version_196, Comp_2::version_30},
  {Comp_1::version_197, Comp_2::version_30},
  {Comp_1::version_198, Comp_2::version_30},
  {Comp_1::version_199, Comp_2::version_31},
  {Comp_1::version_200, Comp_2::version_31},
  {Comp_1::version_201, Comp_2::version_31},
  {Comp_1::version_202, Comp_2::version_32},
  {Comp_1::version_203, Comp_2::version_32},
  {Comp_1::version_204, Comp_2::version_32},
  {Comp_1::version_205, Comp_2::version_33},
  {Comp_1::version_206, Comp_2::version_33},
  {Comp_1::version_207, Comp_2::version_33},
  {Comp_1::version_208, Comp_2::version_33},
  {Comp_1::version_209, Comp_2::version_34},
  {Comp_1::version_210, Comp_2::version_34},
  {Comp_1::version_211, Comp_2::version_34},
  {Comp_1::version_212, Comp_2::version_35},
  {Comp_1::version_213, Comp_2::version_35},
  {Comp_1::version_214, Comp_2::version_35},
  {Comp_1::version_215, Comp_2::version_36},
  {Comp_1::version_216, Comp_2::version_36},
  {Comp_1::version_217, Comp_2::version_36},
  {Comp_1::version_218, Comp_2::version_37},
  {Comp_1::version_219, Comp_2::version_37},
  {Comp_1::version_220, Comp_2::version_37},
  {Comp_1::version_221, Comp_2::version_38},
  {Comp_1::version_222, Comp_2::version_38},
  {Comp_1::version_223, Comp_2::version_38},
  {Comp_1::version_224, Comp_2::version_39},
  {Comp_1::version_225, Comp_2::version_39},
  {Comp_1::version_226, Comp_2::version_39},
  {Comp_1::version_227, Comp_2::version_40},
  {Comp_1::version_228, Comp_2::version_40},
  {Comp_1::version_229, Comp_2::version_40},
  {Comp_1::version_230, Comp_2::version_41},
  {Comp_1::version_231, Comp_2::version_41},
  {Comp_1::version_232, Comp_2::version_41},
  {Comp_1::version_233, Comp_2::version_41},
  {Comp_1::version_234, Comp_2::version_42},
  {Comp_1::version_235, Comp_2::version_42},
  {Comp_1::version_236, Comp_2::version_43},
  {Comp_1::version_237, Comp_2::version_43},
  {Comp_1::version_238, Comp_2::version_43},
  {Comp_1::version_239, Comp_2::version_43},
  {Comp_1::version_240, Comp_2::version_44},
  {Comp_1::version_241, Comp_2::version_44},
  {Comp_1::version_242, Comp_2::version_44},
  {Comp_1::version_243, Comp_2::version_45},
  {Comp_1::version_244, Comp_2::version_45},
  {Comp_1::version_245, Comp_2::version_45},
  {Comp_1::version_246, Comp_2::version_45},
  {Comp_1::version_247, Comp_2::version_46},
  {Comp_1::version_248, Comp_2::version_46},
  {Comp_1::version_249, Comp_2::version_46},
  {Comp_1::version_250, Comp_2::version_47},
  {Comp_1::version_251, Comp_2::version_47},
  {Comp_1::version_252, Comp_2::version_47},
  {Comp_1::version_253, Comp_2::version_48},
  {Comp_1::version_254, Comp_2::version_48},
  {Comp_1::version_255, Comp_2::version_48},
  {Comp_1::version_256, Comp_2::version_48},
};

[[nodiscard]] auto to_comp_2_version_with_unordered_map(Comp_1 ver) noexcept -> Comp_2 {
  static_assert(Comp_1::latest == Comp_1::version_256, "Unexpected component 1 latest verison. Check uo_map_lookup contents");
  static_assert(Comp_2::latest == Comp_2::version_48, "Unexpected component 2 latest verison. Check uo_map_lookup contents");

  const auto find = uo_map_lookup.find(ver);
  return uo_map_lookup.end() != find ? find->second : Comp_2::latest;
}

[[nodiscard]] auto to_comp_2_version_with_unordered_map_and_shortcut(Comp_1 ver) noexcept -> Comp_2 {
  if (Comp_1::latest == ver) {
    return Comp_2::latest;
  }

  const auto find = uo_map_lookup.find(ver);
  return uo_map_lookup.end() != find ? find->second : Comp_2::latest;
}

static const auto map_lookup = std::map<Comp_1, Comp_2>{
  {Comp_1::version_1,  Comp_2::version_1},
  {Comp_1::version_2,  Comp_2::version_2},
  {Comp_1::version_3,  Comp_2::version_2},
  {Comp_1::version_4,  Comp_2::version_2},
  {Comp_1::version_5,  Comp_2::version_2},
  {Comp_1::version_6,  Comp_2::version_2},
  {Comp_1::version_7,  Comp_2::version_2},
  {Comp_1::version_8,  Comp_2::version_2},
  {Comp_1::version_9,  Comp_2::version_2},
  {Comp_1::version_10, Comp_2::version_2},
  {Comp_1::version_11, Comp_2::version_2},
  {Comp_1::version_12, Comp_2::version_3},
  {Comp_1::version_13, Comp_2::version_3},
  {Comp_1::version_14, Comp_2::version_3},
  {Comp_1::version_15, Comp_2::version_3},
  {Comp_1::version_16, Comp_2::version_3},
  {Comp_1::version_17, Comp_2::version_3},
  {Comp_1::version_18, Comp_2::version_4},
  {Comp_1::version_19, Comp_2::version_4},
  {Comp_1::version_20, Comp_2::version_4},
  {Comp_1::version_21, Comp_2::version_4},
  {Comp_1::version_22, Comp_2::version_4},
  {Comp_1::version_23, Comp_2::version_4},
  {Comp_1::version_24, Comp_2::version_4},
  {Comp_1::version_25, Comp_2::version_5},
  {Comp_1::version_26, Comp_2::version_5},
  {Comp_1::version_27, Comp_2::version_5},
  {Comp_1::version_28, Comp_2::version_5},
  {Comp_1::version_29, Comp_2::version_5},
  {Comp_1::version_30, Comp_2::version_5},
  {Comp_1::version_31, Comp_2::version_5},
  {Comp_1::version_32, Comp_2::version_5},
  {Comp_1::version_33, Comp_2::version_6},
  {Comp_1::version_34, Comp_2::version_6},
  {Comp_1::version_35, Comp_2::version_6},
  {Comp_1::version_36, Comp_2::version_6},
  {Comp_1::version_37, Comp_2::version_6},
  {Comp_1::version_38, Comp_2::version_6},
  {Comp_1::version_39, Comp_2::version_6},
  {Comp_1::version_40, Comp_2::version_6},
  {Comp_1::version_41, Comp_2::version_7},
  {Comp_1::version_42, Comp_2::version_7},
  {Comp_1::version_43, Comp_2::version_7},
  {Comp_1::version_44, Comp_2::version_7},
  {Comp_1::version_45, Comp_2::version_7},
  {Comp_1::version_46, Comp_2::version_7},
  {Comp_1::version_47, Comp_2::version_7},
  {Comp_1::version_48, Comp_2::version_8},
  {Comp_1::version_49, Comp_2::version_8},
  {Comp_1::version_50, Comp_2::version_9},
  {Comp_1::version_51, Comp_2::version_9},
  {Comp_1::version_52, Comp_2::version_9},
  {Comp_1::version_53, Comp_2::version_9},
  {Comp_1::version_54, Comp_2::version_9},
  {Comp_1::version_55, Comp_2::version_9},
  {Comp_1::version_56, Comp_2::version_9},
  {Comp_1::version_57, Comp_2::version_9},
  {Comp_1::version_58, Comp_2::version_9},
  {Comp_1::version_59, Comp_2::version_9},
  {Comp_1::version_60, Comp_2::version_9},
  {Comp_1::version_61, Comp_2::version_9},
  {Comp_1::version_62, Comp_2::version_9},
  {Comp_1::version_63, Comp_2::version_9},
  {Comp_1::version_64, Comp_2::version_9},
  {Comp_1::version_65, Comp_2::version_9},
  {Comp_1::version_66, Comp_2::version_9},
  {Comp_1::version_67, Comp_2::version_9},
  {Comp_1::version_68, Comp_2::version_9},
  {Comp_1::version_69, Comp_2::version_10},
  {Comp_1::version_70, Comp_2::version_10},
  {Comp_1::version_71, Comp_2::version_10},
  {Comp_1::version_72, Comp_2::version_10},
  {Comp_1::version_73, Comp_2::version_10},
  {Comp_1::version_74, Comp_2::version_10},
  {Comp_1::version_75, Comp_2::version_10},
  {Comp_1::version_76, Comp_2::version_10},
  {Comp_1::version_77, Comp_2::version_10},
  {Comp_1::version_78, Comp_2::version_10},
  {Comp_1::version_79, Comp_2::version_10},
  {Comp_1::version_80, Comp_2::version_10},
  {Comp_1::version_81, Comp_2::version_11},
  {Comp_1::version_82, Comp_2::version_11},
  {Comp_1::version_83, Comp_2::version_11},
  {Comp_1::version_84, Comp_2::version_11},
  {Comp_1::version_85, Comp_2::version_11},
  {Comp_1::version_86, Comp_2::version_11},
  {Comp_1::version_87, Comp_2::version_11},
  {Comp_1::version_88, Comp_2::version_11},
  {Comp_1::version_89, Comp_2::version_11},
  {Comp_1::version_90, Comp_2::version_12},
  {Comp_1::version_91, Comp_2::version_12},
  {Comp_1::version_92, Comp_2::version_12},
  {Comp_1::version_93, Comp_2::version_12},
  {Comp_1::version_94, Comp_2::version_12},
  {Comp_1::version_95, Comp_2::version_12},
  {Comp_1::version_96, Comp_2::version_12},
  {Comp_1::version_97, Comp_2::version_12},
  {Comp_1::version_98, Comp_2::version_12},
  {Comp_1::version_99, Comp_2::version_12},
  {Comp_1::version_100, Comp_2::version_13},
  {Comp_1::version_101, Comp_2::version_13},
  {Comp_1::version_102, Comp_2::version_13},
  {Comp_1::version_103, Comp_2::version_13},
  {Comp_1::version_104, Comp_2::version_13},
  {Comp_1::version_105, Comp_2::version_13},
  {Comp_1::version_106, Comp_2::version_13},
  {Comp_1::version_107, Comp_2::version_13},
  {Comp_1::version_108, Comp_2::version_14},
  {Comp_1::version_109, Comp_2::version_14},
  {Comp_1::version_110, Comp_2::version_14},
  {Comp_1::version_111, Comp_2::version_14},
  {Comp_1::version_112, Comp_2::version_14},
  {Comp_1::version_113, Comp_2::version_14},
  {Comp_1::version_114, Comp_2::version_14},
  {Comp_1::version_115, Comp_2::version_15},
  {Comp_1::version_116, Comp_2::version_15},
  {Comp_1::version_117, Comp_2::version_15},
  {Comp_1::version_118, Comp_2::version_15},
  {Comp_1::version_119, Comp_2::version_15},
  {Comp_1::version_120, Comp_2::version_15},
  {Comp_1::version_121, Comp_2::version_15},
  {Comp_1::version_122, Comp_2::version_15},
  {Comp_1::version_123, Comp_2::version_16},
  {Comp_1::version_124, Comp_2::version_16},
  {Comp_1::version_125, Comp_2::version_16},
  {Comp_1::version_126, Comp_2::version_16},
  {Comp_1::version_127, Comp_2::version_16},
  {Comp_1::version_128, Comp_2::version_16},
  {Comp_1::version_129, Comp_2::version_16},
  {Comp_1::version_130, Comp_2::version_16},
  {Comp_1::version_131, Comp_2::version_17},
  {Comp_1::version_132, Comp_2::version_17},
  {Comp_1::version_133, Comp_2::version_17},
  {Comp_1::version_134, Comp_2::version_17},
  {Comp_1::version_135, Comp_2::version_17},
  {Comp_1::version_136, Comp_2::version_17},
  {Comp_1::version_137, Comp_2::version_18},
  {Comp_1::version_138, Comp_2::version_18},
  {Comp_1::version_139, Comp_2::version_18},
  {Comp_1::version_140, Comp_2::version_18},
  {Comp_1::version_141, Comp_2::version_18},
  {Comp_1::version_142, Comp_2::version_19},
  {Comp_1::version_143, Comp_2::version_19},
  {Comp_1::version_144, Comp_2::version_19},
  {Comp_1::version_145, Comp_2::version_19},
  {Comp_1::version_146, Comp_2::version_20},
  {Comp_1::version_147, Comp_2::version_20},
  {Comp_1::version_148, Comp_2::version_20},
  {Comp_1::version_149, Comp_2::version_20},
  {Comp_1::version_150, Comp_2::version_20},
  {Comp_1::version_151, Comp_2::version_21},
  {Comp_1::version_152, Comp_2::version_21},
  {Comp_1::version_153, Comp_2::version_21},
  {Comp_1::version_154, Comp_2::version_21},
  {Comp_1::version_155, Comp_2::version_21},
  {Comp_1::version_156, Comp_2::version_21},
  {Comp_1::version_157, Comp_2::version_22},
  {Comp_1::version_158, Comp_2::version_22},
  {Comp_1::version_159, Comp_2::version_22},
  {Comp_1::version_160, Comp_2::version_23},
  {Comp_1::version_161, Comp_2::version_23},
  {Comp_1::version_162, Comp_2::version_23},
  {Comp_1::version_163, Comp_2::version_23},
  {Comp_1::version_164, Comp_2::version_23},
  {Comp_1::version_165, Comp_2::version_24},
  {Comp_1::version_166, Comp_2::version_24},
  {Comp_1::version_167, Comp_2::version_24},
  {Comp_1::version_168, Comp_2::version_24},
  {Comp_1::version_169, Comp_2::version_24},
  {Comp_1::version_170, Comp_2::version_25},
  {Comp_1::version_171, Comp_2::version_25},
  {Comp_1::version_172, Comp_2::version_25},
  {Comp_1::version_173, Comp_2::version_25},
  {Comp_1::version_174, Comp_2::version_25},
  {Comp_1::version_175, Comp_2::version_26},
  {Comp_1::version_176, Comp_2::version_26},
  {Comp_1::version_177, Comp_2::version_26},
  {Comp_1::version_178, Comp_2::version_26},
  {Comp_1::version_179, Comp_2::version_26},
  {Comp_1::version_180, Comp_2::version_27},
  {Comp_1::version_181, Comp_2::version_27},
  {Comp_1::version_182, Comp_2::version_27},
  {Comp_1::version_183, Comp_2::version_27},
  {Comp_1::version_184, Comp_2::version_27},
  {Comp_1::version_185, Comp_2::version_27},
  {Comp_1::version_186, Comp_2::version_27},
  {Comp_1::version_187, Comp_2::version_27},
  {Comp_1::version_188, Comp_2::version_27},
  {Comp_1::version_189, Comp_2::version_28},
  {Comp_1::version_190, Comp_2::version_28},
  {Comp_1::version_191, Comp_2::version_28},
  {Comp_1::version_192, Comp_2::version_29},
  {Comp_1::version_193, Comp_2::version_29},
  {Comp_1::version_194, Comp_2::version_29},
  {Comp_1::version_195, Comp_2::version_29},
  {Comp_1::version_196, Comp_2::version_30},
  {Comp_1::version_197, Comp_2::version_30},
  {Comp_1::version_198, Comp_2::version_30},
  {Comp_1::version_199, Comp_2::version_31},
  {Comp_1::version_200, Comp_2::version_31},
  {Comp_1::version_201, Comp_2::version_31},
  {Comp_1::version_202, Comp_2::version_32},
  {Comp_1::version_203, Comp_2::version_32},
  {Comp_1::version_204, Comp_2::version_32},
  {Comp_1::version_205, Comp_2::version_33},
  {Comp_1::version_206, Comp_2::version_33},
  {Comp_1::version_207, Comp_2::version_33},
  {Comp_1::version_208, Comp_2::version_33},
  {Comp_1::version_209, Comp_2::version_34},
  {Comp_1::version_210, Comp_2::version_34},
  {Comp_1::version_211, Comp_2::version_34},
  {Comp_1::version_212, Comp_2::version_35},
  {Comp_1::version_213, Comp_2::version_35},
  {Comp_1::version_214, Comp_2::version_35},
  {Comp_1::version_215, Comp_2::version_36},
  {Comp_1::version_216, Comp_2::version_36},
  {Comp_1::version_217, Comp_2::version_36},
  {Comp_1::version_218, Comp_2::version_37},
  {Comp_1::version_219, Comp_2::version_37},
  {Comp_1::version_220, Comp_2::version_37},
  {Comp_1::version_221, Comp_2::version_38},
  {Comp_1::version_222, Comp_2::version_38},
  {Comp_1::version_223, Comp_2::version_38},
  {Comp_1::version_224, Comp_2::version_39},
  {Comp_1::version_225, Comp_2::version_39},
  {Comp_1::version_226, Comp_2::version_39},
  {Comp_1::version_227, Comp_2::version_40},
  {Comp_1::version_228, Comp_2::version_40},
  {Comp_1::version_229, Comp_2::version_40},
  {Comp_1::version_230, Comp_2::version_41},
  {Comp_1::version_231, Comp_2::version_41},
  {Comp_1::version_232, Comp_2::version_41},
  {Comp_1::version_233, Comp_2::version_41},
  {Comp_1::version_234, Comp_2::version_42},
  {Comp_1::version_235, Comp_2::version_42},
  {Comp_1::version_236, Comp_2::version_43},
  {Comp_1::version_237, Comp_2::version_43},
  {Comp_1::version_238, Comp_2::version_43},
  {Comp_1::version_239, Comp_2::version_43},
  {Comp_1::version_240, Comp_2::version_44},
  {Comp_1::version_241, Comp_2::version_44},
  {Comp_1::version_242, Comp_2::version_44},
  {Comp_1::version_243, Comp_2::version_45},
  {Comp_1::version_244, Comp_2::version_45},
  {Comp_1::version_245, Comp_2::version_45},
  {Comp_1::version_246, Comp_2::version_45},
  {Comp_1::version_247, Comp_2::version_46},
  {Comp_1::version_248, Comp_2::version_46},
  {Comp_1::version_249, Comp_2::version_46},
  {Comp_1::version_250, Comp_2::version_47},
  {Comp_1::version_251, Comp_2::version_47},
  {Comp_1::version_252, Comp_2::version_47},
  {Comp_1::version_253, Comp_2::version_48},
  {Comp_1::version_254, Comp_2::version_48},
  {Comp_1::version_255, Comp_2::version_48},
  {Comp_1::version_256, Comp_2::version_48},
};

[[nodiscard]] auto to_comp_2_version_with_map(Comp_1 ver) noexcept -> Comp_2 {
  static_assert(Comp_1::latest == Comp_1::version_256, "Unexpected component 1 latest verison. Check map_lookup contents");
  static_assert(Comp_2::latest == Comp_2::version_48, "Unexpected component 2 latest verison. Check map_lookup contents");

  const auto find = map_lookup.find(ver);
  return map_lookup.end() != find ? find->second : Comp_2::latest;
}

[[nodiscard]] auto to_comp_2_version_with_map_and_shortcut(Comp_1 ver) noexcept -> Comp_2 {
  if (Comp_1::latest == ver) {
    return Comp_2::latest;
  }

  const auto find = map_lookup.find(ver);
  return map_lookup.end() != find ? find->second : Comp_2::latest;
}

[[nodiscard]] auto to_comp_2_version_with_switch_case(Comp_1 ver) noexcept -> Comp_2 {
#pragma warning( push )
#pragma warning( disable: 4061) // enumerator 'Comp_1::{count, latest}' in switch of enum 'Comp_1' is not explicitly handled by a case label
  switch (ver) {
  case Comp_1::version_1: return Comp_2::version_1;
  case Comp_1::version_2:
  case Comp_1::version_3:
  case Comp_1::version_4:
  case Comp_1::version_5:
  case Comp_1::version_6:
  case Comp_1::version_7:
  case Comp_1::version_8:
  case Comp_1::version_9:
  case Comp_1::version_10:
  case Comp_1::version_11: return Comp_2::version_2;
  case Comp_1::version_12:
  case Comp_1::version_13:
  case Comp_1::version_14:
  case Comp_1::version_15:
  case Comp_1::version_16:
  case Comp_1::version_17: return Comp_2::version_3;
  case Comp_1::version_18:
  case Comp_1::version_19:
  case Comp_1::version_20:
  case Comp_1::version_21:
  case Comp_1::version_22:
  case Comp_1::version_23:
  case Comp_1::version_24: return Comp_2::version_4;
  case Comp_1::version_25:
  case Comp_1::version_26:
  case Comp_1::version_27:
  case Comp_1::version_28:
  case Comp_1::version_29:
  case Comp_1::version_30:
  case Comp_1::version_31:
  case Comp_1::version_32: return Comp_2::version_5;
  case Comp_1::version_33:
  case Comp_1::version_34:
  case Comp_1::version_35:
  case Comp_1::version_36:
  case Comp_1::version_37:
  case Comp_1::version_38:
  case Comp_1::version_39:
  case Comp_1::version_40: return Comp_2::version_6;
  case Comp_1::version_41:
  case Comp_1::version_42:
  case Comp_1::version_43:
  case Comp_1::version_44:
  case Comp_1::version_45:
  case Comp_1::version_46:
  case Comp_1::version_47: return Comp_2::version_7;
  case Comp_1::version_48:
  case Comp_1::version_49: return Comp_2::version_8;
  case Comp_1::version_50:
  case Comp_1::version_51:
  case Comp_1::version_52:
  case Comp_1::version_53:
  case Comp_1::version_54:
  case Comp_1::version_55:
  case Comp_1::version_56:
  case Comp_1::version_57:
  case Comp_1::version_58:
  case Comp_1::version_59:
  case Comp_1::version_60:
  case Comp_1::version_61:
  case Comp_1::version_62:
  case Comp_1::version_63:
  case Comp_1::version_64:
  case Comp_1::version_65:
  case Comp_1::version_66:
  case Comp_1::version_67:
  case Comp_1::version_68: return Comp_2::version_9;
  case Comp_1::version_69:
  case Comp_1::version_70:
  case Comp_1::version_71:
  case Comp_1::version_72:
  case Comp_1::version_73:
  case Comp_1::version_74:
  case Comp_1::version_75:
  case Comp_1::version_76:
  case Comp_1::version_77:
  case Comp_1::version_78:
  case Comp_1::version_79:
  case Comp_1::version_80: return Comp_2::version_10;
  case Comp_1::version_81:
  case Comp_1::version_82:
  case Comp_1::version_83:
  case Comp_1::version_84:
  case Comp_1::version_85:
  case Comp_1::version_86:
  case Comp_1::version_87:
  case Comp_1::version_88:
  case Comp_1::version_89: return Comp_2::version_11;
  case Comp_1::version_90:
  case Comp_1::version_91:
  case Comp_1::version_92:
  case Comp_1::version_93:
  case Comp_1::version_94:
  case Comp_1::version_95:
  case Comp_1::version_96:
  case Comp_1::version_97:
  case Comp_1::version_98:
  case Comp_1::version_99: return Comp_2::version_12;
  case Comp_1::version_100:
  case Comp_1::version_101:
  case Comp_1::version_102:
  case Comp_1::version_103:
  case Comp_1::version_104:
  case Comp_1::version_105:
  case Comp_1::version_106:
  case Comp_1::version_107: return Comp_2::version_13;
  case Comp_1::version_108:
  case Comp_1::version_109:
  case Comp_1::version_110:
  case Comp_1::version_111:
  case Comp_1::version_112:
  case Comp_1::version_113:
  case Comp_1::version_114: return Comp_2::version_14;
  case Comp_1::version_115:
  case Comp_1::version_116:
  case Comp_1::version_117:
  case Comp_1::version_118:
  case Comp_1::version_119:
  case Comp_1::version_120:
  case Comp_1::version_121:
  case Comp_1::version_122: return Comp_2::version_15;
  case Comp_1::version_123:
  case Comp_1::version_124:
  case Comp_1::version_125:
  case Comp_1::version_126:
  case Comp_1::version_127:
  case Comp_1::version_128:
  case Comp_1::version_129:
  case Comp_1::version_130: return Comp_2::version_16;
  case Comp_1::version_131:
  case Comp_1::version_132:
  case Comp_1::version_133:
  case Comp_1::version_134:
  case Comp_1::version_135:
  case Comp_1::version_136: return Comp_2::version_17;
  case Comp_1::version_137:
  case Comp_1::version_138:
  case Comp_1::version_139:
  case Comp_1::version_140:
  case Comp_1::version_141: return Comp_2::version_18;
  case Comp_1::version_142:
  case Comp_1::version_143:
  case Comp_1::version_144:
  case Comp_1::version_145: return Comp_2::version_19;
  case Comp_1::version_146:
  case Comp_1::version_147:
  case Comp_1::version_148:
  case Comp_1::version_149:
  case Comp_1::version_150: return Comp_2::version_20;
  case Comp_1::version_151:
  case Comp_1::version_152:
  case Comp_1::version_153:
  case Comp_1::version_154:
  case Comp_1::version_155:
  case Comp_1::version_156: return Comp_2::version_21;
  case Comp_1::version_157:
  case Comp_1::version_158:
  case Comp_1::version_159: return Comp_2::version_22;
  case Comp_1::version_160:
  case Comp_1::version_161:
  case Comp_1::version_162:
  case Comp_1::version_163:
  case Comp_1::version_164: return Comp_2::version_23;
  case Comp_1::version_165:
  case Comp_1::version_166:
  case Comp_1::version_167:
  case Comp_1::version_168:
  case Comp_1::version_169: return Comp_2::version_24;
  case Comp_1::version_170:
  case Comp_1::version_171:
  case Comp_1::version_172:
  case Comp_1::version_173:
  case Comp_1::version_174: return Comp_2::version_25;
  case Comp_1::version_175:
  case Comp_1::version_176:
  case Comp_1::version_177:
  case Comp_1::version_178:
  case Comp_1::version_179: return Comp_2::version_26;
  case Comp_1::version_180:
  case Comp_1::version_181:
  case Comp_1::version_182:
  case Comp_1::version_183:
  case Comp_1::version_184:
  case Comp_1::version_185:
  case Comp_1::version_186:
  case Comp_1::version_187:
  case Comp_1::version_188: return Comp_2::version_27;
  case Comp_1::version_189:
  case Comp_1::version_190:
  case Comp_1::version_191: return Comp_2::version_28;
  case Comp_1::version_192:
  case Comp_1::version_193:
  case Comp_1::version_194:
  case Comp_1::version_195: return Comp_2::version_29;
  case Comp_1::version_196:
  case Comp_1::version_197:
  case Comp_1::version_198: return Comp_2::version_30;
  case Comp_1::version_199:
  case Comp_1::version_200:
  case Comp_1::version_201: return Comp_2::version_31;
  case Comp_1::version_202:
  case Comp_1::version_203:
  case Comp_1::version_204: return Comp_2::version_32;
  case Comp_1::version_205:
  case Comp_1::version_206:
  case Comp_1::version_207:
  case Comp_1::version_208: return Comp_2::version_33;
  case Comp_1::version_209:
  case Comp_1::version_210:
  case Comp_1::version_211: return Comp_2::version_34;
  case Comp_1::version_212:
  case Comp_1::version_213:
  case Comp_1::version_214: return Comp_2::version_35;
  case Comp_1::version_215:
  case Comp_1::version_216:
  case Comp_1::version_217: return Comp_2::version_36;
  case Comp_1::version_218:
  case Comp_1::version_219:
  case Comp_1::version_220: return Comp_2::version_37;
  case Comp_1::version_221:
  case Comp_1::version_222:
  case Comp_1::version_223: return Comp_2::version_38;
  case Comp_1::version_224:
  case Comp_1::version_225:
  case Comp_1::version_226: return Comp_2::version_39;
  case Comp_1::version_227:
  case Comp_1::version_228:
  case Comp_1::version_229: return Comp_2::version_40;
  case Comp_1::version_230:
  case Comp_1::version_231:
  case Comp_1::version_232:
  case Comp_1::version_233: return Comp_2::version_41;
  case Comp_1::version_234:
  case Comp_1::version_235: return Comp_2::version_42;
  case Comp_1::version_236:
  case Comp_1::version_237:
  case Comp_1::version_238:
  case Comp_1::version_239: return Comp_2::version_43;
  case Comp_1::version_240:
  case Comp_1::version_241:
  case Comp_1::version_242: return Comp_2::version_44;
  case Comp_1::version_243:
  case Comp_1::version_244:
  case Comp_1::version_245:
  case Comp_1::version_246: return Comp_2::version_45;
  case Comp_1::version_247:
  case Comp_1::version_248:
  case Comp_1::version_249: return Comp_2::version_46;
  case Comp_1::version_250:
  case Comp_1::version_251:
  case Comp_1::version_252: return Comp_2::version_47;
  case Comp_1::version_253:
  case Comp_1::version_254:
  case Comp_1::version_255:
  case Comp_1::version_256:
  default: return Comp_2::version_48;
  }
#pragma warning( pop )

  static_assert(Comp_1::latest == Comp_1::version_256, "Unexpected component 1 latest verison. Check switch-case above");
  static_assert(Comp_2::latest == Comp_2::version_48, "Unexpected component 2 latest verison. Check switch-case above");
}

[[nodiscard]] auto to_comp_2_version_with_switch_case_annotated(Comp_1 ver) noexcept -> Comp_2 {
#pragma warning( push )
#pragma warning( disable: 4061) // enumerator 'Comp_1::{count, latest}' in switch of enum 'Comp_1' is not explicitly handled by a case label
  switch (ver) {
  case Comp_1::version_1: return Comp_2::version_1;
  case Comp_1::version_2:
  case Comp_1::version_3:
  case Comp_1::version_4:
  case Comp_1::version_5:
  case Comp_1::version_6:
  case Comp_1::version_7:
  case Comp_1::version_8:
  case Comp_1::version_9:
  case Comp_1::version_10:
  case Comp_1::version_11: return Comp_2::version_2;
  case Comp_1::version_12:
  case Comp_1::version_13:
  case Comp_1::version_14:
  case Comp_1::version_15:
  case Comp_1::version_16:
  case Comp_1::version_17: return Comp_2::version_3;
  case Comp_1::version_18:
  case Comp_1::version_19:
  case Comp_1::version_20:
  case Comp_1::version_21:
  case Comp_1::version_22:
  case Comp_1::version_23:
  case Comp_1::version_24: return Comp_2::version_4;
  case Comp_1::version_25:
  case Comp_1::version_26:
  case Comp_1::version_27:
  case Comp_1::version_28:
  case Comp_1::version_29:
  case Comp_1::version_30:
  case Comp_1::version_31:
  case Comp_1::version_32: return Comp_2::version_5;
  case Comp_1::version_33:
  case Comp_1::version_34:
  case Comp_1::version_35:
  case Comp_1::version_36:
  case Comp_1::version_37:
  case Comp_1::version_38:
  case Comp_1::version_39:
  case Comp_1::version_40: return Comp_2::version_6;
  case Comp_1::version_41:
  case Comp_1::version_42:
  case Comp_1::version_43:
  case Comp_1::version_44:
  case Comp_1::version_45:
  case Comp_1::version_46:
  case Comp_1::version_47: return Comp_2::version_7;
  case Comp_1::version_48:
  case Comp_1::version_49: return Comp_2::version_8;
  case Comp_1::version_50:
  case Comp_1::version_51:
  case Comp_1::version_52:
  case Comp_1::version_53:
  case Comp_1::version_54:
  case Comp_1::version_55:
  case Comp_1::version_56:
  case Comp_1::version_57:
  case Comp_1::version_58:
  case Comp_1::version_59:
  case Comp_1::version_60:
  case Comp_1::version_61:
  case Comp_1::version_62:
  case Comp_1::version_63:
  case Comp_1::version_64:
  case Comp_1::version_65:
  case Comp_1::version_66:
  case Comp_1::version_67:
  case Comp_1::version_68: return Comp_2::version_9;
  case Comp_1::version_69:
  case Comp_1::version_70:
  case Comp_1::version_71:
  case Comp_1::version_72:
  case Comp_1::version_73:
  case Comp_1::version_74:
  case Comp_1::version_75:
  case Comp_1::version_76:
  case Comp_1::version_77:
  case Comp_1::version_78:
  case Comp_1::version_79:
  case Comp_1::version_80: return Comp_2::version_10;
  case Comp_1::version_81:
  case Comp_1::version_82:
  case Comp_1::version_83:
  case Comp_1::version_84:
  case Comp_1::version_85:
  case Comp_1::version_86:
  case Comp_1::version_87:
  case Comp_1::version_88:
  case Comp_1::version_89: return Comp_2::version_11;
  case Comp_1::version_90:
  case Comp_1::version_91:
  case Comp_1::version_92:
  case Comp_1::version_93:
  case Comp_1::version_94:
  case Comp_1::version_95:
  case Comp_1::version_96:
  case Comp_1::version_97:
  case Comp_1::version_98:
  case Comp_1::version_99: return Comp_2::version_12;
  case Comp_1::version_100:
  case Comp_1::version_101:
  case Comp_1::version_102:
  case Comp_1::version_103:
  case Comp_1::version_104:
  case Comp_1::version_105:
  case Comp_1::version_106:
  case Comp_1::version_107: return Comp_2::version_13;
  case Comp_1::version_108:
  case Comp_1::version_109:
  case Comp_1::version_110:
  case Comp_1::version_111:
  case Comp_1::version_112:
  case Comp_1::version_113:
  case Comp_1::version_114: return Comp_2::version_14;
  case Comp_1::version_115:
  case Comp_1::version_116:
  case Comp_1::version_117:
  case Comp_1::version_118:
  case Comp_1::version_119:
  case Comp_1::version_120:
  case Comp_1::version_121:
  case Comp_1::version_122: return Comp_2::version_15;
  case Comp_1::version_123:
  case Comp_1::version_124:
  case Comp_1::version_125:
  case Comp_1::version_126:
  case Comp_1::version_127:
  case Comp_1::version_128:
  case Comp_1::version_129:
  case Comp_1::version_130: return Comp_2::version_16;
  case Comp_1::version_131:
  case Comp_1::version_132:
  case Comp_1::version_133:
  case Comp_1::version_134:
  case Comp_1::version_135:
  case Comp_1::version_136: return Comp_2::version_17;
  case Comp_1::version_137:
  case Comp_1::version_138:
  case Comp_1::version_139:
  case Comp_1::version_140:
  case Comp_1::version_141: return Comp_2::version_18;
  case Comp_1::version_142:
  case Comp_1::version_143:
  case Comp_1::version_144:
  case Comp_1::version_145: return Comp_2::version_19;
  case Comp_1::version_146:
  case Comp_1::version_147:
  case Comp_1::version_148:
  case Comp_1::version_149:
  case Comp_1::version_150: return Comp_2::version_20;
  case Comp_1::version_151:
  case Comp_1::version_152:
  case Comp_1::version_153:
  case Comp_1::version_154:
  case Comp_1::version_155:
  case Comp_1::version_156: return Comp_2::version_21;
  case Comp_1::version_157:
  case Comp_1::version_158:
  case Comp_1::version_159: return Comp_2::version_22;
  case Comp_1::version_160:
  case Comp_1::version_161:
  case Comp_1::version_162:
  case Comp_1::version_163:
  case Comp_1::version_164: return Comp_2::version_23;
  case Comp_1::version_165:
  case Comp_1::version_166:
  case Comp_1::version_167:
  case Comp_1::version_168:
  case Comp_1::version_169: return Comp_2::version_24;
  case Comp_1::version_170:
  case Comp_1::version_171:
  case Comp_1::version_172:
  case Comp_1::version_173:
  case Comp_1::version_174: return Comp_2::version_25;
  case Comp_1::version_175:
  case Comp_1::version_176:
  case Comp_1::version_177:
  case Comp_1::version_178:
  case Comp_1::version_179: return Comp_2::version_26;
  case Comp_1::version_180:
  case Comp_1::version_181:
  case Comp_1::version_182:
  case Comp_1::version_183:
  case Comp_1::version_184:
  case Comp_1::version_185:
  case Comp_1::version_186:
  case Comp_1::version_187:
  case Comp_1::version_188: return Comp_2::version_27;
  case Comp_1::version_189:
  case Comp_1::version_190:
  case Comp_1::version_191: return Comp_2::version_28;
  case Comp_1::version_192:
  case Comp_1::version_193:
  case Comp_1::version_194:
  case Comp_1::version_195: return Comp_2::version_29;
  case Comp_1::version_196:
  case Comp_1::version_197:
  case Comp_1::version_198: return Comp_2::version_30;
  case Comp_1::version_199:
  case Comp_1::version_200:
  case Comp_1::version_201: return Comp_2::version_31;
  case Comp_1::version_202:
  case Comp_1::version_203:
  case Comp_1::version_204: return Comp_2::version_32;
  case Comp_1::version_205:
  case Comp_1::version_206:
  case Comp_1::version_207:
  case Comp_1::version_208: return Comp_2::version_33;
  case Comp_1::version_209:
  case Comp_1::version_210:
  case Comp_1::version_211: return Comp_2::version_34;
  case Comp_1::version_212:
  case Comp_1::version_213:
  case Comp_1::version_214: return Comp_2::version_35;
  case Comp_1::version_215:
  case Comp_1::version_216:
  case Comp_1::version_217: return Comp_2::version_36;
  case Comp_1::version_218:
  case Comp_1::version_219:
  case Comp_1::version_220: return Comp_2::version_37;
  case Comp_1::version_221:
  case Comp_1::version_222:
  case Comp_1::version_223: return Comp_2::version_38;
  case Comp_1::version_224:
  case Comp_1::version_225:
  case Comp_1::version_226: return Comp_2::version_39;
  case Comp_1::version_227:
  case Comp_1::version_228:
  case Comp_1::version_229: return Comp_2::version_40;
  case Comp_1::version_230:
  case Comp_1::version_231:
  case Comp_1::version_232:
  case Comp_1::version_233: return Comp_2::version_41;
  case Comp_1::version_234:
  case Comp_1::version_235: return Comp_2::version_42;
  case Comp_1::version_236:
  case Comp_1::version_237:
  case Comp_1::version_238:
  case Comp_1::version_239: return Comp_2::version_43;
  case Comp_1::version_240:
  case Comp_1::version_241:
  case Comp_1::version_242: return Comp_2::version_44;
  case Comp_1::version_243:
  case Comp_1::version_244:
  case Comp_1::version_245:
  case Comp_1::version_246: return Comp_2::version_45;
  case Comp_1::version_247:
  case Comp_1::version_248:
  case Comp_1::version_249: return Comp_2::version_46;
  case Comp_1::version_250:
  case Comp_1::version_251:
  case Comp_1::version_252: return Comp_2::version_47;
  case Comp_1::version_253:
  case Comp_1::version_254:
  case Comp_1::version_255:
  [[likely]] case Comp_1::version_256:
  default: return Comp_2::version_48;
  }
#pragma warning( pop )

  static_assert(Comp_1::latest == Comp_1::version_256, "Unexpected component 1 latest verison. Check switch-case above");
  static_assert(Comp_2::latest == Comp_2::version_48, "Unexpected component 2 latest verison. Check switch-case above");
}
