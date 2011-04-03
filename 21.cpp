#include <iostream>

using namespace std;

int d(int num)
{
	int divisorSum = 0;
	for(int y = 1; y < num/2 + 1; y++)
	{
		if(num % y == 0)
		{
		divisorSum += y;
		}
	}
	return divisorSum;
}

int main()
{
	int totalSum = 0;

	for(int x = 1; x < 10000; x++)
	{
		if(x == d(d(x)) && x != d(x))
		{
			totalSum += x;
		}
	} 

	cout << totalSum;
	return 0;
}
