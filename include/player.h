#ifndef PLAYER_H
#define PLAYER_H

#include "primary_stats.h"
#include "npc.h"

class Player {
    private:
        double health;
        double carryingCapacity;
        int experience;
        int level;
        PrimaryStats primaryStats;
        // secondary stats still needed
    public:
        void attack(NPC target);
        // interact() - Needed? Text based so menu may handle this
        void print_primary_stats() const;
        //void print_secondary_stats() const;
        int get_experience() const;
        void add_experience(int xp);
        int get_level() const;
        // void level_up()
};

#endif