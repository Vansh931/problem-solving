class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==1) return 0;
        int ans = 0;
        int l = 0;
        int h = 1;
        while(l<h && h<prices.size()){
            if(prices[l]>prices[h]){
                l=h;
                h++;
            }
            
            else{
                ans = max(ans,prices[h]-prices[l]);
                h++;
            }
        }
        return ans;
    }
};