#ifndef WEAPONS_H
#define WEAPONS_H

#include "item.h"   // Superclass library must be included in subclass header
#include "weapon_data.h"
#include <string>

/*--------------------------------------------
----------------WEAPON CLASSES----------------
--------------------------------------------*/


/*---------
[11xxx] GUN
---------*/


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

/*----------------
[13xxx] THROWABLES
----------------*/


#endif