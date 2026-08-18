class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l= 0;
        int h = nums.size()-1;
        int i = 0;
        while(i<=h){
            if(nums[i]==2){
                swap(nums[i],nums[h]);
                h--;
            }
            else if(nums[i]==1){
                i++;
            }
            else{
                swap(nums[i],nums[l]);
                i++;
                l++;
            }
        }
    }
};