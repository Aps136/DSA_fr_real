class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
       
        
        for(char y: magazine){
            mp[y]++;
        }
        for(char c: ransomNote){
            if(mp[c]<=0){
                return false;
            }
            mp[c]--;
        }
        return true;
        
        
        
    }
};

//TC: O(N+M), SC: O(1)
