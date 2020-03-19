  
//Binary Exponentiation
#include<bits/stdc++.h>
using namespace std;
int powfind(int base, int power,int mod){
 int res=1;
 while(power!=0){
   if(power%2==0){
      power/=2;
      base=(base*base)%mod;
   }
   else{
       res=(res*base)%mod;
       power--;
   }
 }
 return res;
}
int main(){
int base, power,mod;
cin>>base>>power>>mod;
cout<<powfind(base,power,mod)<<endl;
return 0;

}
