class Solution {
public:
    double myPow(double x, int n) {
        long long copy = n;
        if(copy<0){
            copy *=-1;
        }
        double ans = 1.0;
        while(copy){
            if(copy%2){
                ans*=x;
                copy = copy-1;
            }
            else{
                x*=x;
                copy/=2;
            }  
        }
        return n>0? ans: 1/ans;
    }
};