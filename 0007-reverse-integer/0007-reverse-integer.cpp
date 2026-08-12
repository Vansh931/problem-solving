class Solution {
public:
long long rev(long long x,long long i){
    if(x==0) return i;
    if(x<0) x*=-1;
    return rev(x/10,i*10+x%10);
}
    int reverse(int x) {
        long long a = x;
        long long ans = rev(x,0);
        if(a<0){
            ans*=-1;
            if(ans<INT_MIN) return 0;
        }
        else if(ans>INT_MAX) return 0;
        return ans;

    }
};