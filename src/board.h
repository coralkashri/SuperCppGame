#pragma once
#include "entity.h"

class board {
public:
    enum directions {
        UP,
        DOWN,
        RIGHT,
        LEFT
    };

    void try_move(directions direction, entity *e);

private:
};