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
double Gun::getAccuracy() { return accuracy; }
double Gun::getDPS() { return damage / fireRate; }
double Gun::getDamage() { return damage; }
double Gun::getFireRate() { return fireRate; }
int    Gun::getCapacity() { return capacity; }
double Gun::getReloadTime() { return reloadTime; }
int    Gun::getCurrentMag() const { return currentMag; }
void   Gun::setCurrentMag(int x) { currentMag = x; }
int    Gun::getAmmo() const { return ammo; }
int&   Gun::getAmmoRef() { return ammo; }

// Mutators
double Gun::reload() {
    int currAmmo = getAmmo();
    // If have 1+ mag's worth of ammo
    if (currAmmo >= getCapacity()) {
        int usedAmmo = getCapacity() - getCurrentMag(); // Find ammo used
        setCurrentMag(getCapacity());   // Reload full clip
        getAmmoRef() -= usedAmmo;  // Remove usedAmmo from ammo
    }
    else {
        setCurrentMag(currAmmo);    // Reload available ammo
        getAmmoRef() = 0;   // Empty ammo
    }
    
    return getReloadTime(); // Return time to reload
}


/////////////////////////////////////////////////////////
//* Melee f(x)'s' *//

double Melee::getDPS() { return damage / fireRate; }