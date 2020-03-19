#include<bits/stdc++.h>
using namespace std;
struct graph{
    int u=0;
    int v=0;
    int w=0;
    graph(int u, int v, int w){
        this->u=u;
        this->w=w;
        this->v=v;
    }
    graph(){

    }
};
graph arr[10000000];
void bford(int e, int v){
 vector<int> dis(v,INT_MAX);
 dis[0]=0;
 for(int i=0;i<v-1;i++){
     for(int j=0;j<e;j++){
         if(dis[arr[j].u]+arr[j].w< dis[arr[j].v]){
             dis[arr[j].v]=dis[arr[j].u]+arr[j].w;
         }
     }
 }
 for(int i=1;i<dis.size();i++){
     cout<<dis[i]<<" ";
 }
}




int main(){
    int v,e;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
        u--;
        v--;
        arr[i].u=u;
        arr[i].v=v;
        arr[i].w=w;
    }
    bford(e,v);
}
//Time complexity is O(V^3)_\/_ 
