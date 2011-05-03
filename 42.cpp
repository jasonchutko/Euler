#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

bool isTriangle(int a)
{
	double f = (-1 + sqrt(1 + 4*(a*2))) / 2;
	if(f/1.00 == (int)f)
		return true;

	else
		return false;
}

int main()
{
string data;

freopen("42data.txt", "r", stdin);
cin >> data;
fclose(stdin);

int count = 0;
int tempSum = 0;

for(int x = 0; x < data.length(); x++)
{
	if((int)data.at(x) < 65 || (int)data.at(x) > 90)
	{
		if(tempSum != 0)
		{
			if(isTriangle(tempSum) == true)
				count++;
		}
		tempSum = 0;
	}
	else
		tempSum += (int)data.at(x) - 64;
}
cout << count << "\n";
return 0;
}
