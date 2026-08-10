class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long n = 1LL*grid.size()*grid.size();
        long s = n*(n+1)/2;
        int a = 0;
        int sum = 0;
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid.size();j++){
                sum+=abs(grid[i][j]);
                int x=abs(grid[i][j]);
                if(grid[(x-1)/grid.size()][(x-1)%grid.size()]<0){
                    a=abs(grid[i][j]);
                }
                else grid[(x-1)/grid.size()][(x-1)%grid.size()]*=-1;
            }
        }
        int b = s-(sum-a);
        return {a,b};
    }
};