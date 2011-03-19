#include <iostream>

using namespace std;

int check(int a, int b)
{

if(a % b == 0 && b == 1)
{
return a;
}
else
{

if(a % b != 0)
{
check(a + 1, 20);
}

if(a % b == 0 && b != 1)
{
cout << a << " " << b << "\n";
check(a, b - 1);
}

}

}

int main()
{



cout << check(2000, 20);

}
