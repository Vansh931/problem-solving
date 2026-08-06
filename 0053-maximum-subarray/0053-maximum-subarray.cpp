class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            if((sum+nums[i])>=0){
                sum+=nums[i];
                ans = max(ans,sum);
            }
            else{
                sum = 0;
            }
        }
        if(ans == 0){
            return *max_element(nums.begin(),nums.end());
        }
        return ans;
    }
};