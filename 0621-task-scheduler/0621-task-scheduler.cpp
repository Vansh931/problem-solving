class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>freq(26,0);
        int maxi = 0;
        for(int i = 0;i<tasks.size();i++){
            freq[tasks[i]-'A']++;
            maxi = max(maxi,freq[tasks[i]-'A']);
        }
        int s = tasks.size();
        int t = (maxi-1)*(n+1);
        for(int i = 0;i<s;i++){
            if(freq[tasks[i]-'A']==maxi){
                t++;
            }
            freq[tasks[i]-'A']=0;
        }
        return max(t,s);
    }
};