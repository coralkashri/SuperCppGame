#include "board.h"
#include <algorithm>
#include <iostream>

board::board(size_t rows, size_t columns) {
    scene.reserve(rows * columns);
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < columns; ++j) {
            scene.at(i * columns + j) = point(i, j);
        }
    }
}

void board::add_entity(const entity *e) {
    if (e == nullptr) {
        std::cout << "entity is nullptr \n";
        return;
    }

    if (std::find(scene.begin(), scene.end(), e->get_location()) != scene.end()) {
        std::cout << "point: " << e->get_location() << " is taken.\n";
        return;
    }

    entities.emplace_back(e);
}
