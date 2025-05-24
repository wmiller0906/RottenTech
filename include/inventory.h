#ifndef INVENTORY_H
#define INVENTORY_H

#include <memory>
#include <unordered_map>
#include "item.h"


class Inventory {
    private:
        std::unordered_map<int, Item*> items;
    
    public:
        
};

#endif