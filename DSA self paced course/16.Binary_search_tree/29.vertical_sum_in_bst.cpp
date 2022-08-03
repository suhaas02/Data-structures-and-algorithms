//vertical sum in binary search tree

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

void vertiSumR(node *root,int hd,map<int,int> &mp)
{
    if (root == NULL)
    {
        return;
    }
    vertiSumR(root -> left,hd - 1,mp);
    mp[hd] += root -> key;
    vertiSumR(root -> right,hd + 1,mp);
    
}

void vertiSum(node *root)
{
    map<int,int> mp;
    vertiSumR(root,0,mp);
    for(auto sum : mp)
    {
        cout<<sum.second<<endl;
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
	vertiSum(root);
	
	return 0;
}

 
