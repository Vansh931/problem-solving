class Solution {
public:
    vector<int>nextGreater(vector<int>&v){
        int n = v.size();
        vector<int>ans(n,-1);
        stack<int>s;
        s.push(v[n-1]);
        for(int i=n-2;i>=0;i--){
            while(!s.empty()&&s.top()<=v[i]){
                s.pop();
            }
            ans[i]=s.empty()?-1:s.top();
            s.push(v[i]);
        }
        return ans;
    }


    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums3=nextGreater(nums2);
        unordered_map<int,int>m;
        for(int i= 0;i<nums2.size();i++){
            m[nums2[i]]=nums3[i];
        }
        vector<int>ans;
        for(int i= 0;i<nums1.size();i++){
            ans.push_back(m[nums1[i]]);
        }
        return ans;

    }
};