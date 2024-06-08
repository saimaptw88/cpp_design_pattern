#ifndef SRC_GUIDELINE16_DRAW_ALL_SHAPES_HH_
#define SRC_GUIDELINE16_DRAW_ALL_SHAPES_HH_


#include <iostream>
#include <memory>
#include <vector>


namespace Guideline16 {
class Shape;

void draw_all_shapes(const std::vector<std::unique_ptr<Shape>>& shapes);
};  // namespace Guildeline16
#endif  // SRC_GUIDELINE16_DRAW_ALL_SHAPES_HH_
