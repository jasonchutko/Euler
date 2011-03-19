#include <iostream>

using namespace std;

bool table[1000][1000][1000];
int perim[1001];

int main()
{

for(int x = 0; x <= 1000; x++) //all perimeters set to 0
{
perim[x] = 0;
}

for(int x = 1; x <= 998; x++)
{
for(int y = 1; y <= 998; y++)
{
for(int z = 1; z <= 998; z++)
{
table[x][y][z] = 0; //havent reached any spots yet
}
}
}

for(int x = 1; x <= 998; x++)
{
for(int y = 1; y <= 998; y++)
{
for(int z = 1; z <= 998; z++)
{
if(x+y+z <= 1000) //within domain of P
{
if(table[x][y][z] != 0) {} // <----
else if(table[x][z][y] != 0) {}
else if(table[y][x][z] != 0) {}
else if(table[y][z][x] != 0) {}//hasn't been seen before
else if(table[z][x][y] != 0) {}
else if(table[z][y][x] != 0) {} // --->

else
{
perim[x+y+z] += 1; //add occurance to the perimeter
table[x][y][z] = 1; //set it to being seen
}
}
}
}
}

int highest = 0;
int num = 0;



for(int x = 1; x <= 1000; x++)
{
if(perim[x] > highest) //higher then current top
highest = perim[x]; //set new high
num = x; //show where it was
}


//cout << num << " " << highest << "\n";
cout << perim[120] << "\n";
return 0;
}
