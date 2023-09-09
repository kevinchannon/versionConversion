#pragma warning( push )
#pragma warning( disable: 4514) // 'operator <<': unreferenced inline function has been removed
#include "versionConversion.h"
#pragma warning( pop )

#pragma warning( push )
#pragma warning( disable: 4514) // 'operator <<': unreferenced inline function has been removed
#pragma warning( disable: 5262) // implicit fall-through occurs here
#pragma warning( disable: 5264) // 'const' variable is not used
#include <iostream>
#include <chrono>
#include <random>
#include <algorithm>
#include <iostream>
#pragma warning( pop )

namespace {
  std::chrono::nanoseconds time_calls(const std::vector<Comp_1>& from_versions, Comp_2(*fn)(Comp_1)) {
    const auto start = std::chrono::high_resolution_clock::now();

    for (auto from : from_versions) {
      volatile auto to = fn(from);
      (void*)to;
    }

    const auto stop = std::chrono::high_resolution_clock::now();
    return std::chrono::duration_cast<std::chrono::nanoseconds>(stop - start);
  }

  void print_result(std::chrono::nanoseconds duration, size_t samples, std::string_view label) {
    std::cout << samples << " calls using " << label
              << std::setw(2) << std::setfill(' ') << duration.count() / samples
              << " ns per call" << std::endl;
  }

  template<typename Generator_T>
  void run_perf_tests(size_t samples, Generator_T generator) {
    auto from_versions = std::vector<Comp_1>(samples);
    std::generate(from_versions.begin(), from_versions.end(), generator);

    print_result(time_calls(from_versions, to_comp_2_version_with_if), samples, "if-else:\t\t\t\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_range_lookup), samples, "range-lookup:\t\t\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_unordered_map), samples, "unordered map:\t\t\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_unordered_map_and_shortcut), samples, "unordered map (with shortcut):\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_map), samples, "using map:\t\t\t\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_map_and_shortcut), samples, "map (with shortcut):\t\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_switch_case), samples, "switch-case:\t\t\t");
    print_result(time_calls(from_versions, to_comp_2_version_with_switch_case_annotated), samples, "switch-case (with annotation):\t");

    std::cout << std::endl;
  }
}

int main()
{
  auto rng = std::mt19937_64{ 3492734 };  // arbitrary seed.
  auto choose_random_from_version = std::uniform_int_distribution<uint32_t>{ static_cast<uint32_t>(Comp_1::version_1), static_cast<uint32_t>(Comp_1::count) - 1 };

  auto from_versions = std::vector<Comp_1>(1'000'000);

  std::cout << "99% probability of being latest comp 1 version:" << std::endl;
  run_perf_tests(10'000'000, [&]() {
    // Most likely to be the latest version, so 
    if (choose_random_from_version(rng) > 3) {
      return static_cast<Comp_1>(static_cast<uint32_t>(Comp_1::count) - 1);
    }
    else {
      return static_cast<Comp_1>(choose_random_from_version(rng));
    }
    });

  std::cout << "Uniform probablility of any comp 1 version:" << std::endl;
  run_perf_tests(10'000'000, [&]() { return static_cast<Comp_1>(choose_random_from_version(rng)); });

  return 0;
}