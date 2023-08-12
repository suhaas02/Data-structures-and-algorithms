class Solution {
public:
    int helper(vector<vector<int>> &ob, int i, int j, vector<vector<int>> &dp)
    {
        if(i < 0 or j < 0)
            return 0;
        if(i == 0 and j == 0)
            return 1;
        if(dp[i][j] != -1)
            return dp[i][j];
        int up = 0, left = 0;
        if(i > 0 and ob[i - 1][j] == 0)
        {
            up = helper(ob, i - 1, j, dp);
        }
        if(j > 0 and ob[i][j - 1] == 0)
            left = helper(ob, i, j - 1, dp);
        return dp[i][j] = up + left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& ob) {
        int n = ob.size();
        int m = ob[0].size();
        if(ob[n - 1][m - 1] == 1)
            return 0;
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return helper(ob, n - 1, m - 1, dp);
    }
};