class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buy = prices[0];
        int sell = prices[0];
        for(int i = 1; i < prices.size(); i++)
        {
            if(buy > prices[i])
                buy = prices[i];
            if(sell < prices[i]);
                sell = prices[i];
            profit = max(profit, sell - buy);
        }
        return profit;
    }
};