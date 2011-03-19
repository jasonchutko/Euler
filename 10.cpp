#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;

long long count = 0;

void runEratosthenesSieve(int upperBound) {
      int upperBoundSquareRoot = (int)sqrt((double)upperBound);
      bool *isComposite = new bool[upperBound + 1];
      memset(isComposite, 0, sizeof(bool) * (upperBound + 1));
      for (int m = 2; m <= upperBoundSquareRoot; m++) {
            if (!isComposite[m]) {
                  count += m;
                  for (int k = m * m; k <= upperBound; k += m)
                        isComposite[k] = true;
            }
      }
      for (int m = upperBoundSquareRoot; m <= upperBound; m++)
            if (!isComposite[m])
                  count += m;
      delete [] isComposite;
}

int main()
{
runEratosthenesSieve(2000000);
cout << count << "\n";
}
