//pair sum with given bst

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


//approach - 1, inorder traversal
//tc: o(n)
//space: 0(n)
// void treeToList(node *root, vector<int> ans)
// {
//     if (root == NULL)
//     {
//         return;
//     }
//     treeToList(root -> left,ans);
//     ans.push_back(root -> key);
//     treeToList(root -> right,ans);
// }


// bool isPair(node *root,int sum)
// {
//     vector <int> ans;
//     treeToList(root,ans);
//     int start = 0;
//     int end = ans.size() - 1;
//     while (start < end)
//     {
//         if(ans[start] + ans[end] == sum)
//         {
//             cout<<"Found"<<endl;
//             return true;
//         }
//         else if (ans[start] + ans[end] < sum)
//         {
//             start++;
//         }
//         else
//         {
//             end--;
//         }
        
//     }
//     cout<<"No such values are found"<<endl;
//     return false;
// }


//approach - 2, hashing 
//tc: o(n) --> worst case, average: o(1)
//space: o(n)
bool isPair(node *root,int sum,unordered_set<int> &s)
{
    // unordered_set<int> s;
    if (root == NULL)
    {
        return false;
    }
    if (isPair(root -> left,sum,s) == true)
    {
        return true;
    }
    if (s.find(sum - root -> key) != s.end())
    {
        return true;
    }
    else
    {
        s.insert(root -> key);
    }
    return isPair(root -> right,sum,s);
    
    
}

int main() {
	
	node *root=new node(15);
	root->left=new node(5);
	root->left->left=new node(3);
	root->right=new node(20);
	root->right->left=new node(18);
	root->right->left->left=new node(16);
	root->right->right=new node(80);
	int sum;
    cin>>sum;
    unordered_set<int> s;
    cout<<isPair(root,sum,s);
	
	return 0;
}

 
