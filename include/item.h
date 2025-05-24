/* Things to check
 * 1. Surplus ammo to reload is currently a variable of Gun
 *    Eventually this info needs to be retrieved from Inventory
*/

#ifndef ITEM_H
#define ITEM_H

#include <string>


/////////////////////////////////////////////////////////
//* BASE CLASSES *//

class Item {
    public:
        Item(int id, double wt, int val, const std::string &nm)
        : ID(id), weight(wt), value(val), name(nm) {}
        int getID() const;
        double getWeight() const;
        int getValue() const;
        std::string getName() const;
        
        
    protected:
        const int ID;
        const double weight;
        const int value;
        const std::string name;
};






/////////////////////////////////////////////////////////
//* [6xxxx] JUNK *//

class Scrap : public Item {
    public:
        Scrap() : Item(50000, 1.0, 5, "scrap") {}
};








/////////////////////////////////////////////////////////
//* [5xxxx] AMMO *//

class TenMM : public Item {
    public:
        TenMM() : Item(200, 0.04, 2, "10mm") {}
};







/////////////////////////////////////////////////////////
//* [21xxx] ARMOR *//

class LeatherChest : public Item {
    public:
};

/////////////////////////////////////////////////////////
//* [22xxx] Clothing *//


/////////////////////////////////////////////////////////
//* AID *//

class MedKit : public Item {
    
};


/////////////////////////////////////////////////////////
//* EQUIPMENT *//

class Rope : public Item {
    
};


/////////////////////////////////////////////////////////
//* QUEST *//

class Vault13Pass : public Item {
    
};



#endif