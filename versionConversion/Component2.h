#pragma once

#include <iostream>

enum class Comp_2 {
  version_1, version_2, version_3, version_4, version_5, version_6, version_7, version_8,
  version_9, version_10, version_11, version_12, version_13, version_14, version_15, version_16,
  version_17, version_18, version_19, version_20, version_21, version_22, version_23, version_24,
  version_25, version_26, version_27, version_28, version_29, version_30, version_31, version_32,
  version_33, version_34, version_35, version_36, version_37, version_38, version_39, version_40,
  version_41, version_42, version_43, version_44, version_45, version_46, version_47, version_48,

  count
};


inline auto operator<<(std::ostream& os, Comp_2 ver) -> std::ostream& {
  using namespace std::string_view_literals;

  constexpr auto strings = std::array{
  "comp_2_version_1"sv, "comp_2_version_2"sv, "comp_2_version_3"sv, "comp_2_version_4"sv, "comp_2_version_5"sv, "comp_2_version_6"sv, "comp_2_version_7"sv, "comp_2_version_8"sv,
  "comp_2_version_9"sv, "comp_2_version_10"sv, "comp_2_version_11"sv, "comp_2_version_12"sv, "comp_2_version_13"sv, "comp_2_version_14"sv, "comp_2_version_15"sv, "comp_2_version_16"sv,
  "comp_2_version_17"sv, "comp_2_version_18"sv, "comp_2_version_19"sv, "comp_2_version_20"sv, "comp_2_version_21"sv, "comp_2_version_22"sv, "comp_2_version_23"sv, "comp_2_version_24"sv,
  "comp_2_version_25"sv, "comp_2_version_26"sv, "comp_2_version_27"sv, "comp_2_version_28"sv, "comp_2_version_29"sv, "comp_2_version_30"sv, "comp_2_version_31"sv, "comp_2_version_32"sv,
  "comp_2_version_33"sv, "comp_2_version_34"sv, "comp_2_version_35"sv, "comp_2_version_36"sv, "comp_2_version_37"sv, "comp_2_version_38"sv, "comp_2_version_39"sv, "comp_2_version_40"sv,
  "comp_2_version_41"sv, "comp_2_version_42"sv, "comp_2_version_43"sv, "comp_2_version_44"sv, "comp_2_version_45"sv, "comp_2_version_46"sv, "comp_2_version_47"sv, "comp_2_version_48"sv
  };

  static_assert(strings.size() == static_cast<size_t>(Comp_2::count), "strings lookup is invalid");

  os << strings[static_cast<uint32_t>(ver)];

  return os;
}
