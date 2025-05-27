#include "player.h"
#include <vector>
#include <iostream>
#include <iomanip>

void Player::attack(NPC target) {
    /*
      Need to select equipped weapon from inventory, .get_damage(), 
      subtract that from NPC's health
    */
}

void Player::print_primary_stats() const {
    primaryStats.print_stats();
    std::cout << std::endl;
}

void Player::print_secondary_stats() const {
    secondaryStats.print_stats();
    std::cout << std::endl;
}

void Player::print_full_stats() const {

    std::cout << "+-----------------------+-----------------------------+" << std::endl;
    std::cout << "|    PRIMARY STATS      |   SECONDARY STATS           |" << std::endl;
    std::cout << "+-----------------------+-----------------------------+" << std::endl;

    std::cout << "| Strength:        " << std::setw(3) << primaryStats[0] << "  | CloseCombat:           " << std::setw(3) << secondaryStats[0] << "  |" << std::endl;
    std::cout << "| Perception:      " << std::setw(3) << primaryStats[1] << "  | CyberneticOverdrive:   " << std::setw(3) << secondaryStats[1] << "  |" << std::endl;
    std::cout << "| Endurance:       " << std::setw(3) << primaryStats[2] << "  | Gunslinger:            " << std::setw(3) << secondaryStats[2] << "  |" << std::endl;
    std::cout << "| Charisma:        " << std::setw(3) << primaryStats[3] << "  | Recon:                 " << std::setw(3) << secondaryStats[3] << "  |" << std::endl;
    std::cout << "| Intelligence:    " << std::setw(3) << primaryStats[4] << "  | Fitness:               " << std::setw(3) << secondaryStats[4] << "  |" << std::endl;
    std::cout << "| Agility:         " << std::setw(3) << primaryStats[5] << "  | SynapticTolerance:     " << std::setw(3) << secondaryStats[5] << "  |" << std::endl;
    std::cout << "| Luck:            " << std::setw(3) << primaryStats[6] << "  | Negotiation:           " << std::setw(3) << secondaryStats[6] << "  |" << std::endl;

    std::cout << "+-----------------------+ Deception:             " << std::setw(3) << secondaryStats[7] << "  |" << std::endl;

    std::cout << "| Health:          " << std::setw(3) << static_cast<int>(health) << "  | Hacking:               " << std::setw(3) << secondaryStats[8] << "  |" << std::endl;
    std::cout << "| Stamina:         " << std::setw(3) << static_cast<int>(stamina) << "  | Engineering:           " << std::setw(3) << secondaryStats[9] << "  |" << std::endl;
    std::cout << "| Level:           " << std::setw(3) << level << "  | Stealth:               " << std::setw(3) << secondaryStats[10] << "  |" << std::endl;
    std::cout << "| Experience:      " << std::setw(3) << experience << "  | KineticDrift:          " << std::setw(3) << secondaryStats[11] << "  |" << std::endl;

    std::cout << "+-----------------------+-----------------------------+" << std::endl;
}

int Player::get_experience() const { return experience; }

void Player::add_experience(int xp) {
    experience += xp;
    std::vector<int> nextLevel = {
        0,      // lvl 1
        500,    // lvl 2    nextLevel[1] provides experience required to reach level 2
        1000,   // lvl 3
        1500,   // lvl 4
        2000,   // lvl 5
        3500,   // lvl 6
        4000,   // lvl 7
        4500,   // lvl 8
        5000,   // lvl 9
        5500,   // lvl 10
        6000,   // lvl 11
        7000,   // lvl 12
        8000,   // lvl 13
        9000,   // lvl 14
        10000,  // lvl 15
        12000,  // lvl 16
        14000,  // lvl 17
        16000,  // lvl 18
        18000,  // lvl 19
        20000}; // lvl 20
    if(get_experience() >= nextLevel[get_level()]) { level_up(); }
}
int Player::get_level() const { return level; }

void Player::level_up() {
    level += 1;
    // FINISH ME
}