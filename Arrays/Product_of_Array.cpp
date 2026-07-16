class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //[1 2 3 4][1 2 3 4]
        // [1 2 6 12]
        //[]
        
        int n = nums.size();
        vector<int> res(n);
        int prefix=1;
        for(int i=0;i<n;i++){
            res[i]=prefix;
            prefix*=nums[i];
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            res[i]*=suffix;
            suffix*=nums[i];
        }
        return res;
       

    }
};
//TC: O(N) SC: O(1)
