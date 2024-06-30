// Copyright saito 2024
#include <algorithm>
#include <cassert>
#include <charconv>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "../../src/Guideline22/execute.hh"


namespace Guideline22 {
std::optional<int> to_int(std::string_view sv) {
  std::optional<int> oi{};
  int i{};

  const auto result = std::from_chars(sv.data(), sv.data() + sv.size(), i);

  if (result.ec == std::errc{}) {
    oi = i;
  }

  return oi;
}

void print(std::span<int> s) {
  std::cout << "(";

  for (int i : s) {
    std::cout << " " << i;
  }
  std::cout << ")" << std::endl;
}

void execute() {
  std::cout << "Guideline22" << std::endl;

  std::vector<int> v { 1, 2, 3, 4 };

  const std::vector<int> w { v };
  const std::span<int> s { v };

  s[2] = 99;

  print(s);

  v = {5,6,7,8,9};
  s[2] = 99;

  print(s);

  std::vector<int> vec {1, -3, 27, 42, 4, -8, 22, 42, 37, 4, 18, 9};

  const auto pos = std::max_element(std::begin(vec), std::end(vec));  // 3

  vec.erase(std::remove(std::begin(vec), std::end(vec), *pos), std::end(vec));
  print(vec);

  std::vector<int> v1 {1,2,3,4,5};

  auto v2 {v1};

  assert(v1 == v2);
  assert(v1.data() != v2.data());

  v2[2] = 99;
  assert(v1 != v2);

  const auto v3 {v1};

  std::string value = "42";

  if (auto optional_int = to_int(value)) {
    std::cout << "success convert: " << value << "s to int" << std::endl;
  }
}
}  // namespace Guideline22
