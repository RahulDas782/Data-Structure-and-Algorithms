#include<iostream>
#include<queue>
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
int findheight(Bstnode* root)
{
    if(root==NULL)
    {
        return -1;
    }
    else{
        return max(findheight(root->left),findheight(root->right)) + 1;
    }
}
void levelorder(Bstnode* root)
{
    if(root==NULL)
    {
        return ;
    }
    else{
        queue<Bstnode* > Q;
        Q.push(root);
        
        while(!Q.empty())
        {
            Bstnode* current = Q.front();
            cout<<current->data<<endl;
            Q.pop();
            if(current->left!=NULL) Q.push(current->left);
            if(current->right!=NULL) Q.push(current->right);
        }
    }
}
void preorder(Bstnode* root)
{
    if(root==NULL) return ;
    cout<<root->data<<endl;
    preorder(root->left);
    preorder(root->right);
}
void postorder(Bstnode* root)
{
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
void inorder(Bstnode* root)
{
    if(root==NULL) return;
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
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
    
}



