class Solution {
public:
    
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(nums.size()==1) return nums[0];
        vector<int>dp(n);
        int a=nums[0];
        int b = max(nums[1],nums[0]);
        for(int i = 2;i<nums.size();i++){
            int c = max(b,a+nums[i]);
            a = b;
            b = c;
        }
        return b;
    }
};