class Solution {
public:
    int helper(string &s,int l, int r, vector<vector<int>> &dp)
    {
        if(l == r)
            return 1;
        if(l > r)
            return 0;
        if(dp[l][r] != -1)
            return dp[l][r];
        if(s[l] == s[r])
        {
            return dp[l][r] = 2 + helper(s, l + 1, r - 1, dp);
        }
        else
        {
            return dp[l][r] = max(helper(s,l + 1, r, dp), helper(s, l, r - 1, dp));
        }
    }
    int minInsertions(string s) {
        int n = s.length();
        vector<vector<int>> dp(n, vector<int> (n, -1));
        int len = helper(s,0, n - 1,dp);
        return n - len;
    }
};