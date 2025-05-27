#include "weapons.h"


/////////////////////////////////////////////////////////
//* Gun Implementation *//

// Constructor
Gun::Gun(const GunData& data)
        : Item(data.id, data.weight, data.value, data.name), 
          accuracy(data.accuracy), 
          damage(data.damage), 
          fireRate(data.fireRate), 
          capacity(data.capacity), 
          reloadTime(data.reloadTime), 
          ammo(0) {}

// Accessors
double Gun::get_accuracy() const { return accuracy; }
double Gun::get_dps() const { return damage / fireRate; }
double Gun::get_damage() const { return damage; }
double Gun::get_fire_rate() const { return fireRate; }
int    Gun::get_capacity() const { return capacity; }
double Gun::get_reload_time() const { return reloadTime; }
int    Gun::get_current_mag() const { return currentMag; }
int    Gun::get_ammo() const { return ammo; }
int&   Gun::get_ammo_ref() { return ammo; }

// Mutators
void   Gun::set_current_mag(int x) { currentMag = x; }

void Gun::reload() {
    int currAmmo = get_ammo();
    // If have 1+ mag's worth of ammo
    if (currAmmo >= get_capacity()) {
        int usedAmmo = get_capacity() - get_current_mag(); // Find ammo used
        set_current_mag(get_capacity());   // Reload full clip
        get_ammo_ref() -= usedAmmo;  // Remove usedAmmo from ammo
    }
    else {
        set_current_mag(currAmmo);    // Reload available ammo
        get_ammo_ref() = 0;   // Empty ammo
    }
    
}


/////////////////////////////////////////////////////////
//* Melee f(x)'s' *//

// Constructor
Melee::Melee(const MeleeData& data)
        : Item(data.id, data.weight, data.value, data.name),
          accuracy(data.accuracy),
          damage(data.damage),
          fireRate(data.fireRate) {}

// Accessors
double Melee::get_accuracy() const { return accuracy; }
double Melee::get_dps() const { return damage / fireRate; }
double Melee::get_damage() const { return damage; }
double Melee::get_fire_rate() const { return fireRate; }