#pragma once

#include <iostream>
#include"Weapon.h"
using namespace std;


class Item
{
public:
	int energy;
};

class Playr
{
public:
	Playr(string n);
	Playr();

	void printHealth();
	void consume(Item i);

	void attack(Playr* other);
	void attack(Playr* other, Weapon w);


private:
	int health;
	string name;
};

