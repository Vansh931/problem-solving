class Solution {
public:
    int rec(int i,int n,vector<int>&nums,vector<int>&dp){
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];
        int not_rob = rec(i+1,n,nums,dp);
        int rob = nums[i]+rec(i+2,n,nums,dp);
        return dp[i]=max(not_rob,rob);
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return rec(0,n,nums,dp);
    }
};