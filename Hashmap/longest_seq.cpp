class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        //100,4,200,1,3,2
        unordered_set<int> numset(nums.begin(),nums.end());
        //1 2 3 4 100 200
        int longest=0;
        for(int x: numset){
            if(numset.find(x-1)==numset.end()){
                int curr = x;
                int currstreak =1;
                while(numset.find(curr+1)!=numset.end()){
                    curr++;
                    currstreak++;
                }
                longest = max(longest, currstreak);
            }
        }
        return longest;
        

    }
};

//TC: O(N) SC: O(N)
