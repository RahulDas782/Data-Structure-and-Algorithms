#include<iostream>
#include<vector>
using namespace std ;
vector<int> stack(100);
int n = 100;
int top = -1;

void push(int val)
{
    if(top>=n)
    {
        cout<<"satck overflow"<<endl;
    }
    else
    {
        top++;
        stack[top] = val;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"popped out element"<<stack[top]<<endl;
        top--;
    }
}

void display()
{
    if(top == -1)
    {
        cout<<"stack empty";
    }
    else
    {
        while(top == -1)
        {
            cout<<"the elemetn is "<<stack[top]<<endl;
            top--;
        }
    }
    
}  
int main()
{
    int x, val;
    do{
        cout<<"enter hte choice"<<endl;
        cin>>x;
        switch (x)
        {
        case 1:
            cout<<"enter to push"<<endl;
            cin>>val; 
            push(val);
            break;
        case 2 :
            cout<<"pop"<<endl;
            pop();
            break;
        case 3:
            cout<<"display";
            display();
            break;
        case 4: {
            cout<<"Exit"<<endl;
            break;
         }
        
        default:
            cout<<"invalid choice";
            break;
        }
    }while(x!=4);
}

