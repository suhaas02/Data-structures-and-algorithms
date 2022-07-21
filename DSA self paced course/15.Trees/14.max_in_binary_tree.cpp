//finding the maximum elemnent in binary tree

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    struct node *left;
    struct node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

int maxEle(node *root)
{
    if (root == NULL)
    {
        return INT_MIN;
    }
    else
    {
        return max(root -> key,(max(maxEle(root -> left), maxEle(root -> right))));
    }
    
}



int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    cout<<maxEle(root);
    return 0;
}