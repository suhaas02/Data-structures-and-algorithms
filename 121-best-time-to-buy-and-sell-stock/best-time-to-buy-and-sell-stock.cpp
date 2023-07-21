class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int pro = 0;
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < buy)
                buy = prices[i];
            if(pro < prices[i] - buy)
                pro = prices[i] - buy;
        }
        return pro;
    }
};