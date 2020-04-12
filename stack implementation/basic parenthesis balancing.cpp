#include<iostream>
#include<vector> 
#include<stack>
#include<string>
using namespace std;
void isbalanced(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='{'||s[i]=='[')
        {
            st.push(s[i]);
        }
        if(st.empty())
        {
            cout<<"failure"<<endl;
        }
        if(s[i] == ')')
        {
            int top = st.top();
            st.pop();
            if(top == '{' || top== '[' )
            {
                cout<<"failure"<<endl;
            }
        }
        if(s[i]== '}')
        {
            int top = st.top();
            st.pop();
            if(top=='('||top=='[')
            {
                cout<<"failure"<<endl;
            }
        }
        if(s[i]== ']')
        {
            int top = st.top();
            st.pop();
            if(top=='{'||top=='(')
            {
                cout<<"failure"<<endl;
            }
        }
    }
        
        
        if(st.empty())
            {
                cout<<"success"<<endl;
            }
        
        
    
}
int main(){
    string s = "{()}[]";
    isbalanced(s);
    
}