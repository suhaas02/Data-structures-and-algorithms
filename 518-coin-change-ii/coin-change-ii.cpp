class Solution {
public:
    // long long helper(int ind, int amount, vector<int> &coins, vector<vector<int>> &dp)
    // {
    //     if(ind == 0)
    //     {
    //         if(amount % coins[ind] == 0)
    //             return 1;
    //         else
    //             return 0;
    //     }
    //     if(dp[ind][amount] != -1)
    //         return dp[ind][amount];
    //     long long notPick = helper(ind - 1, amount, coins, dp);
    //     long long pick = 0;
    //     if(coins[ind] <= amount)
    //     {
    //         pick =  helper(ind, amount - coins[ind], coins, dp);
    //     }
    //     return dp[ind][amount] = pick + notPick;
    // }
    int change(int amount, vector<int>& coins) {
        // int n = coins.size();
        // vector<vector<int>> dp(n, vector<int> (amount + 1, -1));
        // int ans = helper(n - 1, amount, coins, dp);
        // return ans;

        int n = coins.size();
        vector<vector<long>> dp(n, vector<long> (amount + 1, 0));
        
        //base case
        for(int i = 0; i <= amount; i++)
        {
            if(i % coins[0] == 0)
            {
                dp[0][i] = 1;
            }
        }

        for(int i = 1; i < n; i++)
        {
            for(int j = 0; j <= amount; j++)
            {
                long long notPick = dp[i - 1][j];
                long long pick = 0;
                if(coins[i] <= j)
                {
                    pick =  dp[i][j - coins[i]];
                }
                dp[i][j] = pick + notPick;
            }
        }
        return dp[n - 1][amount];
    }
};