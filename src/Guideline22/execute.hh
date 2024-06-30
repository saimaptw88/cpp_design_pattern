// Copyright saito 2024
#ifndef SRC_GUIDELINE22_EXECUTE_HH_
#define SRC_GUIDELINE22_EXECUTE_HH_


#include <optional>
#include <span>
#include <string_view>

namespace Guideline22 {
std::optional<int> to_int(std::string_view s, int& i);
void print(std::span<int>);
void execute();
}  // namespace Guideline22
#endif  // SRC_GUIDELINE22_EXECUTE_HH_
