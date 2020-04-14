//https://codeforces.com/contest/1335/problem/B
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        string s(a,' ');
        for(int i =0;i<a;i++) s[i] = (char) ('a' + i%b);
        for(int i=0;i<n;i++) cout<<s[i%a];
        cout<<endl;
    }
}