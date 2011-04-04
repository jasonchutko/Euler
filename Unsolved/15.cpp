#include <iostream>

using namespace std;

int count = 0;

void move(int x, int y)
{
	if(x == 2 && y == 2)
	{
	count++;
	}
	else
	{
		if(x == 2)
		{
			move(x, y+1);
		}
		
		else if(y == 2)
		{
			move(x+1, y);
		}
		
		else
		{
			move(x+1,y);
			move(x,y+1);
		}
	}
}

int main()
{
	move(0,0);
	cout << count;
	cin >> count;
}