class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1) return;
        int n = nums.size();
        if(nums[n-1]>nums[n-2]){
            swap(nums[n-1],nums[n-2]);
            return;
        }
        int p = -1;
        int maxi = n-1;
        for(int i = n-2;i>=0;i--){
            if(nums[maxi]<nums[i]) maxi=i;
            if(nums[i]<nums[i+1]){
                p=i;
                break;
            }
        }
        if(p==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int s;
        int mini = 100;
        for(int i = n-1;i>=p;i--){
           if(nums[i]>nums[p]&&((mini-nums[p])>(nums[i]-nums[p]))){
            s=i;
            mini = nums[i];
           }
        }
        swap(nums[p],nums[s]);
        sort(nums.begin()+p+1,nums.end());
    }
};