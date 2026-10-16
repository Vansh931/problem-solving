class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int h= nums.size();
        for(int i = 0;i<h;i++){
            if(m.find(target-nums[i])!=m.end()){
                return {m[target-nums[i]],i};
            }
            else{
                m[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};