#ifndef PRIMARY_STATS_H
#define PRIMARY_STATS_H

#include <stdexcept>
#include <string>

struct PrimaryStats {
    int strength;
    int perception;
    int endurance;
    int charisma;
    int intelligence;
    int agility;
    int luck;

    int& operator[](const std::string& stat);        // For indexed access
    void print_stats() const;
};

#endif