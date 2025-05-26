#ifndef WEAPON_DATA_H
#define WEAPON_DATA_H

// GunData : A configuration for defining types of guns
struct GunData {
    int id;
    double weight;
    int value;
    std::string name;
    double accuracy;
    double damage;
    double fireRate;
    int capacity;
    double reloadTime;
};


// meleeData : A configuration for defining types of melee weapons
struct MeleeData {
    int id;
    double weight;
    int value;
    std::string name;
    double accuracy;
    double damage;
    double fireRate;
};


// throwData : A configuration of defining types of throwable weapons
struct ThrowData {
    int id;
    double weight;
    int value;
    std::string name;
    double accuracy;
    double damage;
    double fireRate;
    int capacity;
    double reloadTime;
};

#endif