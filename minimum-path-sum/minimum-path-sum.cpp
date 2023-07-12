class Solution {
public:
    //memoization technique
    // int helper(int n, int m, vector<vector<int>> &grid, vector<vector<int>> &dp)
    // {
    //     if(n < 0 or m < 0)
    //         return 0;
    //     if(n == 0 and m == 0)
    //         return grid[n][m];
    //     if(dp[n][m] != -1)
    //         return dp[n][m];
    //     int left = INT_MAX, up = INT_MAX;
    //     if(n > 0)
    //         up = grid[n][m] + helper(n - 1, m, grid, dp);
    //     if(m > 0)
    //         left = grid[n][m] + helper(n, m - 1, grid,dp);
    //     return dp[n][m] = min(up, left);
    // }
    int minPathSum(vector<vector<int>>& grid) {
        // int n = grid.size();
        // int m = grid[0].size();
        // vector<vector<int>> dp(n, vector<int> (m, -1));
        // return helper(n - 1, m - 1, grid, dp);

        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, 0));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(i == 0 and j == 0)
                {
                    dp[i][j] = grid[i][j];
                    continue;
                }
                int up = grid[i][j];
                if(i>0) up += dp[i-1][j];
                else up += 1e9;
                
                int left = grid[i][j];
                if(j>0) left+=dp[i][j-1];
                else left += 1e9;
                
                dp[i][j] = min(up,left);

            }
        }
        return dp[n - 1][m - 1];
    }
};