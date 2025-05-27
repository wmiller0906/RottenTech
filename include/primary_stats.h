#ifndef PRIMARY_STATS_H
#define PRIMARY_STATS_H

#include <stdexcept>
#include <string>
#include <vector>

struct PrimaryStats {
    vector<std::string> primaryStatNames = {"Strength", "Perception", "Endurance",
                                            "Charisma", "Intelligence", "Agility",
                                            "Luck" };
    int strength = 3;
    int perception = 3;
    int endurance = 3;
    int charisma = 3;
    int intelligence = 3;
    int agility = 3;
    int luck = 3;

    int& operator[] (const std::string& stat);          // For indexed access using name
    int& operator[] (const int& stat);                  //  using number
    void print_stats() const;
};

#endif