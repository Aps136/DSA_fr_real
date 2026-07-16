class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums.size()<=1) return nums[0];
        int n = nums.size();
        int low=0, high = n-1;
        while(low<high){
            int mid = low+(high-low )/2;
            if(nums[mid]<=nums[high]){
                high = mid;
            }
            else{
                low=mid+1;
            }
        }
        return nums[low];
        
    }
};

//TC: O(logn) SC:O(1)
