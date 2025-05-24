#include "item.h"
#include <iostream>
#include <string>
#include <utility>

/////////////////////////////////////////////////////////
//* ITEM f(x)'s' *//

int Item::getID() const { return ID; }

double Item::getWeight() const { return weight; }

int Item::getValue() const { return value; }

std::string Item::getName() const { return name; }