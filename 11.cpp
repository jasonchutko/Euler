#include <iostream>
#include <stdio.h>

using namespace std;

int data[20][20];

int prod = 0;

int main()
{
freopen ("11data.txt","r",stdin);

for(int y = 0; y < 20; y++)
	for(int x = 0; x < 20; x++)
		cin >> data[x][y];


//check up/down
for(int y = 0; y < 16; y++)
{
	for(int x = 0; x < 20; x++)
	{
		if(data[x][y] * data[x][y+1] * data[x][y+2] * data[x][y+3] > prod)
			prod = data[x][y] * data[x][y+1] * data[x][y+2] * data[x][y+3];
	}
}


//check left/right
for(int y = 0; y < 20; y++)
{
	for(int x = 0; x < 16; x++)
	{
		if(data[x][y] * data[x+1][y] * data[x+2][y] * data[x+3][y] > prod)
			prod = data[x][y] * data[x+1][y] * data[x+2][y] * data[x+3][y];
	}
}

//check diagonal right to left
for(int y = 0; y < 16; y++)
{
	for(int x = 20; x > 4; x--)
	{
		if(data[x][y] * data[x-1][y+1] * data[x-2][y+2] * data[x-3][y+3] > prod)
		prod = data[x][y] * data[x-1][y+1] * data[x-2][y+2] * data[x-3][y+3];
	}
}

//already found answer, but continue below

//check diagonal left to right
for(int y = 0; y < 16; y++)
{
	for(int x = 0; x < 16; x++)
	{
		if(data[x][y] * data[x+1][y+1] * data[x+2][x+2] * data[x+3][y+3] > prod)
		prod = data[x][y] * data[x+1][y+1] * data[x+2][x+2] * data[x+3][y+3];
	}
}

cout << prod;

fclose(stdin);

return 0;
}
