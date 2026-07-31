class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int l = 0;
        int h = 1;
        int ans = 0;
        string t = "";
        t += s[l];
        int count = 1;
        while(l<h && h<s.length()){
            if(t.find(s[h])==string::npos){
                t+=s[h];
                count++;
                ans = max(ans,count);
                h++;
            }
            else{
                t ="";
                l++;
                t+=s[l];
                h = l+1;
                count = 1;
            }
        }
        return max(ans,count);
    }
};