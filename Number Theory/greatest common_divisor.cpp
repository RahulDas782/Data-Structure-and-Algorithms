#include <iostream>
using namespace std;
//this is a naive approach for gcd. this sucks and is not effecient 
long long  gcd_naive(long long a, long long b) {
  long long current_gcd = 1;
  for (long long d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}
//this is an effecient approach for gcd by euclid's therem.
long long  euclidgcd(long long a,long long b)
{
//if b is zero as zero divides everything therefore a will be divided by gcd ie a only 
  if(b==0)
  {
    return a;
  }
  else
  {
    long long a_prime = a%b;
    //a recursive call as after only a few steps rather than naive solution , it will give b as a tiny zero which will make
    //if condition true .
    return euclidgcd(b,a_prime);
  }
  


}



int main() {
  long long a, b;
  cin >> a >> b;
  cout<<euclidgcd(a,b);
  return 0;
}
