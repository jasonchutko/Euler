#include <iostream>

using namespace std;


  long long L = 100000000;

  long long gcd(long long m, long long n) {
    if (m < n) { long long t = m; m = n; n = t; }
    long long r = m % n;
    if (r == 0) return n;
    else return gcd(n, r); }

  long long incenterCase(){
    long long count = 0;
    for(long long n = 1; n < L/2; n++)
      for(long long m = 1; m < n; m++){
        if((m+n) % 2 == 0) continue;
        if(gcd(m,n)!=1) continue;
        long long b = n*n - m*m;
        long long d = 2*n*m;
        long long sum = b+d;
        if(sum >= L) break;
        if(b == d) count += L/sum;
        else count += 2*(L/sum); }
    return count; }

  long long parallelCase(){
    long long count = 0;
    for(long long n = 1; n < L; n+=2)
      for(long long m = 1; m < L; m++){
        if(gcd(m,n)!=1) continue;
        long long g = 2*n*m;
        long long a = n*n + 2*m*m;
        long long b = g+a;
        if(b > L/2) break;
        count += (L-1)/(2*b); }
    return count; }

int main()
{
    long long p = incenterCase() + parallelCase();
    cout << p;
    cin >> p;
}

