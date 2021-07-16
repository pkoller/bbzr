#include "Items.h"


Weapon::Weapon(int s)
{
	strength = s;
}

Weapon::Weapon()
{
	strength = 1;
}


int Weapon::GetStrength()
{
	return strength;
}