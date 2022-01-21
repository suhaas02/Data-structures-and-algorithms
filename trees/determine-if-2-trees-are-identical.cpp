//code to determine if 2 trees are identical
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left, *right;
};
node *newNode(int data)
{
    node *Node = new node();
    Node -> data = data;
    Node -> left = NULL;
    Node -> right = NULL;
    return (Node);
}
int identicalTrees(node *a, node *b)
{
    if (a == NULL && b == NULL)
    {
        return 1;
    }
    if (a != NULL && b != NULL)
    {
        return {
            a -> data == b -> data && 
            identicalTrees(a->left, b->left) && 
            identicalTrees(a->right, b->right)
        };
    }
    return 0;
}
int main()
{
    node *root1 = newNode(1);
    node *root2 = newNode(1);
    root1->left = newNode(2); 
    root1->right = newNode(3); 
    root1->left->left = newNode(4); 
    root1->left->right = newNode(5); 

    root2->left = newNode(2); 
    root2->right = newNode(3); 
    root2->left->left = newNode(4); 
    root2->left->right = newNode(5); 

    if(identicalTrees(root1, root2)) 
        cout << "Both tree are identical."<<endl; 
    else
        cout << "Trees are not identical."<<endl; 
    return 0; 
}