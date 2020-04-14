#include<iostream>
#include<queue>
using namespace std;
struct Bstnode{
    int data;
    Bstnode* left;
    Bstnode* right;
};
//delete a node 

Bstnode* GetNewNode(int data) {
	Bstnode* newNode = new Bstnode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}
Bstnode* findmin(Bstnode* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}


Bstnode* Insert(Bstnode* root,int data) {
	if(root == NULL) { // empty tree
		root = GetNewNode(data);
	}
	// if data to be inserted is lesser, insert in left subtree. 
	else if(data <= root->data) {
		root->left = Insert(root->left,data);
	}
	// else, insert in right subtree. 
	else {
		root->right = Insert(root->right,data);
	}
	return root;
}
/*
bool issubtreelesser(Bstnode* root,int value)
{
    if(root==NULL) return true ;
    if(root->data<=value && issubtreelesser(root->left,value)
    &&issubtreelesser(root->right,value))
    {
        return true;
    }

}
bool issubtreegreater(Bstnode* root, int value)
{
    if(root==NULL) return true;
    if(root->data>=value && issubtreegreater(root->left,value)
    &&issubtreegreater(root->right,value))
    {
       return true; 
    }
    else return false;
}
bool isbst(Bstnode* root)
{
    if (root==NULL) return true;
    if(issubtreegreater(root->left,root->data)&&issubtreegreater(root->right,root->data)
    &&isbst(root->left)&&isbst(root->right))
    {
        return true;
    }
    else return false;
}
*/

struct Bstnode* Delete(struct Bstnode* root,int data)
{
    if(root==NULL) return root;
    else if(data<root->data) root->left = Delete(root->left,data);
    else if(data>root->data) root->right = Delete(root->right,data);
    else
    {
        //case 1: no child
        if(root->right==NULL&&root->left==NULL)
        {
            delete root;
            root = NULL;
            return root;
        }
        //case 2: 1 child
        else if(root->left==NULL)
        {
            struct Bstnode* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right==NULL)
        {
            struct Bstnode* temp= root;
            root = root->left;
            delete temp;
        }
        else
        {
            struct Bstnode* temp = findmin(root);
            root->data=temp->data;
            root->right = Delete(root->right,temp->data);
        }
    }

}
int main() {
	Bstnode* root = NULL;  // Creating an empty tree
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
    //call as per your requirements
    root = Delete(root,5);
}



