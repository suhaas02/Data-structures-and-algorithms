//converting binary tree to doubly linked list

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

void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}


node *previ = NULL;
node *convert(node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    node *head = convert(root -> left);
    if (previ == NULL)
    {
        head = root;
    }
    else
    {
        root -> left = previ;
        previ -> right = root;

    }
    previ = root;
    convert(root -> right);
    return head;
    
}





int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    node *head=convert(root);
    printlist(head);
    return 0;
}