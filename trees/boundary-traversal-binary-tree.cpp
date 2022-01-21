//boundary traversal of a binary tree
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left, *right;
};
void printLeaves(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    printLeaves(root -> left);
    if (!(root-> left) && !(root -> right))
    {
        cout<<root->data;
    }
    printLeaves(root -> right);
}

//function to print all leaf nodes of left boundary
void printBoundaryLeft(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root -> left)
    {
        cout<<root -> data;
        printBoundaryLeft(root -> left);
    }
    else if(root->right) {
        printf("%d ", root->data);
        printBoundaryLeft(root->right);
    }
}

//function to print right boundary bottom to top;
void printBoundaryRight(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->right) {
        // to ensure bottom up order, first call for right
        // subtree, then print this node
        printBoundaryRight(root->right);
        cout<<root->data;
    }
    else if (root->left) {
        printBoundaryRight(root->left);
        cout<<root->data;
    }
}

//A function to do boundary traversal;
void printBoundary(struct node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout<<root -> data;
    printBoundaryLeft(root -> left);
    printLeaves(root -> left);
    printLeaves(root -> right);
    printBoundaryRight(root -> right);
}

//make specific functions for tarversing left boundary, right boundary and leaf nodes;
struct node *newNode(int data)
{
    struct node *temp = new node();
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}
int main()
{
    struct node* root = newNode(20);
    root->left = newNode(8);
    root->left->left = newNode(4);
    root->left->right = newNode(12);
    root->left->right->left = newNode(10);
    root->left->right->right = newNode(14);
    root->right = newNode(22);
    root->right->right = newNode(25);
    printBoundary(root);
    return 0;
}