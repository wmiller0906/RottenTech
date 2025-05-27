#ifndef SECONDARY_STATS_H
#define SECONDARY_STATS_H

#include <vector>
#include <string>

struct SecondaryStats {
    std::vector<std::string> secondaryStatNames = {
    "CloseCombat",              // Skill with melee weapons
    "CyberneticOverdrive",      // Ability to activate cybernetic augmentations
    "Gunslinger",               // Ability with guns
    "Recon",                    // Ability to perceive information (traps, enemies, clues, etc)
    "Fitness",                  // Endurance-like; health, stamina, climbing checks
    "SynapticTolerance",        // Resistance to implant strain, environmental effects
    "Negotiation",              // Persuading NPCs, bartering, gaining favors
    "Deception",                // Lying, impersonation, bluffing
    "Hacking",                  // Breaching computer systems, drones
    "Engineering",              // Crafting, repairing, upgrading
    "Stealth",                  // Avoiding detection
    "KineticDrift"};            // Evasive movement, shortcuts

    int closeCombat = 10;           // 0
    int cyberneticOverdrive = 10;   // 1
    int gunslinger = 10;            // 2
    int recon = 10;                 // 3
    int fitness = 10;               // 4
    int synapticTolerance = 10;     // 5
    int negotiation = 10;           // 6
    int deception = 10;             // 7
    int hacking = 10;               // 8
    int engineering = 10;           // 9
    int stealth = 10;               // 10
    int kineticDrift = 10;          // 11
    
    int& operator[] (const std::string& stat);      // For indexed access using name
    int& operator[] (const int& stat);               //  using number
    int operator[](const int& stat) const;
    void print_stats() const;
};

#endif

/* Each primary stat (except Luck) has two secondary stats tied to it
   Primary stats will impact level of secondary stat. Thinking 1:1, so strength = 3 will
     give +3 to closeCombat and cyberneticOverdrive
   
*/