class Solution {
public:
    double findPow(double x, long long n) {
        if(n==0) return 1;
        else if(n<0) return 1/findPow(x,-n);
        else if(n%2==0) return findPow(x*x,n/2);
        return x*findPow(x,n-1);
    }
    double myPow(double x, int n) {
        return findPow(x,(long long)n);
    }
};