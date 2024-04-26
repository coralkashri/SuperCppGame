#pragma once
#include "point.h"

class entity {
private:
    int hit_points;
    point location;
    bool is_still_alive;

public:
    const int max_hp;
    bool is_still_alive;

    entity(int max_hp, const point &location);

    int get_hit_points() const;
    point get_location() const;

    void take_damage(int damage);
    void heal(int heal_amount);

    void set_location(const point &next_location);
};
