#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

int count = 0; //equal 11 = stop

bool prime = true;

int sum = 0;

bool isPrime (int num)
{
    if (num <=1)
        prime = false;
    else if (num == 2)         
        prime = true;
    else if (num % 2 == 0)
        return false;
    else
    {
        bool prime = true;
        int divisor = 3;
        double num_d = static_cast<double>(num);
        int upperLimit = static_cast<int>(sqrt(num_d) +1);
        
        while (divisor <= upperLimit)
        {
            if (num % divisor == 0)
                prime = false;
            divisor +=2;
        }
        prime = true;
    }
}


void runEratosthenesSieve(int upperBound) {
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      for (int m = 8; m <= upperBoundSquareRoot; m++) {
            if (!isComposite[m]) {
                  truncate(m);
                   for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
      }
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)
            if (!isComposite[m])
                  truncate(m);
      delete [] isComposite;
}


//truncate from right to left
void truncate(int num)
{
int tempA = num;
while(tempA > 10 && prime == true)
{
isPrime(floor(tempA / 10));
tempA = floor(tempA/10);
}

int places = 0;
int tempB = num;
while(floor(tempB / 10) > 10)
{
places++;
tempB = floor(tempB/10);
}

for(int x = 0; x < places; x++)
{
isPrime(tempB % pow(10, places));
tempB = tempB % pow(10, places);
}

}


if(prime == true)
sum += num

}

int main()
{
runEratosthenesSieve(2000000);
cout << count << "\n";
}
