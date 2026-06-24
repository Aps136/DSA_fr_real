class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price=prices[0];
        int prof =0;
        for(int i=1;i<prices.size();++i){
            if(buy_price>prices[i]){
                buy_price = prices[i];
            }
            prof =max(prof, prices[i]-buy_price);
        }
        return prof;

    }
};
//TC: O(n), SC: O(1)
