class Solution {
public:
    int rec(int i , int j, int n1, int n2,string &text1, string &text2,vector<vector<int>>&dp) {
        if(i==n1||j==n2){
            return 0;
        }
        if(dp[i][j]!=-1) return dp[i][j];
        int ans =0;
        if(text1[i]==text2[j]){
            dp[i][j] =  rec(i+1,j+1,n1,n2,text1,text2,dp)+1;
        }
        else{
            dp[i][j] = max(rec(i+1,j,n1,n2,text1,text2,dp),rec(i,j+1,n1,n2,text1,text2,dp));
        }
        return dp[i][j];
    }


    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.length();
        int n2 = text2.length();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        return rec(0,0,text1.length(),text2.length(),text1,text2,dp);

    }
};