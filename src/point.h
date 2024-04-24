#pragma once

#include "board.h"
#include <memory>
#include <vector>

struct point {
    int x;
    int y;

    point();
    point(int x, int y);

    int manhatten_distance(const point &second_point);                                                                      // calculate the manhatten distance (non diagonal distance) between "this" point and "second_point"
    std::unique_ptr<std::vector<point>> calc_shortest_manhatten_path(const point &destination, const board &playing_board); // calculate the shortest path with no diagonals

    bool operator==(const point &compare_point);

    int operator*(int multiplier);
    int operator*(const point &multiplier);
    void operator*=(int multiplier);
    void operator*=(const point &multiplier);

    int operator+(int appends);
    int operator+(const point &appends);
    void operator+=(int appends);
    void operator+=(const point &appends);

    int operator-(int subtrahend);
    int operator-(const point &subtrahend);
    void operator-=(int subtrahend);
    void operator-=(const point &subtrahend);
};