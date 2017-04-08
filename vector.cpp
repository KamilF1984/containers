#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
#include "auto.hpp"

using namespace std;

// Auta
// Klienci 
// rentals
// back


// List with [] on top of std::list 

template <T t>
class List
{
	public:
	t& operator[](index);
	//private:
	std::list<t> myList;
}

// 2 wymiarowa tablica dynamiczna


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
