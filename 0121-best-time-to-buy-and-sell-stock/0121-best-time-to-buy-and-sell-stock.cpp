class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = prices[0];
        int profit = 0;
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < minPrice){
                minPrice = prices[i];
            }

            profit = prices[i] - minPrice;
            if(profit > maxProfit){
                maxProfit = profit;
            }

        }
        return maxProfit;
    }
};