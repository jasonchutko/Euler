#include <iostream>

using namespace std;

int main()
{
	int count = 0;
	for(int x = 1; x < 1000; x++)
		if(x % 3 == 0 || x % 5 == 0)
			count += x;
	cout << count << "\n";
	return 0;
}
