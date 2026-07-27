class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        
        // Check each bit position from 0 to 31
        for (int i = 0; i < 32; i++) {
            int sum = 0;
            
            // Count how many numbers have the i-th bit set
            for (int num : nums) {
                if ((num >> i) & 1) {
                    sum++;
                }
            }
            
            // If sum % 3 != 0, the single number has this bit set!
            if (sum % 3 != 0) {
                result |= (1 << i);
            }
        }
        
        return result;
        
    }
};

//TC: O(N) SC: O(1)
