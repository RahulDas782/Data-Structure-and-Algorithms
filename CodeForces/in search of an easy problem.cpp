#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
   
    
        int n;
        int c;
        cin>>n;
        int flag = -1;
        for(int i=0;i<n;i++){
            cin>>c;
            if(c!=0){
            flag = 0;
            break;
            }
        }
        if(flag==0)
        cout<<"HARD";
        else
        cout<<"EASY";
        
        
    }
