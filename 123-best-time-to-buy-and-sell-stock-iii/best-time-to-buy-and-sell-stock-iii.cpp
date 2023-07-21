class Solution {
public:
    // int helper(vector<int> &prices, int ind, int n, int buy, int tran, vector<vector<vector<int>>> &dp)
    // {
    //     if(ind == n)
    //         return 0;
    //     if(tran ==0)
    //         return 0;
    //     if(dp[ind][buy][tran] != -1)
    //         return dp[ind][buy][tran];
    //     if(buy == 1)
    //     {
    //         return dp[ind][buy][tran] = max(-prices[ind] + helper(prices, ind + 1, n, 0, tran, dp), helper(prices, ind + 1, n, 1, tran, dp));
    //     }
    //     return dp[ind][buy][tran] = max(prices[ind] + helper(prices, ind + 1, n, 1, tran - 1, dp), helper(prices, ind + 1, n, 0, tran, dp));
    // }
    int maxProfit(vector<int>& prices) {
        //now as there are 3 changing parameters, we need to use 3d dp;
        // int n = prices.size();
        // vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
        // return helper(prices, 0, n, 1, 2, dp);

        int n = prices.size();
        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, -1)));
        for(int i = 0; i <= 1; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                dp[n][i][j] = 0;
            }
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= 1; j++)
            {
                dp[i][j][0] = 0;
            }
        }

        //now copy the recurrence
        for(int ind = n - 1; ind >= 0; ind--)
        {
            for(int buy = 0; buy <= 1; buy++)
            {
                for(int tran = 1; tran <= 2; tran++)
                {
                    if(buy == 1)
                    {
                        dp[ind][buy][tran] = max(-prices[ind] + dp[ind + 1][0][tran], dp[ind + 1][1][tran]);
                    }
                    else
                        dp[ind][buy][tran] = max(prices[ind] + dp[ind + 1][1][tran - 1], dp[ind + 1][0][tran]);
                }
            }
        }
        return dp[0][1][2];
    }
};