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
    void inorder(vector<int> &ans, TreeNode* root)
    {
        if(root == NULL)
            return;
        inorder(ans, root -> left);
        ans.push_back(root -> val);
        inorder(ans, root -> right);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(ans, root);
        int i = 0, j = ans.size() - 1;
        while(i < j)
        {
            if(ans[i] + ans[j] == k)
                return true;
            else if(ans[i] + ans[j] < k)
                i++;
            else
                j--;
        }
        return false;
    }
};