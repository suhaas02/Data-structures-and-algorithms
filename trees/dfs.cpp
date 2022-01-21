// //preorder traversal of a binary tree --> DFS --> depth first search tree
// //approach using recursion.
// #include<bits/stdc++.h>
// using namespace std;
// struct Node
// {
//     int data;
//     struct Node *left, *right;
// };
// Node* newNode(int data)
// {
//     Node* temp = new Node;
//     temp -> data = data;
//     temp->left = temp->right = NULL;
//     return temp;
// }
// void printPostorder(struct Node* node)
// {
//     if (node == NULL)
//         return;
//     printPostorder(node->left);
//     printPostorder(node->right);
//     cout << node->data << " ";
// }
// void printInorder(struct Node* node)
// {
//     if (node == NULL)
//         return;
//     printInorder(node->left);
//     cout << node->data << " ";
//     printInorder(node->right);
// }
// void printPreorder(struct Node* node)
// {
//     if (node == NULL)
//         return;
//     cout << node->data << " ";
//     printPreorder(node->left);
//     printPreorder(node->right);
// }
// int main()
// {
//     struct Node* root = newNode(1);
//     root->left = newNode(2);
//     root->right = newNode(3);
//     root->left->left = newNode(4);
//     root->left->right = newNode(5);
//     cout<<"Preorder traversal of binary tree is "<<endl;
//     printPreorder(root);
//     cout<<"Inorder traversal of binary tree is "<<endl;
//     printInorder(root);
//     cout<<"Postorder traversal of binary tree is "<<endl;
//     printPostorder(root);
//     return 0;
// }

//iterative preorder traversal
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *newNode(int data)
{
    struct node *node = new struct node;
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;
    return (node);
}
void iterativePreorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    
    //creating an empty stack and pushing root to it;
    stack<node*> nodeStack;
    nodeStack.push(root);

    while (nodeStack.empty() == false)
    {
        struct node* node = nodeStack.top();
        cout<<node->data;
        nodeStack.pop();

        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
    
}
int main()
{
    struct node* root = newNode(10);
    root->left = newNode(8);
    root->right = newNode(2);
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->left = newNode(2);
    iterativePreorder(root);
    return 0;
}