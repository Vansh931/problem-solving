class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0;i<n;i++){
            for(int j = i;j<n-i-1;j++){
                int t = matrix[j][n-i-1];
                matrix[j][n-i-1]=matrix[i][j];
                int s = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1]=t;
                t = matrix[n-j-1][i];
                matrix[n-j-1][i]=s;
                matrix[i][j]=t;
            }
        }
    }
};