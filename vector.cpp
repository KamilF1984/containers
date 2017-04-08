#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main ()
{
	std::vector<int> myvector (10);

	for (unsigned i=0; i<myvector.size(); i++) 
		myvector[i]=i;

	for (int i = 0 ; i < myvector.size() ; ++i)
	{
		cout << myvector[i] << " ";
	}

	cout << endl;

	for (int e : myvector)
	{
		cout << e << " ";
	}

	cout << endl;

	for (auto it = myvector.begin() ; it != myvector.end(); ++it)
	{
		cout << *it << " ";
	}	

	cout << endl;

	return 0;
}
