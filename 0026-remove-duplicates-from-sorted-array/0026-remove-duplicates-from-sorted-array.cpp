class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1) return 1;
        int c = 1;
        int l = 0;
        int h = 1;
        for(int i = 0;i<nums.size();i++){
            if(nums[l]!=nums[i]){
                l=i;
                c++;
                nums[h]=nums[i];
                h++;
            }
        }
        return c;
    }
};