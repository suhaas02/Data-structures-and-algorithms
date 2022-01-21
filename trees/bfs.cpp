//level order binary tree traversal using queue;
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node *left, *right;
};
Node* newNode(int data)
{
    Node* temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}
int main()
{
    Node* root = newNode(1);
}