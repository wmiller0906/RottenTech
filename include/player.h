#ifndef PLAYER_H
#define PLAYER_H

#include "primary_stats.h"
#include "secondary_stats.h"
#include "npc.h"

class Player {
    private:
        double health = 200.0;
        double stamina = 50.0;
        double carryingCapacity = 50.0;
        int experience = 0;
        int level = 1;
        PrimaryStats primaryStats;
        SecondaryStats secondaryStats;
    public:
        void attack(NPC target);
        // interact() - Needed? Text based so menu may handle this
        void print_primary_stats() const;
        void print_secondary_stats() const;
        void print_full_stats() const;
        int get_experience() const;
        void add_experience(int xp);
        int get_level() const;
        void level_up();
};

#endif