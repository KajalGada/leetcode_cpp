class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int buy = prices[0], profit = 0;
        int cur_price, cur_profit;
        int prices_size = prices.size();
        for (int ind = 1; ind < prices_size; ++ind)
        {
            cur_price = prices[ind];
            cur_profit = cur_price - buy;
            if (cur_profit > profit)
            {
                profit = cur_profit;
            }
            else if (cur_price < buy)
            {
                buy = cur_price;
            }
        }
        
        return profit;
        
    }
};
