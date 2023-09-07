#pragma once

#include <iostream>

enum class Comp_2 {
  version_0,
  version_1,
  version_2,
  version_3,
  version_4,

  count
};


inline auto operator<<(std::ostream& os, Comp_2 ver) -> std::ostream& {
  switch (ver) {
  case Comp_2::version_0: os << "comp_2_version_0"; break;
  case Comp_2::version_1: os << "comp_2_version_1"; break;
  case Comp_2::version_2: os << "comp_2_version_2"; break;
  case Comp_2::version_3: os << "comp_2_version_3"; break;
  case Comp_2::version_4: os << "comp_2_version_4"; break;
  default: os << "UNKNOWN";
  }

  return os;
}
