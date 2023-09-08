#pragma once

#include <iostream>
#include <string_view>
#include <array>

enum class Comp_1 : std::uint32_t {
  version_1, version_2, version_3, version_4, version_5, version_6, version_7, version_8,
  version_9, version_10, version_11, version_12, version_13, version_14, version_15, version_16,
  version_17, version_18, version_19, version_20, version_21, version_22, version_23, version_24,
  version_25, version_26, version_27, version_28, version_29, version_30, version_31, version_32,
  version_33, version_34, version_35, version_36, version_37, version_38, version_39, version_40,
  version_41, version_42, version_43, version_44, version_45, version_46, version_47, version_48,
  version_49, version_50, version_51, version_52, version_53, version_54, version_55, version_56,
  version_57, version_58, version_59, version_60, version_61, version_62, version_63, version_64,
  version_65, version_66, version_67, version_68, version_69, version_70, version_71, version_72,
  version_73, version_74, version_75, version_76, version_77, version_78, version_79, version_80,
  version_81, version_82, version_83, version_84, version_85, version_86, version_87, version_88,
  version_89, version_90, version_91, version_92, version_93, version_94, version_95, version_96,
  version_97, version_98, version_99, version_100, version_101, version_102, version_103, version_104,
  version_105, version_106, version_107, version_108, version_109, version_110, version_111, version_112,
  version_113, version_114, version_115, version_116, version_117, version_118, version_119, version_120,
  version_121, version_122, version_123, version_124, version_125, version_126, version_127, version_128,
  version_129, version_130, version_131, version_132, version_133, version_134, version_135, version_136,
  version_137, version_138, version_139, version_140, version_141, version_142, version_143, version_144,
  version_145, version_146, version_147, version_148, version_149, version_150, version_151, version_152,
  version_153, version_154, version_155, version_156, version_157, version_158, version_159, version_160,
  version_161, version_162, version_163, version_164, version_165, version_166, version_167, version_168,
  version_169, version_170, version_171, version_172, version_173, version_174, version_175, version_176,
  version_177, version_178, version_179, version_180, version_181, version_182, version_183, version_184,
  version_185, version_186, version_187, version_188, version_189, version_190, version_191, version_192,
  version_193, version_194, version_195, version_196, version_197, version_198, version_199, version_200,
  version_201, version_202, version_203, version_204, version_205, version_206, version_207, version_208,
  version_209, version_210, version_211, version_212, version_213, version_214, version_215, version_216,
  version_217, version_218, version_219, version_220, version_221, version_222, version_223, version_224,
  version_225, version_226, version_227, version_228, version_229, version_230, version_231, version_232,
  version_233, version_234, version_235, version_236, version_237, version_238, version_239, version_240,
  version_241, version_242, version_243, version_244, version_245, version_246, version_247, version_248,
  version_249, version_250, version_251, version_252, version_253, version_254, version_255, version_256,

  count,
  latest = count - 1
};

