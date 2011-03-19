#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int num = 1;
	int at = 1;

	int count = 1;

	for(int x = 1; x < 501; x++)
	{
		for(int y = 0; y < 4; y++)
		{
			at += count * 2;
			num += at;
		}
		count++;
	}

	cout << num << "\n";
	return 0;
}
