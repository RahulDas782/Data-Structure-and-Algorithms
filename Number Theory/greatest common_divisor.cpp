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
//Derived from Euclid's Divison Lemma
//If we are given two positive integers A,B then A= B*q+r;
long long euclidfather(long long a,long long b){
   if(b==0){
     return a;
     }
 return (a>b? euclidfather(a-b,b):euclidfather(a,b-a));   //In later cases Modulus handled this exception
} 
long long  euclidgcd(long long a,long long b)
{
//if b is zero as a divides 0 therefore a will be divided by gcd ie a only 
  if(b==0)
  {
    return a;
  }
      //a recursive call as after only a few steps rather than naive solution , it will give b as a tiny zero which will make
    //if condition true .
    return euclidgcd(b,a%b);
}



int main() {
  long long a, b;
  cin >> a >> b;
  cout<<euclidfather(a,b);
  return 0;
}
