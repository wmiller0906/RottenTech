#ifndef WEAPONS_H
#define WEAPONS_H

#include "item.h"   // Superclass library must be included in subclass header
#include <string>

/*--------------------------------------------
----------------WEAPON CLASSES----------------
--------------------------------------------*/


/*-----------------
[11xxx] GUN
-----------------*/

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


class Gun : public Item {
    public:
        Gun(const GunData& data);
        double get_accuracy() const;
        double get_dps() const;
        double get_damage() const;
        double get_fire_rate() const;
        int get_capacity() const;
        double get_reload_time() const;
        int get_current_mag() const;
        void set_current_mag(int x);
        int get_ammo() const;
        int& get_ammo_ref();
        void reload();
    protected:
        const double accuracy;  // Modifier to hit target
        const double damage;
        const double fireRate;  // seconds/bullet
        const int capacity;
        const double reloadTime;
        int currentMag;
        int ammo;
};




/*------------
[12xxx] MELEE
------------*/

// meleeData : A configuration for defining types of melee weapons
struct meleeData {
    int id;
    double weight;  // CHECK THESE VAR
    int value;
    std::string name;
    double accuracy;
    double damage;
    double fireRate;
};


class Melee : public Item {
    public:
        Melee(const meleeData& data);
        double get_accuracy() const;
        double get_dps() const;
        double get_damage() const;
        double get_fire_rate() const;
    private:
        const double accuracy;
        const double damage;
        const double fireRate;
};


#endif