#include "versionConversion.h"

#include <iostream>
#include <chrono>
#include <random>
#include <algorithm>
#include <iostream>

std::chrono::microseconds time_calls(const std::vector<Comp_1>& from_versions, Comp_2(*fn)(Comp_1)) {
  const auto start = std::chrono::high_resolution_clock::now();

  for (auto from : from_versions) {
    volatile auto to = fn(from);
    (void*)to;
  }

  const auto stop = std::chrono::high_resolution_clock::now();
  return std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
}

int main()
{
  auto rng = std::mt19937_64{ 3492734 };  // arbitrary seed.
  auto choose_random_from_version = std::uniform_int_distribution<uint32_t>{ static_cast<uint32_t>(Comp_1::version_1), static_cast<uint32_t>(Comp_1::count) - 1 };

  auto from_versions = std::vector<Comp_1>(1'000'000);
  std::generate(from_versions.begin(), from_versions.end(), [&]() { return static_cast<Comp_1>(choose_random_from_version(rng));  });

  {
    const auto duration = time_calls(from_versions, to_comp_2_version_with_if);
    std::cout << "1 000 000 calls using if-else: " << duration.count() << " microseconds" << std::endl;
  }

  {
    const auto duration = time_calls(from_versions, to_comp_2_version_with_range_lookup);
    std::cout << "1 000 000 calls using range-lookup: " << duration.count() << " microseconds" << std::endl;
  }

  return 0;
}