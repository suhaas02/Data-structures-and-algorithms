//level order traversal
//efficient approach


//time complexity: o(n) n == number of nodes
//space: o(n)

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int key;
    node *left;
    node *right;
    node(int k)
    {
        key = k;
        left = right = NULL;
    }
};

void levelOrder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node*> ans;
    ans.push(root);
    while (ans.empty() == false)
    {
        int count = ans.size();
        for (int i = 0; i < count; i++)
        {
            node* curr = ans.front();
            ans.pop();
            cout<<curr -> key<<" ";
            if (curr -> left != NULL)
            {
                ans.push(curr -> left);
            }
            if (curr -> right != NULL)
            {
                ans.push(curr -> right);
            }
        }
        cout<<endl;
    }
}



int main() {
	
	node *root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
	levelOrder(root);
	
	return 0;
}

 
