//Prime Factorisation in O(nlogn) using Sieve of Eranthoses
#include<bits/stdc++.h>
using namespace std;
vector<int> primes(10000,-1);
void preprocess(){
 primes[0]=primes[1]=2; //Random positive integer denoting they are not prime;
for(int i=2;i<=primes.size();i++){
  if(primes[i]==-1)
  for(int j=i;j<=primes.size();j+=i){
     primes[j]=i;
  }
 }
}
void primefactoriser(int n){
  while(n>1){
   cout<<primes[n]<<" ";
   n/=primes[n];
  }
}
int main(){
preprocess();
int n;
cin>>n;
primefactoriser(n);
return 0;
}
