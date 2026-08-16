class Solution {
public:
    int rec(int i,int j, int n,vector<int>& nums,vector<vector<int>>&dp){
        if(i==n) return 0;

        if(dp[i][j+1]!=-1) return dp[i][j+1];
        int not_count = rec(i+1,j,n,nums,dp);
        int count = 0;
        if(j==-1||nums[i]>nums[j]){
            count = rec(i+1,i,n,nums,dp)+1;
        }
        return dp[i][j+1]=max(count,not_count);
    }



    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return rec(0,-1,n,nums,dp);
    }
};