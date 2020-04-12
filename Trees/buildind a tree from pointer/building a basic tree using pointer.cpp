#include<iostream>
using namespace std;
struct Bstnode
{
    int data;
    Bstnode* left;
    Bstnode* right; 
};

Bstnode* get_new_node(int data)
{
    Bstnode* new_node = new Bstnode();
    new_node->data = data;
    new_node->left = new_node->right = NULL;
    return new_node;
}
Bstnode* insert(Bstnode* root, int data)
{
    if(root == NULL)
    {
        root = get_new_node(data);
        return root;
    }
    else if(data <= root->data)
    {
        root->left = insert(root->left,data);
    }
    else
    {
        root->right = insert(root->right,data);
    }
    
    return root;
}  
bool search(Bstnode* root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        return true;
    }
    else if(data<=root->data)
    {
        return search(root->left,data);
    }
    else
    {
        return search(root->right,data);
    }
      
}
int main(){
    Bstnode* root = NULL;
    root = insert(root,15);
    root = insert(root,10);
    root = insert(root,20);
    root = insert(root,25);
	root = insert(root,8);
	root = insert(root,12);
    int number;
    cout<<"enter the number to be found";
    cin>>number;
    if(search(root,number)==true)
    {
        cout<<"found";
    }
    else
    {
        cout<<"not found";
    }
    

}