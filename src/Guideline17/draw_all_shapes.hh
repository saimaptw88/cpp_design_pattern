#ifndef SRC_GUIDELINE17_DRAW_ALL_SHAPES_HH_
#define SRC_GUIDELINE17_DRAW_ALL_SHAPES_HH_


#include <iostream>
#include <memory>
#include <vector>


namespace Guideline17 {
class Shape;

void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes);
};  // namespace Guildeline17
#endif  // SRC_GUIDELINE17_DRAW_ALL_SHAPES_HH_
