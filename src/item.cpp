#include "item.h"

int Item::get_id() const { return ID; }

double Item::get_weight() const { return weight; }

int Item::get_value() const { return value; }

std::string Item::get_name() const { return name; }