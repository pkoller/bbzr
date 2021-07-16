#pragma once

#include <iostream>
#include"Items.h"
using namespace std;


class Playr
{
public:
	Playr(string n);
	Playr();

	void printHealth();
	void consume(Item* i);

	void attack(Playr* other);
	void attack(Playr* other, Weapon w);


private:
	int health;
	string name;
};