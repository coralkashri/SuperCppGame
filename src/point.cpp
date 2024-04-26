#include "point.h"
#include <math.h>

point::point() {
    x = 0;
    y = 0;
}

point::point(int x, int y) : x(x), y(y) {
}

int point::manhattan_distance(const point &second_point) {
    return (std::abs(x) - std::abs(second_point.x) + (std::abs(y) - std::abs(second_point.y)));
}

std::unique_ptr<std::vector<point>> point::calc_shortest_manhattan_path(const point &destination, const board &playing_board) {
    return nullptr; /*TODO: implement*/
}

bool point::operator==(const point &compare_point) {
    return x == compare_point.x && y == compare_point.y;
}

point operator*(point lvalue, int multiplier) {
    return lvalue *= multiplier;
}
point operator*(int multiplier, point rvalue) {
    return rvalue *= multiplier;
}
point operator*(point lvalue, const point &multiplier) {
    return lvalue *= multiplier;
}
point &point::operator*=(int multiplier) {
    x *= multiplier;
    y *= multiplier;
    return *this;
}
point &point::operator*=(const point &multiplier) {
    x *= multiplier.x;
    y *= multiplier.y;
    return *this;
}

point operator+(point lvalue, int appends) {
    return lvalue += appends;
}
point operator+(int appends, point rvalue) {
    return rvalue += appends;
}
point operator+(point lvalue, const point &appends) {
    return lvalue += appends;
}
point &point::operator+=(int appends) {
    x += appends;
    y += appends;
    return *this;
}
point &point::operator+=(const point &appends) {
    x += appends.x;
    y += appends.y;
    return *this;
}

point operator-(point lvalue, int subtrahend) {
    return lvalue -= subtrahend;
}
point operator-(int subtrahend, point rvalue) {
    return rvalue += subtrahend;
}
point operator-(point lvalue, const point &subtrahend) {
    return lvalue -= subtrahend;
}
point &point::operator-=(int subtrahend) {
    x -= subtrahend;
    y -= subtrahend;
    return *this;
}
point &point::operator-=(const point &subtrahend) {
    x -= subtrahend.x;
    y -= subtrahend.y;
    return *this;
}

std::ostream &operator<<(std::ostream &os, const point &pt) {
    return os << "(" << pt.x << ", " << pt.y << ")";
}