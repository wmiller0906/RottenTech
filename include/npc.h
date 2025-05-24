/* Also includes Player class at bottom
 *
*/
#ifndef NPC_H
#define NPC_H

#include <string>
#include "item.h"

// Forward declaration of Item class since NPC is compiled
//   before it
class Item;
class Gun;

class NPC {
    private:
        double HP = 100.0;
        // This will need to be modified after testing
        //   NPC using a weapon
    protected:
        Gun* currentGun;
    public:
        NPC() {
            currentGun = NULL;
        }
        double checkHP() const;//
        double& getHPRef();//
        Gun* getGun() const;//
        // Need attack f(x)
        
        
};

/////////////////////////////////////////////////////////
//* FRIENDLIES *//


/////////////////////////////////////////////////////////
//* ENEMIES *//


#endif