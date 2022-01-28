//diameter of binary tree
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node* newNode(int data);
int diameterOpt(struct node *root, int *height){
    int lh = 0, rh = 0;
    int ld = 0, rd = 0;
    if (root == NULL){
        *height = 0;
        return 0;
    }
    ld = diameterOpt(root -> left, &lh);
    rd = diameterOpt(root -> right, &rh);
    *height = max(lh, rh) + 1;
    return max(lh + rh + 1, max(ld, rd));
}
struct node* newNode(int data){
    struct node* node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}
int main()
{
    struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int height = 0;
    cout << "Diameter of the given binary tree is " << diameterOpt(root, &height);
    return 0;
}