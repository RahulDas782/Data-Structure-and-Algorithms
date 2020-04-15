#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int a,b,n=0;
    cin>>a>>b;
    for(int i=0;i<a+b;i++)
    {
        a = a*3;
        b = b*2;
        n++;
        if(a>b)
        {
            break;
        }
        
    }
    cout<<n;
        
}