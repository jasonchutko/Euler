#include <iostream>

using namespace std;

int main()
{
int count = 0;
int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int dayOfWeek = 2; //1, = monday, 2 = tuesday, 3 = wednesday, 4 = thursday, 5 = friday, 6 = saturday, 7 = sunday

for(int year = 1; year <= 100; year++)
{
	if((year + 1900) % 4 == 0)
	{
		months[1] = 29;
	}

	else
	{
		months[1] = 28;
	}

	for(int month = 0; month < 12; month++)
	{
		if(dayOfWeek == 7)
		{
			cout << month + 1 << " " << year + 1900 << "\n";
			count++;
		}

		if((months[month] % 7) + dayOfWeek > 7)
		{
			dayOfWeek = (months[month] % 7) + dayOfWeek - 7;
		}

		else
		{
			dayOfWeek += months[month] % 7;
		}
	}
}

cout << "\n" << count << "\n";
}
