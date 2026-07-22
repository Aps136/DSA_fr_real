class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {        
        int i=0;
        int j=0;        
        int n = nums.size();
        int mini= INT_MAX;
        int sum =0;
        while(j<n){
            sum+=nums[j];
            while(sum>=target){
                mini = min(mini, j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
        }
        return mini==INT_MAX? 0:mini;
        
    }
};

// TC: O(N) SC: O(1)
