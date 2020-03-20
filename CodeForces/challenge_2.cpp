//https://codeforces.com/contest/1326/problem/B
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    long long x = 0 ;
    vector<long long> b(n);
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        b[i] = b[i]+x;
        x = max(x,b[i]);
        cout<<b[i]<<" ";
    }  
}
