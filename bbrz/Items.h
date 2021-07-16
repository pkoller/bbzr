#pragma once

class Item
{
public:
	Item(int initialEnergy)
	{
		energy = initialEnergy;
	}

	int getEnergy()
	{
		int temp = energy;
		energy = 0;
		return temp;
	}
private:
	int energy;
};


class Weapon 
{
public:
	Weapon(int s);
	Weapon();

	int GetStrength();

private:
	int strength;

};



