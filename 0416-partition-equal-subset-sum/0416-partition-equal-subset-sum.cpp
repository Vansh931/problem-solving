class Solution {
public:
    int rec(int i,long long sum,vector<int>&nums,vector<vector<long long>>&dp){
        if(i==nums.size()) return 0;
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int not_pick = rec(i+1,sum,nums,dp);
        int pick = 0;
        if(nums[i]<=sum){
            pick = nums[i]+ rec(i+1,sum-nums[i],nums,dp);

        }
        return dp[i][sum] = max(pick,not_pick);
    }
    bool canPartition(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int t = sum/2;
        vector<vector<long long>>dp(n+1,vector<long long>(t+1,-1));
        int ans = rec(0,t,nums,dp);
        return ans==t;
    }
};