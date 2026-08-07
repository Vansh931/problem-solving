class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // vector<int>v(nums.size())
        int i = nums[0];
        while(i<nums.size()){
            if(nums[i]==-1) return i;
            else{
                int t=nums[i];
                nums[i]=-1;
                i=t;
            }
        }
        return -1;
    }
};