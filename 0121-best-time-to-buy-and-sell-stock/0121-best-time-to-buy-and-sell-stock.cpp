class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans =0;
        int maxi = 0;
        int l = 0;
        int h = 0;
        while(h<prices.size()){
            if(prices[h]>=prices[l]){
                ans = max(ans,prices[h]-prices[l]);
            }
            else{
                l = h;
            }
            h++;
        }
        return ans;
    }
};