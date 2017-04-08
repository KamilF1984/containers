#include <iostream>
#include <array>
#include <vector>
#include <list>
#include "auto.hpp"

using namespace std;

int main ()
{

	std::list<int> mylist;
	std::list<int>::iterator it;

	for (int i=0; i<5; ++i) 
		mylist.push_back(i+1); // 1 2 3 4 5

	for (auto e : mylist)
	{
		cout <<  e << " ";
	}	cout << endl;

	it = mylist.begin();
	++it;

	mylist.insert(it,10); 
	mylist.insert(it,2,20); 

	//range loop
	for (auto e : mylist)
	{
		cout <<  e << " ";
	}

	cout << endl;

	return 0;
}
