class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {        
        int left =0;
        int minl= INT_MAX;
        int cursum=0;
        for(int right=0;right<nums.size();right++){
           cursum+=nums[right];
           while(cursum>=target){
             minl = min(minl, right-left+1);
             cursum -=nums[left];
             left++;
           }
        }
        return (minl==INT_MAX)?0:minl;
        
    }
};
//TC: O(N) SC: O(1) 
