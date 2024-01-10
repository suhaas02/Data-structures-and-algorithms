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
    void goFindParent(TreeNode* root, TreeNode* parent, unordered_map<TreeNode*, TreeNode*> & mp) {
        if(!root) {
            return;
        }
        mp[root] = parent;
        goFindParent(root->left, root, mp);
        goFindParent(root->right, root, mp);
    }
    TreeNode* goFindNode(TreeNode* root, int &start) {
        if(!root) {
            return NULL;
        }
        if(root->val == start) {
            return root;
        }
        TreeNode *left = goFindNode(root->left, start);
        TreeNode *right = goFindNode(root->right, start);
        return (left!=NULL) ? left:right;
    }
    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*, TreeNode*> mp;
        goFindParent(root, NULL, mp);
        TreeNode* node = goFindNode(root, start);
        queue<pair<TreeNode *, int>> q;
        q.push({node, 0});
        unordered_set<TreeNode*> s;
        s.insert(node);
        int maxi = 0;
        while(!q.empty()) {
            int sz = q.size();
            while(sz--) {
                auto fro = q.front();
                q.pop();
                maxi = max(maxi, fro.second);
                if(mp[fro.first] && s.find(mp[fro.first]) == s.end()) {
                    q.push({mp[fro.first], fro.second+1});
                    s.insert(mp[fro.first]);
                }
                if(fro.first->left && s.find(fro.first->left) == s.end()) {
                    q.push({fro.first->left, fro.second+1});
                    s.insert(fro.first->left);
                }
                if(fro.first->right && s.find(fro.first->right) == s.end()) {
                    q.push({fro.first->right, fro.second+1});
                    s.insert(fro.first->right);
                }
            }
        }
        return maxi;
    }
};