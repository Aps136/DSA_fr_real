class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int x =0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[x]=nums[i];
                x++;
            }
        } 
        return x;       
    }
};

/*
TC: O(N), SC: O(1)
Add the element not equal to the val to 0th, increment index there after, return that counter
*/
