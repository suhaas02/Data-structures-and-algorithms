//check for bst


#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

//1st approach //efficient
// bool isBst(node *root,int min,int max)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     return (root -> key > min && root -> key < max && isBst(root -> left,min,root -> key) && isBst(root -> right,root -> key,max));
    
// }

//2nd approach
//inorder traversal
bool isBst(node *root,int min,int max)
{
    
}

int main() {
	
	node *root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
	if(isBst(root,INT_MIN,INT_MAX))  
        cout<<"Is BST";  
    else
        cout<<"Not a BST";  
	
	return 0;
}

 
