class Solution {
public:
    int helper(int i, int j, vector<vector<int>>&triangle, vector<vector<int>> &dp)
    {
        int n = triangle.size();
        if(i == n - 1)
            return triangle[i][j];
        if(dp[i][j] != -1)
            return dp[i][j];
        int down = triangle[i][j] + helper(i + 1, j, triangle, dp);
        int dig = triangle[i][j] + helper(i + 1, j + 1, triangle, dp);
        return dp[i][j] = min(down, dig);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> dp(n, vector<int> (n , -1));
        return helper(0, 0, triangle, dp);
    }
};