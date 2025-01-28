class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int buy = prices[0];
        int profit =0;

        for(int i=0;i<n;i++){
           if (buy > prices[i]) {
                buy = prices[i];
            }
            profit = max(profit,prices[i]-buy);
        }
        return profit;
    }
};