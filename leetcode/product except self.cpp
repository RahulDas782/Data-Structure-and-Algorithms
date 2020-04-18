#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    vector<int> prefix_product;
    prefix_product.push_back(1);
    for(int x:nums)
    {
        prefix_product.push_back(prefix_product.back() * x);
    }

    vector<int> suffix_product(n+1);
    int suffix_product[n] = 1;
    for(i = n-1;i>=0;i--)
    {
        suffix_product[i] = suffix_product[i+1] * nums[i];
    }
    vector<int> answer(n);
    for(int i;i<n;i++)
    {
        answer[i] = prefix_product[i] * suffix_product[i+1]; 
    }

}
