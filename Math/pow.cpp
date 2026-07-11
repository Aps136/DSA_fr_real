class Solution {
public:
    double myPow(double x, int n) {
        if(n>0){
            if(n==1){
                return x;
            }
            if(n%2==0){
                double a = myPow(x,n/2);
                return a*a;
            }else{
                double a = myPow(x,n/2);
                return a*a*x;
            }

        }else if(n==0){
            return 1;
        }else{
            return myPow(1/x, -n);
        }

        
    }
};

//TC: O(LOGN) SC: O(LOGN)
