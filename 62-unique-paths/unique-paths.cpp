class Solution {
public:

    //memoization approach
    // int helper(int m, int n, vector<vector<int>> &dp)
    // {
    //     if(m < 0 or n < 0)
    //         return 0;
    //     if(m == 0 and n == 0)
    //         return 1;
    //     if(dp[m][n] != -1)
    //         return dp[m][n];
    //     int up = helper(m - 1, n, dp);
    //     int left = helper(m, n - 1, dp);
    //     return dp[m][n] = up + left;
    // }
    int uniquePaths(int m, int n) {
        // int count = 0;
        // vector<vector<int>> dp(m, vector<int> (n,-1));
        // return helper(m - 1, n - 1, dp);

        //tabulation appraoch 

        vector<vector<int>> dp(m, vector<int> (n,0));
        dp[0][0] = 1;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                // int up = 0, left = 0;
                if(i > 0)
                    dp[i][j] += dp[i - 1][j];
                if(j >  0)
                    dp[i][j] += dp[i][j - 1];
                // dp[i][j] = up + left;
            }
        }
        return dp[m - 1][n - 1];
        
    }


};