#include <iostream>
#include <string>
#include <variant>

#include "variant.hh"


namespace Guideline17 {
struct Print {
  void operator()(int value) const {
    std::cout << "int: " << value << std::endl;
  }

  void operator()(double value) const {
    std::cout << "double: " << value << std::endl;
  }

  void operator()(const std::string& value) const {
    std::cout << "string: " << value << std::endl;
  }
};

void variant_sample() {
  std::variant<int, double, std::string> v{};

  v = 42;
  v = 3.14;
  v = 2.71F;
  v = "Bjarne";
  v = 43;

  const int i = std::get<int>(v);
  const int* pi = std::get_if<int>(&v);

  std::visit(Print{}, v);
}
};  // namespace Guideline17
