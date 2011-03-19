#include <iostream>

using namespace std;


int count = 0;

void findPath(int x, int y)
{
if(x == 2 && y == 2)
count++;

else
{
if(x < 2)
{
findPath(x+1,y);
}
if(y < 2);
findPath(x,y+1);
}
}


int main()
{

findPath(0,0);
cout << count;
}
