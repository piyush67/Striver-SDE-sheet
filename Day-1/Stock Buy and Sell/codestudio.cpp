#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int max_profit=0;
    int curr_max=prices[prices.size()-1];
    for(int i=prices.size()-2;i>=0;i--){
        if(curr_max<prices[i]) curr_max=prices[i];
        else max_profit=max(max_profit,curr_max-prices[i]);
    }
    return max_profit;
}