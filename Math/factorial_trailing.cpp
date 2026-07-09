class Solution {
public:
    int trailingZeroes(int n) {
        int res=0;
        while(n>0){
            n/=5;
            res+=n;
        }
        return res;
              

        
    }
};

//TC: O(log5N) SC: O(1) 
//trailing zero is created everytime 2 multiplies by 5. number of times trailing zeroes occur = number of times 5 appears in prime factorization of the sequence
