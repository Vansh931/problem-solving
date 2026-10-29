class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        stack<int>s;
        int i = 0;
        int j = 0;
        while(i<m || j<n){
            while(i>=m&&j<n){
                s.push(nums2[j]);
                j++;
            }
            while(j>=n&&i<m){
                s.push(nums1[i]);
                i++;
            }
            if(j<n && i<m && nums1[i]<=nums2[j]){
                s.push(nums1[i]);
                i++;
            }
            if(i<m && j<n && nums2[j]<nums1[i]){
                s.push(nums2[j]);
                j++;
            }
        }
        for(int k = 0;k<(m+n);k++){
            nums1[m+n-k-1] = s.top();
            s.pop();
        }
    }
};