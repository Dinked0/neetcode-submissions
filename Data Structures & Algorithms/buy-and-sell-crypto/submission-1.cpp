class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_sale = 0;
        for(int i = 0; i < prices.size(); i++){
            for(int j = 0; j < prices.size(); j++){
                if(i < j && prices[i] < prices[j]){
                    max_sale = max(max_sale, prices[j] - prices[i]);
                }
            }
        }
        return max_sale;
    }
};
