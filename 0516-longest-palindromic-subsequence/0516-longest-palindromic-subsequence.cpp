class Solution {
public:


    int lcs(int i,int j,int n,string &s,string &t,vector<vector<int>>&dp){
        if(i==n||j==n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s[i]==t[j]){
            dp[i][j] = lcs(i+1,j+1,n,s,t,dp)+1;
        }
        else dp[i][j] = max(lcs(i+1,j,n,s,t,dp),lcs(i,j+1,n,s,t,dp));
        return dp[i][j];
    }
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        int  n = s.length();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return lcs(0,0,n,s,t,dp);
    }
};