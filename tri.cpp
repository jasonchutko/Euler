#include <iostream>
#include <stdio.h>

int table[15][15];

using namespace std;

int total = 0;

void search(int x, int y, int count)
{
	if(x == 14)
	{
		if(total < count + table[x][y])
		{
			count += table[x][y];
			total = count;
		}
	}
	else
	{
		if(y <= x)
		{
			search(x+1, y + 1, count + table[x][y]);
			search(x+1, y, count + table[x][y]);
		}
	}

}

int main()
{
	freopen("tri.txt", "r", stdin);
	
	for(int x = 0; x < 15; x++)
	{
		for(int y = 0; y <= x; y++)
		{
			cin >> table[x][y];
		}
	}

	search(0,0,0);
	
	cout << total << "\n";
}
