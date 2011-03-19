#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;



int main()
{

for(int x = 1; x < 1000; x++)
{
	for(int y = 1; y < 1000; y++)
	{
		if(sqrt(pow(x,2) + pow(y,2)) == round(sqrt(pow(x,2) + pow(y,2))))
		{
			if(x + y + sqrt(pow(x,2) + pow(y,2)) == 1000)
			//cout << x << " " << y << " " << sqrt(pow(x,2) + pow(y,2)) << "\n";
			cout << x * y * sqrt(pow(x,2) + pow(y,2)) << "\n";
			printf("%d",cout << x * y * sqrt(pow(x,2) + pow(y,2)));
		}
	}

}

}
