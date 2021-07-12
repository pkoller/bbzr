#include "Playr.h"


Playr::Playr(string n) {
	cout << "Player mit name erstellt\n";
	health = 100;
	name = n;
}
Playr::Playr()
{
}

void Playr::printHealth()
{
	cout << name << "'s  health: " << health << endl;
}
void Playr::consume(Item i)
{
	health += i.energy;
}

void Playr::attack(Playr* other)
{
	other->health -= 10;
}
void Playr::attack(Playr* other, Weapon w) {
	other->health -= w.GetStrength();
}