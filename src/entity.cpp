#include "entity.h"

entity::entity(const point &location) : hit_points(MAX_HP), location(location), speed(BASE_SPEED), is_still_alive(true) {
}

int entity::get_hit_points() const {
    return hit_points;
}

point entity::get_location() const {
    return location;
}

void entity::take_damage(int damage) {
    hit_points -= damage;
    if (hit_points <= 0)
        is_still_alive = false;
}

void entity::heal(int heal_amount) {
    if (is_still_alive) {
        hit_points = std::min(MAX_HP, hit_points + heal_amount);
    }
}

void entity::set_location(const point &next_location) {
    location = next_location;
}