// next_permutation
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
	int myints[] = {0,1,2,3,4,5,6,7,8,9};

	for(int x = 1; x < 1000000; x++)
	{
		next_permutation (myints,myints+10);
	}

	for(int x = 0; x < 10; x++)
	{
		cout << myints[x];
	}

	cout << "\n";
	
    return 0;
}
