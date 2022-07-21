//printing the nodes at distance K

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

void printNode(node *root,int k)
{
    if (root == NULL)
    {
        return;
    }
    if (k == 0)
    {
        cout<<(root -> key)<<" ";
    }
    else
    {
        printNode(root -> left, k - 1);
        printNode(root -> right, k - 1);
    }
    
}



int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    int k;
    cin>>k; //k = distance
    printNode(root,k);
    return 0;
}