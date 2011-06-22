#include <iostream>

using namespace std;

int main()
{
	int counter = 0;
	int num = 0;

	int a[1000];
	bool check[1000][1000];

	for (int x = 0; x < 1000; x++)
	{
		a[x] = 0;
	}

	for(int x = 0; x < 1000; x++)
	{
		for(int y = 0; y < 100; y++)
		{
			check[x][y] = false;
		}
	}


	for(int x = 0; x < 1000; x++)
	{
		for(int y = 0; y < 1000; y++)
		{
			double p = sqrt((x*x) + (y*y));
			if(p == floor(p) && (p + x + y) < 1000)
			{
				if(x < y || x == y)
				{
					if(check[x][y] == false)
					{
						check[x][y] = true;
						a[x+y+(int)p]++;
					}
				}
				else
				{
					if(check[y][x] == false)
					{
						check[y][x] = true;
						a[x+y+(int)p]++;
					}
				}
			}
		}
	}

	for(int x = 0; x < 1000; x++)
	{
		if(a[x] > counter)
		{
			counter = a[x];
			num = x;
		}
	}

	cout << num;

	return 0;
}