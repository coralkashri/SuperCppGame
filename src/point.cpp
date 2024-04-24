#include "point.h"
#include <math.h>

point::point() {
    x = 0;
    y = 0;
}

point::point(int x, int y) : x(x), y(y) {
}

int point::manhatten_distance(const point &second_point) {
    return (std::abs(x) - std::abs(second_point.x) + (std::abs(y) - std::abs(second_point.y)));
}

std::unique_ptr<std::vector<point>> point::calc_shortest_manhatten_path(const point &destination, const board &playing_board) {
    return nullptr; /*TODO: implement*/
}

bool point::operator==(const point &compare_point) {
    return x == compare_point.x && y == compare_point.y;
}

point point::operator*(int multiplier) {
    return point(x * multiplier, y * multiplier);
}
point point::operator*(const point &multiplier) {
    return point(x * multiplier.x, y * multiplier.y);
}
void point::operator*=(int multiplier) {
    x *= multiplier;
    y *= multiplier;
}
void point::operator*=(const point &multiplier) {
    x *= multiplier.x;
    y *= multiplier.y;
}

point point::operator+(int appends) {
    return point(x + appends, y + appends);
}

point point::operator+(const point &appends) {
    return point(x + appends.x, y + appends.y);
}
void point::operator+=(int appends) {
    x += appends;
    y += appends;
}
void point::operator+=(const point &appends) {
    x += appends.x;
    y += appends.y;
}

point point::operator-(int subtrahend) {
    return point(x - subtrahend, y - subtrahend);
}
point point::operator-(const point &subtrahend) {
    return point(x - subtrahend.x, y - subtrahend.y);
}
void point::operator-=(int subtrahend) {
    x -= subtrahend;
    y -= subtrahend;
}
void point::operator-=(const point &subtrahend) {
    x -= subtrahend.x;
    y -= subtrahend.y;
}