class Solution {
public:
    int pro(int i,int p,int s,int n,int ans,vector<int>& nums) {
        if(i==n) return ans;
        p*=nums[i];
        s*=nums[n-i-1];
        ans = max(ans,max(p,s));
        if(p==0) p= 1;
        if(s==0)s=1;
        return pro(i+1,p,s,n,ans,nums);
    }
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int pre = 1;
        int suff = 1;
        int maxi = INT_MIN;
        return pro(0,1,1,n,INT_MIN,nums);
    }
};