//check for balanced binary tree

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int key;
    struct node *left;
    struct node *right;
    node(int x)
    {
        key = x;
        left = right = NULL;
    }
};


// //recursive solution
// node *insert(node *root,int x)
// {
//     if (root == NULL)
//     {
//         return new node(x);
//     }
//     else if (root -> key < x)
//     {
//         root -> right = insert(root -> right,x);
//     }
//     else if (root -> key > x)
//     {
//         root -> left = insert(root -> left,x);
//     }
//     return root;
    
    
// }

//iterative approach
node *insert(node *root, int x){
    node *temp=new node(x);
    node *parent=NULL,*curr=root;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>x)
            curr=curr->left;
        else if(curr->key<x)
            curr=curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key>x)
        parent->left=temp;
    else
        parent->right=temp;
    return root;
} 




int main()
{
    node *root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
    int x;
    cin>>x;
    if(insert(root,x))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
    return 0;
}