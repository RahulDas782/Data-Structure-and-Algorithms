//The following program is used to determine if a graph has a hamintonian path i.e. each node is visited exactly once,in O(n!) time,
//this can be reduced to O(n^2*2^n) time using DP(Later).
#include<bits/stdc++.h>
using namespace std;
vector<int> graph[10000];
bool istrue=false;
vector<bool> vis(10000,false);
void hamint(int src, int vtxcount,int vc){
	if(vc==vtxcount-1){
		istrue=true;
	}
 vis[src]=true;
 for(int j=0;j<graph[src].size();j++){
	 if(!vis[graph[src][j]]){
		 hamint(graph[src][j],vtxcount,vc+1);
	 }
 }
} //Checks every possible path that may exist in the said graph.
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
 hamint(0,n,0);
 if(istrue){
	 cout<<"YES"<<endl;
 }
 else{
	 cout<<"NO"<<endl;
 }
}
