class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max_profit = 0, cur_profit = 0;
        int prices_size = prices.size();
        int buy_price = prices[0];
        for (int ind = 1; ind < prices_size; ++ind)
        {
            cur_profit = prices[ind] - buy_price;
            max_profit = max(cur_profit, max_profit);
            buy_price = min(buy_price, prices[ind]);
        }
        
        return max_profit;
        
    }
};
