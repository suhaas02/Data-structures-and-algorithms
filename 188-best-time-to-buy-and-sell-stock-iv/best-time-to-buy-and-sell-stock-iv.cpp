class Solution {
public:
    int helper(vector<int> &prices, int ind, int n, int buy, int tran, vector<vector<vector<int>>> &dp)
    {
        if(ind == n)
            return 0;
        if(tran ==0)
            return 0;
        if(dp[ind][buy][tran] != -1)
            return dp[ind][buy][tran];
        if(buy == 1)
        {
            return dp[ind][buy][tran] = max(-prices[ind] + helper(prices, ind + 1, n, 0, tran, dp), helper(prices, ind + 1, n, 1, tran, dp));
        }
        return dp[ind][buy][tran] = max(prices[ind] + helper(prices, ind + 1, n, 1, tran - 1, dp), helper(prices, ind + 1, n, 0, tran, dp));
    }
    int maxProfit(int k, vector<int>& prices) {
        int n = prices.size();
        vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(k + 1, -1)));
        return helper(prices, 0, n, 1, k, dp);
    }
};