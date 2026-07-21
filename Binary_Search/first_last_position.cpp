class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n  = nums.size();
        int x = leftmost(nums, target, n);
        int y = rightmost(nums,target, n);
        return {x,y};
      
    }
private: 
    int leftmost(vector<int> &nums, int target, int n){
        int l=0;
        int r = n-1;
        int leftmost= -1;
        
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                leftmost = mid;
                r=mid-1;                
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r= mid-1;
            }
        }
        return leftmost;
    }
    int rightmost(vector<int> &nums, int target, int n){
        int l=0;
        int r = n-1;
        int rightmost= -1;
       
        while(l<=r){
            int mid = l+(r-l)/2;
            if(nums[mid]==target){
                rightmost = mid;
                l= mid+1;                
            }else if(nums[mid]<target){
                l=mid+1;
            }else{
                r= mid-1;
            }
        }
        return rightmost;
    }
};

//TC: O(Logn)
//SC: O(1)
