class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p = 0;
        int lowp = prices[0];
        for(int i = 0;i<prices.size();i++){
            if(lowp>prices[i]){
                lowp=prices[i];
            }
            p = max(prices[i]-lowp,p);
        }
        return p;
    }
};