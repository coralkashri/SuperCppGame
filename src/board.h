#pragma once

#include "entity.h"

#include "point.h"
#include <vector>

using std::size_t;

class board {

public:
    // using row major ordering for the matrix
    std::vector<point> scene;
    std::vector<entity *> entities;

    enum directions {
        UP,
        DOWN,
        RIGHT,
        LEFT
    };

    board(size_t rows, size_t colums);

    void add_entity(const entity *e);
    void try_move(directions direction, entity *e);

private:
};