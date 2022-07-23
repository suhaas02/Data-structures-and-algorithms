//iterative preorder traversal


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


//approach - 1
// int preorder(node *root)
// {
//     if (root == NULL)
//     {
//         stack<node *> st;
//         st.push(root);
//         while (st.empty() == false)
//         {
//             node *curr = st.top();
//             cout<<curr -> key;
//             st.pop();
//             if (curr -> right != NULL)
//             {
//                 st.push(curr -> right);
            
//             }
//             if (curr -> left != NULL)
//             {
//                 st.push(curr -> left);
            
//             }

//         }
        
        
//     }
       
// }

//approach - 2
//space optimized, space: o(h)
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    stack <node*> st;
    node *curr = root;
    while (curr != NULL || st.empty() == false)
    {
        while (curr != NULL)
        {
            cout<<curr -> key<<" ";
            if (curr -> right != NULL)
            {
                st.push(curr -> right);
            }
            curr = curr -> right;
        }
        if (st.empty() == false)
        {
            curr = st.top();
            st.pop();
        }
               
    }
    
    
}




int main()
{
    node *root = new node(10);
    root->left=new node(20);
	root->right=new node(30);
	root->right->left=new node(40);
	root->right->right=new node(50);
    preorder(root);
    return 0;
}