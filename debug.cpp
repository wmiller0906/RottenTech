/* Wiliam Miller
 * platypusOfHorseheads
 * Fallout-inspired text based game
 *
*/

#include <iostream>
#include "player.h"
#include "item.h"
#include "weapons.h"
#include "weapon_catalog.h"
#include "inventory.h"
#include "npc.h"

bool debugModeItem = false;
bool debugModeInventory = false;
bool debugModeGun = false;
bool debugModeMelee = false;
bool debugModeNPC = true;
bool debugModePlayer = true;


int main () {
    
    /*if(debugModeInventory) {
        Inventory playerItems;
    }*/
    
    
    /*if(debugModeGun) {
        
    }*/
    
    
    /*if(debugModeMelee) {
        Machete m1;
    }*/
    
    /*if(debugModeNPC) {
        
    }*/
    
    if(debugModePlayer) {
        Player me;
        me.print_full_stats();
    }
    
    
    return 0;
}