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
  if (ver >= Comp_1::version_223) {
    return Comp_2::version_4;
  }

  if (ver >= Comp_1::version_153) {
    return Comp_2::version_3;
  }

  if (ver >= Comp_1::version_112) {
    return Comp_2::version_2;
  }

  if (ver >= Comp_1::version_43) {
    return Comp_2::version_1;
  }

  return Comp_2::version_0;
}

[[nodiscard]] constexpr auto to_comp_2_version_with_range_lookup(Comp_1 ver) noexcept -> Comp_2 {
  constexpr auto lookup = std::array{
    std::pair{Comp_1::version_1, Comp_2::version_0},
    std::pair{Comp_1::version_43, Comp_2::version_1},
    std::pair{Comp_1::version_112, Comp_2::version_2},
    std::pair{Comp_1::version_153, Comp_2::version_3},
    std::pair{Comp_1::version_223, Comp_2::version_4},
  };

  const auto mapping = std::ranges::lower_bound(lookup, ver, std::less_equal<Comp_1>{}, [](auto&& m) {return m.first; });
  return lookup.end() != mapping ? static_cast<Comp_2>(static_cast<uint32_t>(mapping->second) - 1) : Comp_2::version_4;
}