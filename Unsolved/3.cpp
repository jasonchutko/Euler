#include <iostream>
#include <math.h>

using namespace std;

int main()
{
int sumofsquares = 0;
int squareofsum = 0;
int sum = 0;

for(int x = 1; x <= 100; x++)
{
sum += x;
sumofsquares += pow(x,2);
}

squareofsum = pow(sum,2);

cout << squareofsum - sumofsquares;


}
