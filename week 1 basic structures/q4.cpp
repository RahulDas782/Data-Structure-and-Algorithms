#include <iostream>
#include<stack>
using namespace std;
void push_stack(stack<pair<int,int>> &s,int x)
{
    if(s.empty())
    {
        s.push({x,x});
    }
    else
    {
        s.push({x,max(x,s.top().second)});
    }
}
void pop_stack(stack<pair<int,int>> &s)
{
    s.pop();
}
int max_stack(stack<pair<int,int>> &s)
{
    return s.top().second;
}
int main()
{
    stack<pair<int,int>> s;
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            push_stack(s,stoi(value));
        }
        else if (query == "pop") {
            pop_stack(s);
        }
        else if (query == "max") {
            cout << max_stack(s) << "\n";
        }
        
    }
    return 0;
}