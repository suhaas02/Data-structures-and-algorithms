//finding kth smallest element in bst 

//naive approach
//tc: o(n)
//space: o(1), augmented bst
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

void printKth(node *root,int k,int count)
{
    if (root != NULL)
    {
        printKth(root -> left,k,count);
        count++;
        if (count == k)
        {
            cout<<root -> key<<endl;
            return;
        }
        printKth(root -> right,k,count);
        
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
	int k=3;
	int count=0;
	cout<<"Kth Smallest: ";
	printKth(root,k,count);
	
	return 0;
}

 
