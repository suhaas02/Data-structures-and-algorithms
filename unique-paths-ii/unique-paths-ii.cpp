class Solution {
public:
    int helper(int n, int m, vector<vector<int>>& obstacleGrid, vector<vector<int>> &dp)
    {
        
        if(n < 0 or m < 0 or obstacleGrid[n][m] == 1)
            return 0;
        if(m == 0 and n == 0)
            return 1;
        if(dp[n][m] != -1)
            return dp[n][m];
        int left = helper(n, m - 1, obstacleGrid, dp);
        int right = helper(n - 1, m, obstacleGrid, dp);
        return dp[n][m] = left + right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return helper(n - 1, m - 1, obstacleGrid, dp);
    }
};