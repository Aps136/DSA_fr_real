class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int cand=0;
        for(int x: nums){
            if(count==0){
                cand=x;
            }
            if(x==cand){
                count++;
            }else{
                count--;
            }
        }
        return cand;
        
    }
};

//TC; 0(N) SC: O(1)
//Boyer-Moor Voting Algo. 
