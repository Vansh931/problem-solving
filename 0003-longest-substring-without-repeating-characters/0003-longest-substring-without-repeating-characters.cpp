class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int>store;
        int count = 0;
        int l = 0;
        int h = 0;
        while(h<s.length()){
            while(store.contains(s[h])){
                store.erase(s[l]);
                l++;
            }
            store.insert(s[h]);
            h++;
            count = max(count,h-l);
            
        }
        return count;
    }
};