//check for balanced binary tree
//doubt: didn't undertand the intution behind the efficient approach
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

int height(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root -> left), height(root -> right)) + 1;
    }
    
}

//naive approach
//tc: O(N ^ 2)
// bool isBalanced(node *root)
// {
//     if (root == NULL)
//     {
//         return true;
//     }
//     int lh = height(root -> left);
//     int rh = height(root -> right);
//     return (abs(lh - rh) <= 1 && isBalanced(root -> left) && isBalanced(root -> right));
// }

bool isBalanced(node *root)
{

}




int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    cout<<isBalanced(root)<<endl;
    return 0;
}