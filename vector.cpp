#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
#include "auto.hpp"

using namespace std;

int main ()
{
	std::vector<car*> c;

	c.push_back(new BMW("black", 150));
	c.push_back(new VW("white", 70));
	c.push_back(new AUDI("blue", 120));

	for (auto e : c)
	{
		e->go();
	}

	for (auto e : c)
	{
		delete e;
	}

	c.clear();

	for (auto e : c)
	{
		delete e;
	}

	cout << endl;

	return 0;
}
