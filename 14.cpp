#include <iostream>

using namespace std;

int numAtMax = 13;
int maxSteps = 10;


int main()
{

for(int x = 13; x < 1000000; x++)
{    
	unsigned long num = x;

	int steps = 1;

	while(num != 1)
	{
		if(num % 2 == 0)
		{
			num /= 2;
			steps ++;
		}
		else
		{
			num = (num * 3) + 1;
			steps++;    
		}             
	}

	if(steps > maxSteps)
	{
		maxSteps = steps;
		numAtMax = x;
	}
}


cout << numAtMax;

return 0;
}
