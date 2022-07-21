//program for finding diameter of binary tree

//error while returning in efficient approach
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


// //naive approach
// //tc: o(n ^ 2)
// int height(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int lh = height(root -> left);
//     int rh = height(root -> right);
//     return (1 + max(lh,rh));
// }

// int diameter(node *root)
// {
//     if (root == NULL)
//     {
//         return 0;
//     }
//     int d1 = 1 + height(root -> left) + height(root -> right);
//     int d2 = height(root -> left);
//     int d3 = height(root -> right);
//     return max(d1,max(d2,d3));
    
// }

//efficient approach
//tc: O(N)
int res = 0;
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = diameter(root -> left);
    int rh = diameter(root -> right);
    res = max(res,1 + rh + lh);
    return (1 + max(lh , rh));
}



int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(60);
	root->right->left->left=new node(50);
	root->right->right->right=new node(70);
    cout<<diameter(root)<<endl;
    return 0;
}