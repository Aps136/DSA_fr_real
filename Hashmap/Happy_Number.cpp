class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> st;
        while(st.find(n)== st.end()){
            st.insert(n);
            n = getnext(n);
            if(n==1){
                return 1;
            }
        }
        return false;        
    }
private:
    int getnext(int n){
        
        int sum=0;
       
        while(n>0){
            int x = n%10;
            sum+=x*x;
            n/=10;
        }
        return sum;
    }
};

//TC: O(logn), SC: O(logn)
