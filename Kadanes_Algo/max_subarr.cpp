class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int s=0;
        for(int x: nums){
            s+=x;
            if(s>maxi){
                maxi = s;
            }
            if(s<0){
                s=0;
            }
        }
        return maxi;

    }
};

//TC: O(N) SC: O(1)
