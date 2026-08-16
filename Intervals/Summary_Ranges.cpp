class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        std::vector<std::string> res;        
        for (int i = 0; i < nums.size(); i++) {
            int start = nums[i];
            while (i + 1 < nums.size() && nums[i + 1] - 1 == nums[i]) {
                i++;
            }
            
            if (start == nums[i]) {
                res.push_back(std::to_string(start));
            } else {
                res.push_back(std::to_string(start) + "->" + std::to_string(nums[i]));
            }
        }
        
        return res;
       
        
    }
};


//TC: O(n) SC: O(1)
