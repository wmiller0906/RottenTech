#include "player.h"

void Player::attack(NPC target) {
    /*
      Need to select equipped weapon from inventory, .get_damage(), 
      subtract that from NPC's health
    */
}

void Player::print_primary_stats() const {
    primaryStats.print_stats();
}

/*void Player::print_secondary_stats() const {
    
}*/

int Player::get_experience() const { return experience; }
void Player::add_experience(int xp) {
    experience += xp;
    // Add xp thresholds when level up is triggered. Then do something like follows:
    /* 
      nextLevel = levelUpGuide[get_level()];
      if(get_experience() > nextLevel) { level_up(); }
    */
}
int Player::get_level() const { return level; }

/*void Player::level_up() {
    // FINISH ME
}*/