class Solution {
public:
    int helper(int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp)
    {
        if(n < 0 or m < 0)
            return 0;
        if(n == 0 and m == 0)
            return grid[n][m];
        if(dp[n][m] != -1)
            return dp[n][m];
        int left = INT_MAX, up = INT_MAX;
        if(n > 0)
            up = grid[n][m] + helper(n - 1, m, grid, dp);
        if(m > 0)
            left = grid[n][m] + helper(n, m - 1, grid,dp);
        return dp[n][m] = min(up, left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return helper(n - 1, m - 1, grid, dp);
    }
};