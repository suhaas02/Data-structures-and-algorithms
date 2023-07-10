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
    int helper(TreeNode* root)
    {
        if(root == NULL)
            return 0;
        int l = helper(root -> left);
        int r = helper(root -> right);
        int ans = min(l, r) + 1;
        if(ans == 1)
            return max(l,r) + 1;
        return ans;
    }
    int minDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return helper(root);
    }
};