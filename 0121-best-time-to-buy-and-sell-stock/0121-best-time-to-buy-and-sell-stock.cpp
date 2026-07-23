class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // when I will buy : at min. price seen so far
        // when I will traverse through each price:
        // I have 2 options:
        // Option 1: Buy : check today's price < min_price_seen_so far?? => if yes then only I will buy
        // Option 2: Sell : I will just find the profit and its comparision with max_profit

        int min_price_seen_so_far = INT_MAX;
        int max_profit = 0;
        int buy_price;
        // traverse
        for ( int i=0 ; i<prices.size() ; i++ ){
            int today_price = prices[i];
            // option 1:
            if ( today_price < min_price_seen_so_far ){
                // buy 
                buy_price = prices[i];
                min_price_seen_so_far=prices[i];
            } 
            else {
                // sell
                int sell_price=prices[i];
                int profit = sell_price - buy_price;
                // now update max_profit
                max_profit=max(profit,max_profit);
            }

        }

        // if (min_price_seen_so_far == prices[prices.size()-1]) return 0;
        return max_profit;

    } 
};