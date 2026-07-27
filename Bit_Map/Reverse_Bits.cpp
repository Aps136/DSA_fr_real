class Solution {
public:
    int reverseBits(int n) {
        int res=0;
        for(int i=0;i<32;i++){
            res<<=1; //make space for the next digit
            res|=(n&1);// add the rightmost to res
            n>>=1;//shift to next digit
        }
        return res;
        
    }
};
//TC: O(1) SC: O(1) 
