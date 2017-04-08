#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <map>
#include "auto.hpp"

using namespace std;

enum R{
R_OK = 0,
R_MEMORY,
R_FATAL
};

int main ()
{
	std::map<int,string> c;
	c[0] = "R_OK";
	c[1] = "R_MEMORY";
	c[2] = "R_FATAL";

	int error = 1;

	cout << c[error] << endl;

	string s = c[3];

	for (auto e : c)
	{
		cout <<  e.second << " ";
	}

	cout << endl;

	return 0;
}
