#include "entity.h"

entity::entity(int max_hp, const point &location) : max_hp(max_hp), hit_points(max_hp), location(location) {
    is_still_alive = true;
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
        if (hit_points + heal_amount > max_hp) {
            hit_points = max_hp;
        } else {
            hit_points += heal_amount;
        }
    }
}

void entity::set_location(const point &next_location) {
    location = next_location;
}