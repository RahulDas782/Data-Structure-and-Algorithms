//Program to for Primality Test in O(nlogn)
#include<bits/stdc++.h>
using namespace std;
vector<int> primes(10000,1);
void preprocess(){
primes[0]=primes[1]=0;    //1 and 0 can't be prime numbers;
for(int i=2;i<=primes.size();i++){
 if(primes[i]==1){
 for(int j=i*i;j<=primes.size();j+=i){
   primes[j]=0;
  }
 }
}
int main(){
int n;
cin>>n;
if(primes[n]==1){
cout<<"Prime""<<endl;}
else{
cout<<"Not Prime"<<endl;
}
return 0;
}
//Time complexity for every query O(1)
//Effective Time Complexity : O(NlogN) //For N queries//
