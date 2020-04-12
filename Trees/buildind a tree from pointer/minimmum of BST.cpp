#include<iostream>
using namespace std;
struct Bstnode{
    int data;
    Bstnode* left;
    Bstnode* right;
};

Bstnode* GetNewNode(int data) {
	Bstnode* newNode = new Bstnode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

int findmin(Bstnode* root)
{
    if(root==NULL)
    {
        cout<<"the tree is empty";
        return -1;
    }
    else{
        while(root->left!=NULL)
        {
            root = root->left;
        }
    }
    return root->data;
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


int main() {
	Bstnode* root = NULL;  // Creating an empty tree
	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);
    cout<<findmin(root);
}
