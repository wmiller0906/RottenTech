#include "weapon_data.h"


/*---------
[11xxx] GUN
---------*/
namespace GunCatalog {
    /*-------------
    [111xx] Pistols
    -------------*/
    // Standard weapon. Balanced across all traits.
    static const GunData envoy7 = { 11101, 3.0, 100, "Envoy-7", 0.80, 10.0, 0.5, 8, 2.0 };
    
    // accuracy+ (smart bullets), damage-, fireRate-
    static const GunData xtec = { 11102, 3.0, 130, "XTec", 0.90, 8.5, 0.333, 7, 2.0 };
    
    /*---------------------
    [112xx] Submachine guns
    ----------------------*/
    // Standard submachine gun. Balanced across all traits.
    static const GunData sg01 = { 11201, 7.5, 200, "SG-01", 0.75, 7.0, 0.1, 25, 2.0 };
    
    // Electric gun. damage-, fireRate+
    static const GunData arclink = { 11202, 9.0, 280, "ArcLink", 0.75, 5.5, 0.08, 20, 2.3 };
    
    /*------------
    [113xx] Rifles
    ------------*/
    // Standard rifle. Balanced across all traits.
    static const GunData mx57 = { 11301, 12.0, 350, "MX57", 0.8, 15.0, 0.125, 30, 2.5 };
    
    // Single-fire rifle. damage+, fireRate-, capacity-
    static const GunData relock = { 11302, 13.5, 400, "Relock", 0.9, 20.0, 0.333, 15, 2.5 };
    
    /*--------------
    [114xx] Shotguns
    --------------*/
    // Standard shotgun. Balanced across all traits.
    static const GunData harvard = { 11401, 14.0, 400, "Harvard", 0.75, 30.0, 0.75, 6, 6.0 };
}


/*-----------
[12xxx] MELEE
-----------*/
namespace MeleeCatalog {
    // damage+, fireRate-
    static const MeleeData machete = { 12001, 7.0, 80, "Machete", 0.95, 40.0, 1.0 };
    
    // damage-, fireRate+
    static const MeleeData combatKnife = { 12002, 1.0, 80, "Combat Knife", 0.95, 20.0, 0.5 };
}


/*---------------
[13xxx] THROWABLE
---------------*/
namespace ThrowCatalog {
    /*----------------
    [131xx] Explosives
    ----------------*/
    // Slow to use, but deadly damage
    static const ThrowData fragGrenade = { 13101, 1.0, 100, "Fragmentation Grenade", 0.75, 100.0, 2.0, 1, 3.0 };
    
    /*------------
    [132xx] Knives
    ------------*/
    static const ThrowData throwingKnife = { 13201, 0.25, 60, "Throwing Knife", 0.75, 33.333, 0.5, 3, 2.0 };
}
