class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>v(n*n,0);
        int a = 0;
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid.size();j++){
                if(v[grid[i][j]-1]==-1){
                    a = grid[i][j];
                }
                else{
                    v[grid[i][j]-1]=-1;
                }
            }
        }
        for(int i = 0;i<n*n;i++){
            if(v[i]!=-1){
                return {a,i+1};
            }
        }
        return{-1,-1};
    }
};