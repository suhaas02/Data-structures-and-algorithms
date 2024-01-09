/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void helper(TreeNode* root, vector<int> &num)
    {
        if(root == NULL)
            return;
        helper(root -> left, num);
        if(root -> left ==  NULL and root -> right == NULL)
            num.push_back(root -> val);
        helper(root -> right, num);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> num1, num2;
        helper(root1, num1);
        helper(root2, num2);
        for(auto x : num1)
        {
            cout << x << " ";
        }
        cout << endl;
        for(auto x : num2)
        {
            cout << x << " ";
        }
        if(num1 == num2)
            return true;
        return false;
    }
};