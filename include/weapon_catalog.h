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
    static const GunData relock ] { 11302, 13.5, 400, "Relock", 0.9, 20.0, 0.333, 15, 2.5 };
    
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
    static const MeleeData machete = { /* values */ };
    static const MeleeData combatKnife = { /* values */ };
}


/*---------------
[13xxx] THROWABLE
---------------*/
namespace ThrowCatalog {
    static const ThrowableData fragGrenade = { /* values */ };
}
