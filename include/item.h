/* Things to check
 * 1. Surplus ammo to reload is currently a variable of Gun
 *    Eventually this info needs to be retrieved from Inventory
*/

#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item {
    public:
        Item(int id, double wt, int val, const std::string &nm)
        : ID(id), weight(wt), value(val), name(nm) {}
        int get_id() const;
        double get_weight() const;
        int get_value() const;
        std::string get_name() const;
        
        
    protected:
        const int ID;
        const double weight;
        const int value;
        const std::string name;
};

#endif