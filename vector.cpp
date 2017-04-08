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

	for (auto it = mylist.begin() ; it != mylist.end();  ++it)
	{
		cout <<  *it << " ";
	}	

	cout << endl;

	//range loop
	for (auto e : mylist)
	{
		e = 0;
		cout <<  e << " ";
	}

	cout << endl;

	for (int e : mylist)
	{
		cout <<  e << " ";
	}

	cout << endl;

	return 0;
}
