
class Solution {
public:
    void helper(int i, int n, int k,vector<vector<int>> &ans, vector<int> &temp)
    {
        if(i > n)
            return;
        if(temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }
        for(int j = i; j < n; j++)
        {
            temp.push_back(j + 1);
            helper(j + 1, n, k,ans, temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0, n, k, ans, temp);
        return ans;
    }
};