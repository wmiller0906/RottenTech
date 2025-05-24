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
        double getAccuracy();
        double getDPS();
        double getDamage();
        double getFireRate();
        int getCapacity();
        double getReloadTime();
        int getCurrentMag() const;
        void setCurrentMag(int x);
        int getAmmo() const;
        int& getAmmoRef();
        double reload();
    protected:
        const double accuracy;  // Modifier to hit target
        const double damage;
        const double fireRate;  // seconds/bullet
        const int capacity;
        const double reloadTime;
        int currentMag;
        int ammo;
};

class Melee : public Item {
    public:
        Melee(int id, double wt, int val, const std::string &nm, double dmg, double rate)
        : Item(id, wt, val, nm), damage(dmg), fireRate(rate) {}
        double getDPS();
    private:
        const double damage;
        const double fireRate;
};




class TenMMPistol : public Gun {
    public:
        TenMMPistol() : Gun(100, 4.0, 20, "pistol", 0.90, 15, 0.333, 8, 1.5) { currentMag = capacity; }
};





/*------------
[12xxx] MELEE
------------*/

/////////////////////////////////////////////////////////
//* Machete *//

class Machete : public Melee {
    public:
        Machete() : Melee(300, 2.0, 10, "machete", 10, 2.00) {}
};

#endif