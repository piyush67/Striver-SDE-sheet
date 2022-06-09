class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_element=prices[prices.size()-1];
        int max_profit=0;
        for(int i=prices.size()-2;i>=0;i--){
            if(max_element-prices[i]>max_profit) max_profit=max_element-prices[i];
            if(prices[i]>max_element) max_element=prices[i];
        }
        return max_profit;
    }
};