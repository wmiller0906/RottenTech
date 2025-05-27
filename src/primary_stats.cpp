#include "primary_stats.h"

#include <iostream>
#include <iomanip>

int& PrimaryStats::operator[] (const std::string& stat) {
    if(stat == "strength") { return strength; }
    else if (stat == "perception") { return perception; }
    else if (stat == "endurance") { return endurance; }
    else if (stat == "charisma") { return charisma; }
    else if (stat == "intelligence") { return intelligence; }
    else if (stat == "agility") { return agility; }
    else if (stat == "luck") { return luck; }
    else { throw std::out_of_range("Invalid PrimaryStats index"); }
}

int& PrimaryStats::operator[] (const int& stat) {
    switch (stat) {
        case 0: return strength;
        case 1: return perception;
        case 2: return endurance;
        case 3: return charisma;
        case 4: return intelligence;
        case 5: return agility;
        case 6: return luck;
        default: throw std::out_of_range("Invalid PrimaryStats index");
    }
}

void PrimaryStats::print_stats() const {
    std::cout << "+----------------+--------+" << std::endl;
    std::cout << "| Strength       | " << std::setw(6) << strength << " |" << std::endl;
    std::cout << "| Perception     | " << std::setw(6) << perception << " |" << std::endl;
    std::cout << "| Endurance      | " << std::setw(6) << endurance << " |" << std::endl;
    std::cout << "| Charisma       | " << std::setw(6) << charisma << " |" << std::endl;
    std::cout << "| Intelligence   | " << std::setw(6) << intelligence << " |" << std::endl;
    std::cout << "| Agility        | " << std::setw(6) << agility << " |" << std::endl;
    std::cout << "| Luck           | " << std::setw(6) << luck << " |" << std::endl;
    std::cout << "+----------------+--------+" << std::endl;
}