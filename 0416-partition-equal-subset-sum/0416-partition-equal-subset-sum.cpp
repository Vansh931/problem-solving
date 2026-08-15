class Solution {
public:
    bool rec(int i,long long s,long long sum,vector<int>&nums,vector<vector<long long>>&dp){
        if(i==nums.size()) return s==sum/2;
        if(dp[i][s]!=-1){
            return dp[i][s];
        }
        bool not_pick = rec(i+1,s,sum,nums,dp);
        bool pick = rec(i+1,s+nums[i],sum,nums,dp);
        return dp[i][s]=pick||not_pick;
    }
    bool canPartition(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        vector<vector<long long>>dp(n+1,vector<long long>(sum+1,-1));
        bool ans = rec(0,0,sum,nums,dp);
        return ans;
    }
};