class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pre = 1;
        int suf = 1;
        int prod = INT_MIN;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            pre*=nums[i];
            suf*=nums[n-i-1];
            prod = max(prod,max(pre,suf));
            if(pre==0){
                pre=1;
            }
            if(suf==0){
                suf=1;
            }
        }
        return prod;
    }
};