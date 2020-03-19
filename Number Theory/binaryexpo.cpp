//Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;
int powfind(int base, int power){
 int res=1;
 while(power!=0){
   if(power%2==0){
      power/=2;
      base*=base;
   }
   else{
       res*=base;
       power--;
   }
 }
 return res;
}
int main(){
int base, power;
cin>>base>>power;
cout<<powfind(base,power)<<endl;
return 0;

}
//Ability to find power in O(Nlog(logN))
