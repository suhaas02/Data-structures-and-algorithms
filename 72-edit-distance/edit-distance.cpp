class Solution {
public:
    int helper(string s, string t, int i, int j, vector<vector<int>> &dp)
    {
        if(i <  0)
            return j + 1;
        if(j < 0)
            return i + 1;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(s[i] == t[j])
            return dp[i][j] = helper(s, t, i - 1, j - 1, dp);
        else
            return dp[i][j] = min(helper(s, t, i, j - 1, dp), min(helper(s, t, i - 1, j - 1, dp), helper(s, t, i - 1, j, dp))) + 1;
    }
    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();
        if(word1.size() == 0)
            return word2.size();
        if(word2.size() == 0)
            return word1.size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return helper(word1, word2, n - 1, m - 1, dp);
    }
};