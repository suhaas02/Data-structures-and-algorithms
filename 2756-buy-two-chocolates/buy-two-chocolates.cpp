class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int i = 0, j = prices.size() - 1;
        int sum = 0;
        if(prices[0] + prices[1] > money)
            return money;
        return money - prices[0] - prices[1];
    }
};