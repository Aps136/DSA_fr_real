class Solution {
public:
    double myPow(double x, long long n) {
        if(n>0){
            if(n==1) return x;
            double a = myPow(x,n/2);
            return (n%2==0)? a*a : a*a*x;
        }
        else if(n==0){
            return 1;
        }else{
            return myPow(1/x, -n);
        }
    }
};
