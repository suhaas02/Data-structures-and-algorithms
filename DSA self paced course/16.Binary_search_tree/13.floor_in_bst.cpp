//floor operation on bst

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

node *floor(node *root,int x)
{
    node *res = NULL;
    while (root != NULL)
    {
        if(root -> key == x)
        {
            return root;
        }
        else if (root -> key > x)
        {
            root = root -> left;
        }
        else
        {
            res = root;
            root = root -> right;
        }
        
    }
    //cout<<res -> key<<endl;
    return res;
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
    cout<<floor(root,x) -> key<<endl;
    return 0;
}