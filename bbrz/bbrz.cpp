
#include "Playr.h"
using namespace std;

int main()
{
	Playr p("philipp");
	Playr p2("player2");
	Playr p3;

	Weapon w1(50);


	p.printHealth();
	p2.printHealth();

	Item i;
	i.energy = 5;

	p.consume(i);
	p2.consume(i);

	p.printHealth();
	p2.printHealth();

	p2.attack(&p);

	p.printHealth();
	p2.printHealth();

	p2.attack(&p, w1);

	p.printHealth();
	p2.printHealth();
}

