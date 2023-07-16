class Solution {
public:
    // int helper(vector<int> &coins, int amount, int ind, vector<vector<int>> &dp)
    // {
    //     if(ind == 0)
    //     {
    //         if(amount % coins[0] == 0)
    //             return amount / coins[ind];
    //         else
    //             return 1e9;
    //     }
    //     if(dp[ind][amount] != -1)
    //         return dp[ind][amount];
    //     int notPick = 0 + helper(coins, amount, ind - 1, dp);
    //     int pick = INT_MAX;
    //     if(coins[ind] <= amount)
    //     {
    //         pick = 1 + helper(coins, amount - coins[ind], ind, dp);
    //     }
    //     return dp[ind][amount] = min(notPick, pick);
    // }
    int coinChange(vector<int>& coins, int amount) {
        // int n = coins.size();
        // vector<vector<int>> dp(n, vector<int> (amount + 1, -1));
        // int ans = helper(coins, amount, n - 1,dp);
        // if(ans >= 1e9)
        //     return -1;
        // return ans;

        int n = coins.size();
        vector<vector<int>> dp(n, vector<int> (amount + 1, 0));
        for(int i = 0; i <= amount; i++)
        {
            if(i % coins[0] == 0)
                dp[0][i] = i / coins[0];
            else
                dp[0][i] = 1e9;
        }

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j <= amount; j++)
            {
                int notPick = dp[i - 1][j];
                int pick = INT_MAX;
                if(coins[i] <= j)
                    pick = 1 + dp[i][j - coins[i]];
                dp[i][j] = min(notPick,pick);
            }
        }
        if(dp[n - 1][amount] >= 1e9)
            return -1;
        return dp[n - 1][amount];
    }
};