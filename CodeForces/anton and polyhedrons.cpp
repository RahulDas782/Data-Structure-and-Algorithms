//https://codeforces.com/problemset/problem/785/A
#include<iostream>
#include<string>
using namespace std;

int main(
    int k=0
    int tt;
    cin>>tt;
    while(tt--){
    string s;
    cin>>s;
    if(s == "Tetrahedron"){
        k = k+4;
    }
    if(s=="Cube")
    {
        k = k+4;
    }
    if(s=="Octahedron")
    {
        k = k+8;
    }
    if(s=="Dodecahedron")
    {
        k =k +12;
    }
    if(s == "Icosahedron")
    {
        k = k+20;
    }
}
cout<<k;


)