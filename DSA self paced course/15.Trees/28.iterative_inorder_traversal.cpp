//iterative preorder travsersal

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

void iterativeInOrder(node *root)
{
    stack<node*> s;
    node *curr = root;
    while (curr != NULL || s.empty() == false)
    {
        while(curr != NULL)
        {
            s.push(curr);
            curr = curr -> left;
        }
        curr = s.top();
        s.pop();
        cout<<curr -> key<<endl;
        curr = curr -> right;
    }
    //return 0;
}





int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    iterativeInOrder(root);
    return 0;
}