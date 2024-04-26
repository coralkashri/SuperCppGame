#pragma once

#include "board.h"
#include <memory>
#include <vector>

struct point {
    int x;
    int y;

    point();
    point(int x, int y);

    // calculate the manhattan distance (non diagonal distance) between "this" point and "second_point"
    int manhattan_distance(const point &second_point);

    // calculate the shortest path with no diagonals
    std::unique_ptr<std::vector<point>> calc_shortest_manhattan_path(const point &destination, const board &playing_board);
    bool operator==(const point &compare_point);

    point operator*(int multiplier);
    point operator*(const point &multiplier);
    void operator*=(int multiplier);
    void operator*=(const point &multiplier);

    point operator+(int appends);
    point operator+(const point &appends);
    void operator+=(int appends);
    void operator+=(const point &appends);

    point operator-(int subtrahend);
    point operator-(const point &subtrahend);
    void operator-=(int subtrahend);
    void operator-=(const point &subtrahend);
};