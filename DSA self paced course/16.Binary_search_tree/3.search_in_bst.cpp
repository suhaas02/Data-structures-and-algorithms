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

//recursive approach 
// bool search(node *root,int x)
// {
//     if (root == NULL)
//     {
//         return false;
//     }
//     else if (root -> key == x)
//     {
//         return true;
//     }
//     else if (root -> key > x)
//     {
//         return search(root -> left,x);
//     }
//     else
//     {
//         return search(root -> right,x);
//     }
    
// }


//iterative solution
bool search(node *root,int x)
{
    while (root != NULL)
    {
        if (root -> key == x)
        {
            return x;
        }
        else if (root -> key < x)
        {
            root = root -> right;
        }
        else
        {
            root = root -> left;
        }
        
        
    }
    return false;
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
    if(search(root,x))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
    return 0;
}