class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0;
        int h = height.size()-1;
        int lmax=0;
        int hmax=0;
        int w = 0;
        while(l<h){
            if(height[l]<=height[h]){
                if(height[l]>=lmax){
                    lmax = height[l];
                    l++;
                }
                else{
                    w+=lmax-height[l];
                    l++;
                }
            }

            if(height[l]>height[h]){
                if(height[h]>=hmax){
                    hmax = height[h];
                    h--;
                }
                else{
                    w+=hmax-height[h];
                    h--;
                }
            }
        }
        return w;
    }
};