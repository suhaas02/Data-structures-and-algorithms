//height or depth of a tree.
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
int maxDepth(node *Node)
{
    if (Node == NULL)
    {
        return -1;  
    }
    else
    {
        //DOUBT: does recursion makes any count?
        int lDepth = maxDepth(Node -> left);
        int rDepth = maxDepth(Node -> right);
        if (lDepth > rDepth)
        {
            return (lDepth + 1);
        }
        else
        {
            return (rDepth + 1);
        }
        
    }
    
}
node *newNode(int data)
{
    node* NODE = new node();
    NODE -> data = data;
    NODE -> left = NULL;
    NODE -> right = NULL;
    return(NODE);
}
int main()
{
    node *root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
     
    cout << "Height of tree is " << maxDepth(root);
    return 0;
}