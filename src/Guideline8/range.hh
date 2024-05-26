#ifndef SRC_DUIDELINE8_RANGE_HH_
#define SRC_DUIDELINE8_RANGE_HH_


namespace Guideline8 {
template <typename Range>
void traverseRange(const Range& range) {
  using std::begin;
  using std::end;

  for (auto pos = begin(range); pos != end(range); ++pos) {
    std::cout << pos << std::endl;
  }
}
};  // namespace Guideline8
#endif  // SRC_DUIDELINE8_RANGE_HH_
