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
    static bool cmp(pair<int,int> &a, pair<int,int> &b)
    {
        return a.second > b.second;
    }
    void helper(TreeNode* root, map<int,int> &mp)
    {
        if(root == NULL)
            return;
        helper(root -> left, mp);
        mp[root -> val]++;
        helper(root -> right, mp);
    }
    vector<int> findMode(TreeNode* root) {
        map<int,int> mp;
        vector<int> ans;
        helper(root, mp);
        //now i have stored all the frequencies in map;
        //now i need to sort them in descending order of values
        vector<pair<int,int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), cmp);
        int mode = vec[0].second;
        // cout<<mode<<endl;
        for(auto x : vec)
        {
            if(x.second == mode)
            {
                ans.push_back(x.first);
            }
            else
                break;
        }
        return ans;
    }
};