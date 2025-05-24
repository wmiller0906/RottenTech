#include "npc.h"
#include "item.h"

/////////////////////////////////////////////////////////
//* NPC f(x)'s' *//

double NPC::checkHP() const { return HP; }
double& NPC::getHPRef() { return HP; }
Gun* NPC::getGun() const { return currentGun; }