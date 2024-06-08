#ifndef SRC_GUIDELINE15_DRAW_ALL_SHAPES_HH_
#define SRC_GUIDELINE15_DRAW_ALL_SHAPES_HH_


#include <memory>
#include <vector>


namespace Guideline15 {
class Shape;

void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes);
};  // namespace Guildeline15
#endif  // SRC_GUIDELINE15_DRAW_ALL_SHAPES_HH_
