#include<bits/stdc++.h>
using namespace std;
vector<int> parent(10000,-1);
void union(){
  par[a]=b;
}
int parfind(int a){
 if(par[a]<0){
   return a;
 }
 return parfind(par[a]);
}
int main(){
 int n,m;
 cin>>n>>m;
 for(int i=0;i<m-1;i++){
   int u,v;
   cin>>u>>v;
   int a= parfind(u);
   int b=parfind(v);
   if(a!=b)
    union(a,b);
 }
 return 0;
}