inline auto operator<<(std::ostream& os, Comp_1 ver) -> std::ostream& {
  using namespace std::string_view_literals;

  constexpr auto strings = std::array{
  "comp_1_version_1"sv, "comp_1_version_2"sv, "comp_1_version_3"sv, "comp_1_version_4"sv, "comp_1_version_5"sv, "comp_1_version_6"sv, "comp_1_version_7"sv, "comp_1_version_8"sv,
  "comp_1_version_9"sv, "comp_1_version_10"sv, "comp_1_version_11"sv, "comp_1_version_12"sv, "comp_1_version_13"sv, "comp_1_version_14"sv, "comp_1_version_15"sv, "comp_1_version_16"sv,
  "comp_1_version_17"sv, "comp_1_version_18"sv, "comp_1_version_19"sv, "comp_1_version_20"sv, "comp_1_version_21"sv, "comp_1_version_22"sv, "comp_1_version_23"sv, "comp_1_version_24"sv,
  "comp_1_version_25"sv, "comp_1_version_26"sv, "comp_1_version_27"sv, "comp_1_version_28"sv, "comp_1_version_29"sv, "comp_1_version_30"sv, "comp_1_version_31"sv, "comp_1_version_32"sv,
  "comp_1_version_33"sv, "comp_1_version_34"sv, "comp_1_version_35"sv, "comp_1_version_36"sv, "comp_1_version_37"sv, "comp_1_version_38"sv, "comp_1_version_39"sv, "comp_1_version_40"sv,
  "comp_1_version_41"sv, "comp_1_version_42"sv, "comp_1_version_43"sv, "comp_1_version_44"sv, "comp_1_version_45"sv, "comp_1_version_46"sv, "comp_1_version_47"sv, "comp_1_version_48"sv,
  "comp_1_version_49"sv, "comp_1_version_50"sv, "comp_1_version_51"sv, "comp_1_version_52"sv, "comp_1_version_53"sv, "comp_1_version_54"sv, "comp_1_version_55"sv, "comp_1_version_56"sv,
  "comp_1_version_57"sv, "comp_1_version_58"sv, "comp_1_version_59"sv, "comp_1_version_60"sv, "comp_1_version_61"sv, "comp_1_version_62"sv, "comp_1_version_63"sv, "comp_1_version_64"sv,
  "comp_1_version_65"sv, "comp_1_version_66"sv, "comp_1_version_67"sv, "comp_1_version_68"sv, "comp_1_version_69"sv, "comp_1_version_70"sv, "comp_1_version_71"sv, "comp_1_version_72"sv,
  "comp_1_version_73"sv, "comp_1_version_74"sv, "comp_1_version_75"sv, "comp_1_version_76"sv, "comp_1_version_77"sv, "comp_1_version_78"sv, "comp_1_version_79"sv, "comp_1_version_80"sv,
  "comp_1_version_81"sv, "comp_1_version_82"sv, "comp_1_version_83"sv, "comp_1_version_84"sv, "comp_1_version_85"sv, "comp_1_version_86"sv, "comp_1_version_87"sv, "comp_1_version_88"sv,
  "comp_1_version_89"sv, "comp_1_version_90"sv, "comp_1_version_91"sv, "comp_1_version_92"sv, "comp_1_version_93"sv, "comp_1_version_94"sv, "comp_1_version_95"sv, "comp_1_version_96"sv,
  "comp_1_version_97"sv, "comp_1_version_98"sv, "comp_1_version_99"sv, "comp_1_version_100"sv, "comp_1_version_101"sv, "comp_1_version_102"sv, "comp_1_version_103"sv, "comp_1_version_104"sv,
  "comp_1_version_105"sv, "comp_1_version_106"sv, "comp_1_version_107"sv, "comp_1_version_108"sv, "comp_1_version_109"sv, "comp_1_version_110"sv, "comp_1_version_111"sv, "comp_1_version_112"sv,
  "comp_1_version_113"sv, "comp_1_version_114"sv, "comp_1_version_115"sv, "comp_1_version_116"sv, "comp_1_version_117"sv, "comp_1_version_118"sv, "comp_1_version_119"sv, "comp_1_version_120"sv,
  "comp_1_version_121"sv, "comp_1_version_122"sv, "comp_1_version_123"sv, "comp_1_version_124"sv, "comp_1_version_125"sv, "comp_1_version_126"sv, "comp_1_version_127"sv, "comp_1_version_128"sv,
  "comp_1_version_129"sv, "comp_1_version_130"sv, "comp_1_version_131"sv, "comp_1_version_132"sv, "comp_1_version_133"sv, "comp_1_version_134"sv, "comp_1_version_135"sv, "comp_1_version_136"sv,
  "comp_1_version_137"sv, "comp_1_version_138"sv, "comp_1_version_139"sv, "comp_1_version_140"sv, "comp_1_version_141"sv, "comp_1_version_142"sv, "comp_1_version_143"sv, "comp_1_version_144"sv,
  "comp_1_version_145"sv, "comp_1_version_146"sv, "comp_1_version_147"sv, "comp_1_version_148"sv, "comp_1_version_149"sv, "comp_1_version_150"sv, "comp_1_version_151"sv, "comp_1_version_152"sv,
  "comp_1_version_153"sv, "comp_1_version_154"sv, "comp_1_version_155"sv, "comp_1_version_156"sv, "comp_1_version_157"sv, "comp_1_version_158"sv, "comp_1_version_159"sv, "comp_1_version_160"sv,
  "comp_1_version_161"sv, "comp_1_version_162"sv, "comp_1_version_163"sv, "comp_1_version_164"sv, "comp_1_version_165"sv, "comp_1_version_166"sv, "comp_1_version_167"sv, "comp_1_version_168"sv,
  "comp_1_version_169"sv, "comp_1_version_170"sv, "comp_1_version_171"sv, "comp_1_version_172"sv, "comp_1_version_173"sv, "comp_1_version_174"sv, "comp_1_version_175"sv, "comp_1_version_176"sv,
  "comp_1_version_177"sv, "comp_1_version_178"sv, "comp_1_version_179"sv, "comp_1_version_180"sv, "comp_1_version_181"sv, "comp_1_version_182"sv, "comp_1_version_183"sv, "comp_1_version_184"sv,
  "comp_1_version_185"sv, "comp_1_version_186"sv, "comp_1_version_187"sv, "comp_1_version_188"sv, "comp_1_version_189"sv, "comp_1_version_190"sv, "comp_1_version_191"sv, "comp_1_version_192"sv,
  "comp_1_version_193"sv, "comp_1_version_194"sv, "comp_1_version_195"sv, "comp_1_version_196"sv, "comp_1_version_197"sv, "comp_1_version_198"sv, "comp_1_version_199"sv, "comp_1_version_200"sv,
  "comp_1_version_201"sv, "comp_1_version_202"sv, "comp_1_version_203"sv, "comp_1_version_204"sv, "comp_1_version_205"sv, "comp_1_version_206"sv, "comp_1_version_207"sv, "comp_1_version_208"sv,
  "comp_1_version_209"sv, "comp_1_version_210"sv, "comp_1_version_211"sv, "comp_1_version_212"sv, "comp_1_version_213"sv, "comp_1_version_214"sv, "comp_1_version_215"sv, "comp_1_version_216"sv,
  "comp_1_version_217"sv, "comp_1_version_218"sv, "comp_1_version_219"sv, "comp_1_version_220"sv, "comp_1_version_221"sv, "comp_1_version_222"sv, "comp_1_version_223"sv, "comp_1_version_224"sv,
  "comp_1_version_225"sv, "comp_1_version_226"sv, "comp_1_version_227"sv, "comp_1_version_228"sv, "comp_1_version_229"sv, "comp_1_version_230"sv, "comp_1_version_231"sv, "comp_1_version_232"sv,
  "comp_1_version_233"sv, "comp_1_version_234"sv, "comp_1_version_235"sv, "comp_1_version_236"sv, "comp_1_version_237"sv, "comp_1_version_238"sv, "comp_1_version_239"sv, "comp_1_version_240"sv,
  "comp_1_version_241"sv, "comp_1_version_242"sv, "comp_1_version_243"sv, "comp_1_version_244"sv, "comp_1_version_245"sv, "comp_1_version_246"sv, "comp_1_version_247"sv, "comp_1_version_248"sv,
  "comp_1_version_249"sv, "comp_1_version_250"sv, "comp_1_version_251"sv, "comp_1_version_252"sv, "comp_1_version_253"sv, "comp_1_version_254"sv, "comp_1_version_255"sv, "comp_1_version_256"sv
  };

  static_assert(strings.size() == static_cast<size_t>(Comp_1::count), "strings lookup is invalid");

  os << strings[static_cast<uint32_t>(ver)];

  return os;
}
