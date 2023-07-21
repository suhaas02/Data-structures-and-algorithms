class Solution {
public:
    int helper(int ind, vector<int> &prices, int n, int buy, vector<vector<int>> &dp, int fee)
    {
        if(ind == n)
            return 0;
        if(dp[ind][buy] != -1)
            return dp[ind][buy];
        int profit = 0;
        if(buy)
        {
            profit = max(-prices[ind] + helper(ind + 1, prices, n, 0, dp, fee), 
                        0 + helper(ind + 1, prices, n, 1, dp, fee));
        }
        else
        {
            profit = max(-fee + prices[ind] + helper(ind + 1, prices, n, 1, dp, fee), 
                        0 + helper(ind + 1, prices, n, 0, dp, fee));
        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        vector<vector<int>> dp(n, vector<int> (2, -1));
        return helper(0, prices, n, 1,dp, fee);
    }
};